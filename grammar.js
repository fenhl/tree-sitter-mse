const PREC = { // see https://github.com/Lymia/MagicSetEditor2/blob/aa39a9bc712297071ae8065afd8c7609732fc255/src/script/parser.cpp#L360
    newline: 1, // newline ;
    seq: 2, // ;
    set: 3, // :=
    and: 4, // and or
    cmp: 5, // == != < > <= >=
    add: 6, // + -
    mul: 7, // * / mod
    pow: 8, // ^ (right associative)
    unary: 9, // - not (unary operators)
    fun: 10, // [] () . (function call, member)
    string: 11 // +{ }+ (smart string operators)
};

module.exports = grammar({
    name: 'mse',

    extras: $ => [
        $.comment,
        /\s/ //TODO change to the exact definition of isSpace, except for \n, in https://github.com/Lymia/MagicSetEditor2/blob/aa39a9bc712297071ae8065afd8c7609732fc255/src/script/parser.cpp#L191
    ],

    word: $ => $.identifier,

    rules: {
        source_file: $ => seq($._expression, optional(';')),
        _expression: $ => choice(
            $.expr_group,
            $.function,
            //TODO list or map literal
            //TODO if, for, rgb, rgba, min, max, assert
            $.unary_expression,
            $.binary_expression,
            $.keyword_literal,
            $.identifier,
            $.number
        ),
        expr_group: $ => seq(
            '(',
            $._expression,
            optional(';'),
            ')'
        ),
        function: $ => seq(
            '{',
            $._expression,
            optional(';'),
            '}'
        ),
        unary_expression: $ => choice(
            prec(PREC.unary, seq('-', $._expression)),
            prec(PREC.unary, seq('not', $._expression))
            //TODO function call, [] member
        ),
        binary_expression: $ => choice(
            prec.left(PREC.seq, seq($._expression, ';', $._expression)),
            prec.left(PREC.set, seq($._expression, ':=', $._expression)),
            prec.left(PREC.and, seq($._expression, 'orelse', $._expression)),
            prec.left(PREC.and, seq($._expression, 'and', $._expression)),
            prec.left(PREC.and, seq($._expression, 'or', $._expression)),
            prec.left(PREC.and, seq($._expression, 'xor', $._expression)),
            //TODO allow '=' if ':=' is not allowed
            prec.left(PREC.cmp, seq($._expression, '==', $._expression)),
            prec.left(PREC.cmp, seq($._expression, '!=', $._expression)),
            prec.left(PREC.cmp, seq($._expression, '<', $._expression)),
            prec.left(PREC.cmp, seq($._expression, '>', $._expression)),
            prec.left(PREC.cmp, seq($._expression, '<=', $._expression)),
            prec.left(PREC.cmp, seq($._expression, '>=', $._expression)),
            prec.left(PREC.add, seq($._expression, '+', $._expression)),
            prec.left(PREC.add, seq($._expression, '-', $._expression)),
            prec.left(PREC.mul, seq($._expression, '*', $._expression)),
            prec.left(PREC.mul, seq($._expression, '/', $._expression)),
            prec.left(PREC.mul, seq($._expression, 'div', $._expression)),
            prec.left(PREC.mul, seq($._expression, 'mod', $._expression)),
            prec.left(PREC.pow, seq($._expression, '^', $._expression)),
            prec.left(PREC.fun, seq($._expression, '.', $._expression)),
            //TODO @ (default arguments)
        ),
        keyword_literal: $ => choice('true', 'false', 'nil'),
        identifier: $ => /[A-Z_a-z][0-9A-Z_a-z]*/,
        number: $ => /[0-9][.0-9]*/,
        comment: $ => token(seq('#', /.*/))
    }
});
