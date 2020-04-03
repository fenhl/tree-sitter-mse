#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_DASH = 7,
  anon_sym_not = 8,
  anon_sym_COLON_EQ = 9,
  anon_sym_orelse = 10,
  anon_sym_and = 11,
  anon_sym_or = 12,
  anon_sym_xor = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_LT = 16,
  anon_sym_GT = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_PLUS = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_div = 23,
  anon_sym_mod = 24,
  anon_sym_CARET = 25,
  anon_sym_DOT = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  anon_sym_nil = 29,
  sym_number = 30,
  sym_comment = 31,
  sym_source_file = 32,
  sym__expression = 33,
  sym_expr_group = 34,
  sym_function = 35,
  sym_unary_expression = 36,
  sym_binary_expression = 37,
  sym_keyword_literal = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_not] = "not",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_orelse] = "orelse",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_div] = "div",
  [anon_sym_mod] = "mod",
  [anon_sym_CARET] = "^",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_nil] = "nil",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_expr_group] = "expr_group",
  [sym_function] = "function",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_keyword_literal] = "keyword_literal",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_orelse] = anon_sym_orelse,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_nil] = anon_sym_nil,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_expr_group] = sym_expr_group,
  [sym_function] = sym_function,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_keyword_literal] = sym_keyword_literal,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expr_group] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_literal] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_orelse);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_orelse] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__expression] = STATE(18),
    [sym_expr_group] = STATE(18),
    [sym_function] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_keyword_literal] = STATE(18),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_orelse] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_COLON_EQ] = ACTIONS(23),
    [anon_sym_orelse] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_COLON_EQ] = ACTIONS(27),
    [anon_sym_orelse] = ACTIONS(27),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_xor] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_mod] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_COLON_EQ] = ACTIONS(31),
    [anon_sym_orelse] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_mod] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_orelse] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_xor] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_div] = ACTIONS(35),
    [anon_sym_mod] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_COLON_EQ] = ACTIONS(31),
    [anon_sym_orelse] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_mod] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_COLON_EQ] = ACTIONS(31),
    [anon_sym_orelse] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_mod] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(31),
    [anon_sym_orelse] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_mod] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_COLON_EQ] = ACTIONS(47),
    [anon_sym_orelse] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_or] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_div] = ACTIONS(47),
    [anon_sym_mod] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(31),
    [anon_sym_orelse] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_mod] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(31),
    [anon_sym_orelse] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_xor] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_mod] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_COLON_EQ] = ACTIONS(31),
    [anon_sym_orelse] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_mod] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(59),
    [anon_sym_orelse] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_xor] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_mod] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_COLON_EQ] = ACTIONS(61),
    [anon_sym_orelse] = ACTIONS(61),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_xor] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_div] = ACTIONS(61),
    [anon_sym_mod] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(59),
    [anon_sym_orelse] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_xor] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_mod] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(59),
    [anon_sym_orelse] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_xor] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_mod] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(59),
    [anon_sym_orelse] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_xor] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_mod] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(14), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [38] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(14), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [76] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(14), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [114] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(7), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [149] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(5), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [184] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(16), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [219] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(8), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [254] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(9), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [289] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(11), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [324] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(12), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [359] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(13), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [394] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(10), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [429] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_number,
    ACTIONS(15), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_nil,
    STATE(17), 6,
      sym__expression,
      sym_expr_group,
      sym_function,
      sym_unary_expression,
      sym_binary_expression,
      sym_keyword_literal,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 38,
  [SMALL_STATE(21)] = 76,
  [SMALL_STATE(22)] = 114,
  [SMALL_STATE(23)] = 149,
  [SMALL_STATE(24)] = 184,
  [SMALL_STATE(25)] = 219,
  [SMALL_STATE(26)] = 254,
  [SMALL_STATE(27)] = 289,
  [SMALL_STATE(28)] = 324,
  [SMALL_STATE(29)] = 359,
  [SMALL_STATE(30)] = 394,
  [SMALL_STATE(31)] = 429,
  [SMALL_STATE(32)] = 464,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(18),
  [7] = {.count = 1, .reusable = true}, SHIFT(24),
  [9] = {.count = 1, .reusable = true}, SHIFT(31),
  [11] = {.count = 1, .reusable = true}, SHIFT(30),
  [13] = {.count = 1, .reusable = false}, SHIFT(30),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(18),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_expr_group, 3),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_expr_group, 3),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_expr_group, 4),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_expr_group, 4),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_literal, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_literal, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = true}, SHIFT(22),
  [43] = {.count = 1, .reusable = true}, SHIFT(29),
  [45] = {.count = 1, .reusable = true}, SHIFT(25),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = false}, SHIFT(26),
  [55] = {.count = 1, .reusable = true}, SHIFT(27),
  [57] = {.count = 1, .reusable = false}, SHIFT(27),
  [59] = {.count = 1, .reusable = true}, SHIFT(28),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_function, 3),
  [65] = {.count = 1, .reusable = true}, SHIFT(19),
  [67] = {.count = 1, .reusable = true}, SHIFT(2),
  [69] = {.count = 1, .reusable = true}, SHIFT(20),
  [71] = {.count = 1, .reusable = true}, SHIFT(15),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(21),
  [77] = {.count = 1, .reusable = false}, SHIFT(14),
  [79] = {.count = 1, .reusable = true}, SHIFT(4),
  [81] = {.count = 1, .reusable = true}, SHIFT(14),
  [83] = {.count = 1, .reusable = true}, SHIFT(3),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [87] = {.count = 1, .reusable = false}, SHIFT(7),
  [89] = {.count = 1, .reusable = true}, SHIFT(7),
  [91] = {.count = 1, .reusable = false}, SHIFT(5),
  [93] = {.count = 1, .reusable = true}, SHIFT(5),
  [95] = {.count = 1, .reusable = false}, SHIFT(16),
  [97] = {.count = 1, .reusable = true}, SHIFT(16),
  [99] = {.count = 1, .reusable = false}, SHIFT(8),
  [101] = {.count = 1, .reusable = true}, SHIFT(8),
  [103] = {.count = 1, .reusable = false}, SHIFT(9),
  [105] = {.count = 1, .reusable = true}, SHIFT(9),
  [107] = {.count = 1, .reusable = false}, SHIFT(11),
  [109] = {.count = 1, .reusable = true}, SHIFT(11),
  [111] = {.count = 1, .reusable = false}, SHIFT(12),
  [113] = {.count = 1, .reusable = true}, SHIFT(12),
  [115] = {.count = 1, .reusable = false}, SHIFT(13),
  [117] = {.count = 1, .reusable = true}, SHIFT(13),
  [119] = {.count = 1, .reusable = false}, SHIFT(10),
  [121] = {.count = 1, .reusable = true}, SHIFT(10),
  [123] = {.count = 1, .reusable = false}, SHIFT(17),
  [125] = {.count = 1, .reusable = true}, SHIFT(17),
  [127] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mse(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
