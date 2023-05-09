#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 296
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 0
#define TOKEN_COUNT 105
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym_DECL = 1,
  sym_FUNCTOR = 2,
  sym_INPUT_DECL = 3,
  sym_OUTPUT_DECL = 4,
  sym_PRINTSIZE_DECL = 5,
  sym_TYPE = 6,
  sym_COMPONENT = 7,
  sym_INSTANTIATE = 8,
  sym_NUMBER_TYPE = 9,
  sym_SYMBOL_TYPE = 10,
  sym_OVERRIDE = 11,
  sym_PRAGMA = 12,
  sym_AUTOINC = 13,
  sym_BW_AND = 14,
  sym_BW_OR = 15,
  sym_BW_XOR = 16,
  sym_BW_NOT = 17,
  sym_BW_SHIFT_L = 18,
  sym_BW_SHIFT_R = 19,
  sym_BW_SHIFT_R_UNSIGNED = 20,
  sym_L_AND = 21,
  sym_L_OR = 22,
  sym_L_NOT = 23,
  sym_TMATCH = 24,
  sym_MEAN = 25,
  sym_CAT = 26,
  sym_ORD = 27,
  sym_RANGE = 28,
  sym_STRLEN = 29,
  sym_SUBSTR = 30,
  sym_TCONTAINS = 31,
  sym_OUTPUT_QUALIFIER = 32,
  sym_INPUT_QUALIFIER = 33,
  sym_OVERRIDABLE_QUALIFIER = 34,
  sym_PRINTSIZE_QUALIFIER = 35,
  sym_EQREL_QUALIFIER = 36,
  sym_INLINE_QUALIFIER = 37,
  sym_BRIE_QUALIFIER = 38,
  sym_BTREE_QUALIFIER = 39,
  sym_BTREE_DELETE_QUALIFIER = 40,
  sym_MIN = 41,
  sym_MAX = 42,
  sym_AS = 43,
  sym_NIL = 44,
  sym_UNDERSCORE = 45,
  sym_COUNT = 46,
  sym_SUM = 47,
  sym_TRUE = 48,
  sym_FALSE = 49,
  sym_TOSTRING = 50,
  sym_TONUMBER = 51,
  sym_TOFLOAT = 52,
  sym_TOUNSIGNED = 53,
  sym_PLAN = 54,
  sym_PIPE = 55,
  sym_LBRACKET = 56,
  sym_RBRACKET = 57,
  sym_DOLLAR = 58,
  sym_PLUS = 59,
  sym_MINUS = 60,
  sym_LPAREN = 61,
  sym_RPAREN = 62,
  sym_COMMA = 63,
  sym_COLON = 64,
  sym_SEMICOLON = 65,
  sym_DOT = 66,
  sym_SUBTYPE = 67,
  sym_LE = 68,
  sym_GE = 69,
  sym_NE = 70,
  sym_EQUALS = 71,
  sym_EXCLAMATION = 72,
  sym_STAR = 73,
  sym_AT = 74,
  sym_SLASH = 75,
  sym_CARET = 76,
  sym_PERCENT = 77,
  sym_LBRACE = 78,
  sym_RBRACE = 79,
  sym_LT = 80,
  sym_GT = 81,
  sym_IF = 82,
  sym_INPUT = 83,
  sym_OUTPUT = 84,
  sym_CPP_VAR = 85,
  aux_sym_IDENT_token1 = 86,
  aux_sym_IDENT_token2 = 87,
  aux_sym_IDENT_token3 = 88,
  aux_sym_IDENT_token4 = 89,
  aux_sym_NUMBER_token1 = 90,
  aux_sym_NUMBER_token2 = 91,
  aux_sym_NUMBER_token3 = 92,
  sym_FLOAT = 93,
  sym_STRING = 94,
  sym_COMMENT = 95,
  sym_LOC = 96,
  anon_sym_POUNDinclude = 97,
  anon_sym_DQUOTE = 98,
  anon_sym_POUNDline = 99,
  anon_sym_POUNDdefine = 100,
  aux_sym_define_token1 = 101,
  sym_filename = 102,
  anon_sym_sips = 103,
  anon_sym_stateful = 104,
  sym_source_file = 105,
  sym_io_macro = 106,
  sym_IDENT = 107,
  sym_NUMBER = 108,
  sym_unit = 109,
  sym_include = 110,
  sym_line = 111,
  sym_define = 112,
  sym_identifier = 113,
  sym_type = 114,
  sym_non_empty_sum_branch_list = 115,
  sym_non_empty_record_type_list = 116,
  sym_union_type_list = 117,
  sym_sum_branch = 118,
  sym_relation_decl = 119,
  sym_relation_list = 120,
  sym_non_empty_attributes = 121,
  sym_relation_tags = 122,
  sym_fact = 123,
  sym_rule = 124,
  sym_rule_def = 125,
  sym_head = 126,
  sym_body = 127,
  sym_disjunction = 128,
  sym_conjunction = 129,
  sym_exec_plan = 130,
  sym_exec_plan_list = 131,
  sym_plan_item = 132,
  sym_identifier_list = 133,
  sym_exec_order_list = 134,
  sym_term = 135,
  sym_atom = 136,
  sym_constraint = 137,
  sym_non_empty_arg_list = 138,
  sym_arg = 139,
  sym_functor_built_in = 140,
  sym_component = 141,
  sym_component_head = 142,
  sym_comp_type = 143,
  sym_type_params = 144,
  sym_type_param_list = 145,
  sym_component_body = 146,
  sym_comp_init = 147,
  sym_functor_decl = 148,
  sym_pragma = 149,
  sym_io_head = 150,
  sym_io_directive_list = 151,
  sym_io_relation_list = 152,
  sym_non_empty_key_value_pairs = 153,
  sym_kvp_value = 154,
  aux_sym_source_file_repeat1 = 155,
  aux_sym_relation_tags_repeat1 = 156,
  aux_sym_component_repeat1 = 157,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_DECL] = "DECL",
  [sym_FUNCTOR] = "FUNCTOR",
  [sym_INPUT_DECL] = "INPUT_DECL",
  [sym_OUTPUT_DECL] = "OUTPUT_DECL",
  [sym_PRINTSIZE_DECL] = "PRINTSIZE_DECL",
  [sym_TYPE] = "TYPE",
  [sym_COMPONENT] = "COMPONENT",
  [sym_INSTANTIATE] = "INSTANTIATE",
  [sym_NUMBER_TYPE] = "NUMBER_TYPE",
  [sym_SYMBOL_TYPE] = "SYMBOL_TYPE",
  [sym_OVERRIDE] = "OVERRIDE",
  [sym_PRAGMA] = "PRAGMA",
  [sym_AUTOINC] = "AUTOINC",
  [sym_BW_AND] = "BW_AND",
  [sym_BW_OR] = "BW_OR",
  [sym_BW_XOR] = "BW_XOR",
  [sym_BW_NOT] = "BW_NOT",
  [sym_BW_SHIFT_L] = "BW_SHIFT_L",
  [sym_BW_SHIFT_R] = "BW_SHIFT_R",
  [sym_BW_SHIFT_R_UNSIGNED] = "BW_SHIFT_R_UNSIGNED",
  [sym_L_AND] = "L_AND",
  [sym_L_OR] = "L_OR",
  [sym_L_NOT] = "L_NOT",
  [sym_TMATCH] = "TMATCH",
  [sym_MEAN] = "MEAN",
  [sym_CAT] = "CAT",
  [sym_ORD] = "ORD",
  [sym_RANGE] = "RANGE",
  [sym_STRLEN] = "STRLEN",
  [sym_SUBSTR] = "SUBSTR",
  [sym_TCONTAINS] = "TCONTAINS",
  [sym_OUTPUT_QUALIFIER] = "OUTPUT_QUALIFIER",
  [sym_INPUT_QUALIFIER] = "INPUT_QUALIFIER",
  [sym_OVERRIDABLE_QUALIFIER] = "OVERRIDABLE_QUALIFIER",
  [sym_PRINTSIZE_QUALIFIER] = "PRINTSIZE_QUALIFIER",
  [sym_EQREL_QUALIFIER] = "EQREL_QUALIFIER",
  [sym_INLINE_QUALIFIER] = "INLINE_QUALIFIER",
  [sym_BRIE_QUALIFIER] = "BRIE_QUALIFIER",
  [sym_BTREE_QUALIFIER] = "BTREE_QUALIFIER",
  [sym_BTREE_DELETE_QUALIFIER] = "BTREE_DELETE_QUALIFIER",
  [sym_MIN] = "MIN",
  [sym_MAX] = "MAX",
  [sym_AS] = "AS",
  [sym_NIL] = "NIL",
  [sym_UNDERSCORE] = "UNDERSCORE",
  [sym_COUNT] = "COUNT",
  [sym_SUM] = "SUM",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym_TOSTRING] = "TOSTRING",
  [sym_TONUMBER] = "TONUMBER",
  [sym_TOFLOAT] = "TOFLOAT",
  [sym_TOUNSIGNED] = "TOUNSIGNED",
  [sym_PLAN] = "PLAN",
  [sym_PIPE] = "PIPE",
  [sym_LBRACKET] = "LBRACKET",
  [sym_RBRACKET] = "RBRACKET",
  [sym_DOLLAR] = "DOLLAR",
  [sym_PLUS] = "PLUS",
  [sym_MINUS] = "MINUS",
  [sym_LPAREN] = "LPAREN",
  [sym_RPAREN] = "RPAREN",
  [sym_COMMA] = "COMMA",
  [sym_COLON] = "COLON",
  [sym_SEMICOLON] = "SEMICOLON",
  [sym_DOT] = "DOT",
  [sym_SUBTYPE] = "SUBTYPE",
  [sym_LE] = "LE",
  [sym_GE] = "GE",
  [sym_NE] = "NE",
  [sym_EQUALS] = "EQUALS",
  [sym_EXCLAMATION] = "EXCLAMATION",
  [sym_STAR] = "STAR",
  [sym_AT] = "AT",
  [sym_SLASH] = "SLASH",
  [sym_CARET] = "CARET",
  [sym_PERCENT] = "PERCENT",
  [sym_LBRACE] = "LBRACE",
  [sym_RBRACE] = "RBRACE",
  [sym_LT] = "LT",
  [sym_GT] = "GT",
  [sym_IF] = "IF",
  [sym_INPUT] = "INPUT",
  [sym_OUTPUT] = "OUTPUT",
  [sym_CPP_VAR] = "CPP_VAR",
  [aux_sym_IDENT_token1] = "IDENT_token1",
  [aux_sym_IDENT_token2] = "IDENT_token2",
  [aux_sym_IDENT_token3] = "IDENT_token3",
  [aux_sym_IDENT_token4] = "IDENT_token4",
  [aux_sym_NUMBER_token1] = "NUMBER_token1",
  [aux_sym_NUMBER_token2] = "NUMBER_token2",
  [aux_sym_NUMBER_token3] = "NUMBER_token3",
  [sym_FLOAT] = "FLOAT",
  [sym_STRING] = "STRING",
  [sym_COMMENT] = "COMMENT",
  [sym_LOC] = "LOC",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_POUNDline] = "#line",
  [anon_sym_POUNDdefine] = "#define",
  [aux_sym_define_token1] = "define_token1",
  [sym_filename] = "filename",
  [anon_sym_sips] = "sips",
  [anon_sym_stateful] = "stateful",
  [sym_source_file] = "source_file",
  [sym_io_macro] = "io_macro",
  [sym_IDENT] = "IDENT",
  [sym_NUMBER] = "NUMBER",
  [sym_unit] = "unit",
  [sym_include] = "include",
  [sym_line] = "line",
  [sym_define] = "define",
  [sym_identifier] = "identifier",
  [sym_type] = "type",
  [sym_non_empty_sum_branch_list] = "non_empty_sum_branch_list",
  [sym_non_empty_record_type_list] = "non_empty_record_type_list",
  [sym_union_type_list] = "union_type_list",
  [sym_sum_branch] = "sum_branch",
  [sym_relation_decl] = "relation_decl",
  [sym_relation_list] = "relation_list",
  [sym_non_empty_attributes] = "non_empty_attributes",
  [sym_relation_tags] = "relation_tags",
  [sym_fact] = "fact",
  [sym_rule] = "rule",
  [sym_rule_def] = "rule_def",
  [sym_head] = "head",
  [sym_body] = "body",
  [sym_disjunction] = "disjunction",
  [sym_conjunction] = "conjunction",
  [sym_exec_plan] = "exec_plan",
  [sym_exec_plan_list] = "exec_plan_list",
  [sym_plan_item] = "plan_item",
  [sym_identifier_list] = "identifier_list",
  [sym_exec_order_list] = "exec_order_list",
  [sym_term] = "term",
  [sym_atom] = "atom",
  [sym_constraint] = "constraint",
  [sym_non_empty_arg_list] = "non_empty_arg_list",
  [sym_arg] = "arg",
  [sym_functor_built_in] = "functor_built_in",
  [sym_component] = "component",
  [sym_component_head] = "component_head",
  [sym_comp_type] = "comp_type",
  [sym_type_params] = "type_params",
  [sym_type_param_list] = "type_param_list",
  [sym_component_body] = "component_body",
  [sym_comp_init] = "comp_init",
  [sym_functor_decl] = "functor_decl",
  [sym_pragma] = "pragma",
  [sym_io_head] = "io_head",
  [sym_io_directive_list] = "io_directive_list",
  [sym_io_relation_list] = "io_relation_list",
  [sym_non_empty_key_value_pairs] = "non_empty_key_value_pairs",
  [sym_kvp_value] = "kvp_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_relation_tags_repeat1] = "relation_tags_repeat1",
  [aux_sym_component_repeat1] = "component_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_DECL] = sym_DECL,
  [sym_FUNCTOR] = sym_FUNCTOR,
  [sym_INPUT_DECL] = sym_INPUT_DECL,
  [sym_OUTPUT_DECL] = sym_OUTPUT_DECL,
  [sym_PRINTSIZE_DECL] = sym_PRINTSIZE_DECL,
  [sym_TYPE] = sym_TYPE,
  [sym_COMPONENT] = sym_COMPONENT,
  [sym_INSTANTIATE] = sym_INSTANTIATE,
  [sym_NUMBER_TYPE] = sym_NUMBER_TYPE,
  [sym_SYMBOL_TYPE] = sym_SYMBOL_TYPE,
  [sym_OVERRIDE] = sym_OVERRIDE,
  [sym_PRAGMA] = sym_PRAGMA,
  [sym_AUTOINC] = sym_AUTOINC,
  [sym_BW_AND] = sym_BW_AND,
  [sym_BW_OR] = sym_BW_OR,
  [sym_BW_XOR] = sym_BW_XOR,
  [sym_BW_NOT] = sym_BW_NOT,
  [sym_BW_SHIFT_L] = sym_BW_SHIFT_L,
  [sym_BW_SHIFT_R] = sym_BW_SHIFT_R,
  [sym_BW_SHIFT_R_UNSIGNED] = sym_BW_SHIFT_R_UNSIGNED,
  [sym_L_AND] = sym_L_AND,
  [sym_L_OR] = sym_L_OR,
  [sym_L_NOT] = sym_L_NOT,
  [sym_TMATCH] = sym_TMATCH,
  [sym_MEAN] = sym_MEAN,
  [sym_CAT] = sym_CAT,
  [sym_ORD] = sym_ORD,
  [sym_RANGE] = sym_RANGE,
  [sym_STRLEN] = sym_STRLEN,
  [sym_SUBSTR] = sym_SUBSTR,
  [sym_TCONTAINS] = sym_TCONTAINS,
  [sym_OUTPUT_QUALIFIER] = sym_OUTPUT_QUALIFIER,
  [sym_INPUT_QUALIFIER] = sym_INPUT_QUALIFIER,
  [sym_OVERRIDABLE_QUALIFIER] = sym_OVERRIDABLE_QUALIFIER,
  [sym_PRINTSIZE_QUALIFIER] = sym_PRINTSIZE_QUALIFIER,
  [sym_EQREL_QUALIFIER] = sym_EQREL_QUALIFIER,
  [sym_INLINE_QUALIFIER] = sym_INLINE_QUALIFIER,
  [sym_BRIE_QUALIFIER] = sym_BRIE_QUALIFIER,
  [sym_BTREE_QUALIFIER] = sym_BTREE_QUALIFIER,
  [sym_BTREE_DELETE_QUALIFIER] = sym_BTREE_DELETE_QUALIFIER,
  [sym_MIN] = sym_MIN,
  [sym_MAX] = sym_MAX,
  [sym_AS] = sym_AS,
  [sym_NIL] = sym_NIL,
  [sym_UNDERSCORE] = sym_UNDERSCORE,
  [sym_COUNT] = sym_COUNT,
  [sym_SUM] = sym_SUM,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
  [sym_TOSTRING] = sym_TOSTRING,
  [sym_TONUMBER] = sym_TONUMBER,
  [sym_TOFLOAT] = sym_TOFLOAT,
  [sym_TOUNSIGNED] = sym_TOUNSIGNED,
  [sym_PLAN] = sym_PLAN,
  [sym_PIPE] = sym_PIPE,
  [sym_LBRACKET] = sym_LBRACKET,
  [sym_RBRACKET] = sym_RBRACKET,
  [sym_DOLLAR] = sym_DOLLAR,
  [sym_PLUS] = sym_PLUS,
  [sym_MINUS] = sym_MINUS,
  [sym_LPAREN] = sym_LPAREN,
  [sym_RPAREN] = sym_RPAREN,
  [sym_COMMA] = sym_COMMA,
  [sym_COLON] = sym_COLON,
  [sym_SEMICOLON] = sym_SEMICOLON,
  [sym_DOT] = sym_DOT,
  [sym_SUBTYPE] = sym_SUBTYPE,
  [sym_LE] = sym_LE,
  [sym_GE] = sym_GE,
  [sym_NE] = sym_NE,
  [sym_EQUALS] = sym_EQUALS,
  [sym_EXCLAMATION] = sym_EXCLAMATION,
  [sym_STAR] = sym_STAR,
  [sym_AT] = sym_AT,
  [sym_SLASH] = sym_SLASH,
  [sym_CARET] = sym_CARET,
  [sym_PERCENT] = sym_PERCENT,
  [sym_LBRACE] = sym_LBRACE,
  [sym_RBRACE] = sym_RBRACE,
  [sym_LT] = sym_LT,
  [sym_GT] = sym_GT,
  [sym_IF] = sym_IF,
  [sym_INPUT] = sym_INPUT,
  [sym_OUTPUT] = sym_OUTPUT,
  [sym_CPP_VAR] = sym_CPP_VAR,
  [aux_sym_IDENT_token1] = aux_sym_IDENT_token1,
  [aux_sym_IDENT_token2] = aux_sym_IDENT_token2,
  [aux_sym_IDENT_token3] = aux_sym_IDENT_token3,
  [aux_sym_IDENT_token4] = aux_sym_IDENT_token4,
  [aux_sym_NUMBER_token1] = aux_sym_NUMBER_token1,
  [aux_sym_NUMBER_token2] = aux_sym_NUMBER_token2,
  [aux_sym_NUMBER_token3] = aux_sym_NUMBER_token3,
  [sym_FLOAT] = sym_FLOAT,
  [sym_STRING] = sym_STRING,
  [sym_COMMENT] = sym_COMMENT,
  [sym_LOC] = sym_LOC,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_POUNDline] = anon_sym_POUNDline,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [aux_sym_define_token1] = aux_sym_define_token1,
  [sym_filename] = sym_filename,
  [anon_sym_sips] = anon_sym_sips,
  [anon_sym_stateful] = anon_sym_stateful,
  [sym_source_file] = sym_source_file,
  [sym_io_macro] = sym_io_macro,
  [sym_IDENT] = sym_IDENT,
  [sym_NUMBER] = sym_NUMBER,
  [sym_unit] = sym_unit,
  [sym_include] = sym_include,
  [sym_line] = sym_line,
  [sym_define] = sym_define,
  [sym_identifier] = sym_identifier,
  [sym_type] = sym_type,
  [sym_non_empty_sum_branch_list] = sym_non_empty_sum_branch_list,
  [sym_non_empty_record_type_list] = sym_non_empty_record_type_list,
  [sym_union_type_list] = sym_union_type_list,
  [sym_sum_branch] = sym_sum_branch,
  [sym_relation_decl] = sym_relation_decl,
  [sym_relation_list] = sym_relation_list,
  [sym_non_empty_attributes] = sym_non_empty_attributes,
  [sym_relation_tags] = sym_relation_tags,
  [sym_fact] = sym_fact,
  [sym_rule] = sym_rule,
  [sym_rule_def] = sym_rule_def,
  [sym_head] = sym_head,
  [sym_body] = sym_body,
  [sym_disjunction] = sym_disjunction,
  [sym_conjunction] = sym_conjunction,
  [sym_exec_plan] = sym_exec_plan,
  [sym_exec_plan_list] = sym_exec_plan_list,
  [sym_plan_item] = sym_plan_item,
  [sym_identifier_list] = sym_identifier_list,
  [sym_exec_order_list] = sym_exec_order_list,
  [sym_term] = sym_term,
  [sym_atom] = sym_atom,
  [sym_constraint] = sym_constraint,
  [sym_non_empty_arg_list] = sym_non_empty_arg_list,
  [sym_arg] = sym_arg,
  [sym_functor_built_in] = sym_functor_built_in,
  [sym_component] = sym_component,
  [sym_component_head] = sym_component_head,
  [sym_comp_type] = sym_comp_type,
  [sym_type_params] = sym_type_params,
  [sym_type_param_list] = sym_type_param_list,
  [sym_component_body] = sym_component_body,
  [sym_comp_init] = sym_comp_init,
  [sym_functor_decl] = sym_functor_decl,
  [sym_pragma] = sym_pragma,
  [sym_io_head] = sym_io_head,
  [sym_io_directive_list] = sym_io_directive_list,
  [sym_io_relation_list] = sym_io_relation_list,
  [sym_non_empty_key_value_pairs] = sym_non_empty_key_value_pairs,
  [sym_kvp_value] = sym_kvp_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_relation_tags_repeat1] = aux_sym_relation_tags_repeat1,
  [aux_sym_component_repeat1] = aux_sym_component_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_DECL] = {
    .visible = true,
    .named = true,
  },
  [sym_FUNCTOR] = {
    .visible = true,
    .named = true,
  },
  [sym_INPUT_DECL] = {
    .visible = true,
    .named = true,
  },
  [sym_OUTPUT_DECL] = {
    .visible = true,
    .named = true,
  },
  [sym_PRINTSIZE_DECL] = {
    .visible = true,
    .named = true,
  },
  [sym_TYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_COMPONENT] = {
    .visible = true,
    .named = true,
  },
  [sym_INSTANTIATE] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER_TYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_TYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_OVERRIDE] = {
    .visible = true,
    .named = true,
  },
  [sym_PRAGMA] = {
    .visible = true,
    .named = true,
  },
  [sym_AUTOINC] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_AND] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_XOR] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_SHIFT_L] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_SHIFT_R] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_SHIFT_R_UNSIGNED] = {
    .visible = true,
    .named = true,
  },
  [sym_L_AND] = {
    .visible = true,
    .named = true,
  },
  [sym_L_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_L_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_TMATCH] = {
    .visible = true,
    .named = true,
  },
  [sym_MEAN] = {
    .visible = true,
    .named = true,
  },
  [sym_CAT] = {
    .visible = true,
    .named = true,
  },
  [sym_ORD] = {
    .visible = true,
    .named = true,
  },
  [sym_RANGE] = {
    .visible = true,
    .named = true,
  },
  [sym_STRLEN] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBSTR] = {
    .visible = true,
    .named = true,
  },
  [sym_TCONTAINS] = {
    .visible = true,
    .named = true,
  },
  [sym_OUTPUT_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_INPUT_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_OVERRIDABLE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_PRINTSIZE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_EQREL_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_INLINE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_BRIE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_BTREE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_BTREE_DELETE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_MIN] = {
    .visible = true,
    .named = true,
  },
  [sym_MAX] = {
    .visible = true,
    .named = true,
  },
  [sym_AS] = {
    .visible = true,
    .named = true,
  },
  [sym_NIL] = {
    .visible = true,
    .named = true,
  },
  [sym_UNDERSCORE] = {
    .visible = true,
    .named = true,
  },
  [sym_COUNT] = {
    .visible = true,
    .named = true,
  },
  [sym_SUM] = {
    .visible = true,
    .named = true,
  },
  [sym_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOSTRING] = {
    .visible = true,
    .named = true,
  },
  [sym_TONUMBER] = {
    .visible = true,
    .named = true,
  },
  [sym_TOFLOAT] = {
    .visible = true,
    .named = true,
  },
  [sym_TOUNSIGNED] = {
    .visible = true,
    .named = true,
  },
  [sym_PLAN] = {
    .visible = true,
    .named = true,
  },
  [sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [sym_LBRACKET] = {
    .visible = true,
    .named = true,
  },
  [sym_RBRACKET] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [sym_MINUS] = {
    .visible = true,
    .named = true,
  },
  [sym_LPAREN] = {
    .visible = true,
    .named = true,
  },
  [sym_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMA] = {
    .visible = true,
    .named = true,
  },
  [sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [sym_SEMICOLON] = {
    .visible = true,
    .named = true,
  },
  [sym_DOT] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBTYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_LE] = {
    .visible = true,
    .named = true,
  },
  [sym_GE] = {
    .visible = true,
    .named = true,
  },
  [sym_NE] = {
    .visible = true,
    .named = true,
  },
  [sym_EQUALS] = {
    .visible = true,
    .named = true,
  },
  [sym_EXCLAMATION] = {
    .visible = true,
    .named = true,
  },
  [sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [sym_AT] = {
    .visible = true,
    .named = true,
  },
  [sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [sym_CARET] = {
    .visible = true,
    .named = true,
  },
  [sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [sym_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [sym_LT] = {
    .visible = true,
    .named = true,
  },
  [sym_GT] = {
    .visible = true,
    .named = true,
  },
  [sym_IF] = {
    .visible = true,
    .named = true,
  },
  [sym_INPUT] = {
    .visible = true,
    .named = true,
  },
  [sym_OUTPUT] = {
    .visible = true,
    .named = true,
  },
  [sym_CPP_VAR] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_IDENT_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IDENT_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IDENT_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IDENT_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NUMBER_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NUMBER_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NUMBER_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_FLOAT] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_LOC] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sips] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stateful] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_io_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_IDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_sum_branch_list] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_record_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sum_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_list] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_def] = {
    .visible = true,
    .named = true,
  },
  [sym_head] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_plan] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_plan_list] = {
    .visible = true,
    .named = true,
  },
  [sym_plan_item] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_list] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_order_list] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_built_in] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_component_head] = {
    .visible = true,
    .named = true,
  },
  [sym_comp_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_params] = {
    .visible = true,
    .named = true,
  },
  [sym_type_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym_comp_init] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_io_head] = {
    .visible = true,
    .named = true,
  },
  [sym_io_directive_list] = {
    .visible = true,
    .named = true,
  },
  [sym_io_relation_list] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_key_value_pairs] = {
    .visible = true,
    .named = true,
  },
  [sym_kvp_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_tags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 38,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 66,
  [92] = 92,
  [93] = 63,
  [94] = 38,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 63,
  [112] = 66,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 69,
  [117] = 71,
  [118] = 68,
  [119] = 98,
  [120] = 87,
  [121] = 80,
  [122] = 82,
  [123] = 123,
  [124] = 124,
  [125] = 105,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 147,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 63,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 164,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 66,
  [177] = 175,
  [178] = 178,
  [179] = 174,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 183,
  [184] = 180,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 189,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 194,
  [197] = 195,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 180,
  [205] = 205,
  [206] = 206,
  [207] = 187,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 259,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(240);
      if (lookahead == '"') ADVANCE(443);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '%') ADVANCE(245);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == ';') ADVANCE(229);
      if (lookahead == '<') ADVANCE(250);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(252);
      if (lookahead == '@') ADVANCE(242);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(440);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(239);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(229);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '@') ADVANCE(242);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(443);
      if (lookahead == '%') ADVANCE(245);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(229);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(252);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(245);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(229);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(252);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(245);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == ';') ADVANCE(229);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(252);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '@') ADVANCE(242);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(431);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(242);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(435);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(234);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(1);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 140:
      if (lookahead == 'z') ADVANCE(49);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(435);
      if (lookahead == '\r') ADVANCE(439);
      END_STATE();
    case 148:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(441);
      END_STATE();
    case 149:
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == '<') ADVANCE(248);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 150:
      if (eof) ADVANCE(154);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 151:
      if (eof) ADVANCE(154);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(283);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_DECL);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_FUNCTOR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_INPUT_DECL);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_OUTPUT_DECL);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_PRINTSIZE_DECL);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_TYPE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_COMPONENT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_INSTANTIATE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_NUMBER_TYPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_SYMBOL_TYPE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_OVERRIDE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_PRAGMA);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_AUTOINC);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_BW_AND);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_BW_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_BW_OR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_BW_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_BW_XOR);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_BW_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_BW_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_L_AND);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_L_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_L_OR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_L_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_L_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_TMATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_MEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_CAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_RANGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_STRLEN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_SUBSTR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_TCONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_OUTPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_INPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_OVERRIDABLE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_PRINTSIZE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_EQREL_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_INLINE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_BRIE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_BTREE_QUALIFIER);
      if (lookahead == '_') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_BTREE_DELETE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_MIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_MAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_COUNT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_SUM);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_TOSTRING);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_TONUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_TOFLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_TOUNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_PLAN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_PIPE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_DOLLAR);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_PLUS);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_COLON);
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_SUBTYPE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_LE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_GE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_NE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_EQUALS);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_STAR);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_AT);
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(435);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_CARET);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_LT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(234);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(234);
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_GT);
      if (lookahead == '=') ADVANCE(236);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_INPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_CPP_VAR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'N') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'P') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'U') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'x') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 'x') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'q') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == 'v') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == 'v') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'U') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'U') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == '_') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == '_') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'c') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'c') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'f') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'h') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'h') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'm') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'p') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'z') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_NUMBER_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_NUMBER_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_COMMENT);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(457);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(456);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\r') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(451);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(433);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(456);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(457);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(147);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_LOC);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_LOC);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(148);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == '\r') ADVANCE(439);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(449);
      if (lookahead == '/') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(448);
      if (lookahead == '/') ADVANCE(436);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(448);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '/') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead == '/') ADVANCE(438);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '*') ADVANCE(453);
      if (lookahead == '/') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(457);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '/') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(457);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(433);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead == '"') ADVANCE(435);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_sips);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 149},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 149},
  [11] = {.lex_state = 149},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 152},
  [31] = {.lex_state = 152},
  [32] = {.lex_state = 152},
  [33] = {.lex_state = 149},
  [34] = {.lex_state = 149},
  [35] = {.lex_state = 149},
  [36] = {.lex_state = 152},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 150},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 149},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 149},
  [49] = {.lex_state = 149},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 149},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 149},
  [59] = {.lex_state = 149},
  [60] = {.lex_state = 149},
  [61] = {.lex_state = 149},
  [62] = {.lex_state = 149},
  [63] = {.lex_state = 150},
  [64] = {.lex_state = 149},
  [65] = {.lex_state = 149},
  [66] = {.lex_state = 150},
  [67] = {.lex_state = 149},
  [68] = {.lex_state = 150},
  [69] = {.lex_state = 150},
  [70] = {.lex_state = 149},
  [71] = {.lex_state = 150},
  [72] = {.lex_state = 149},
  [73] = {.lex_state = 149},
  [74] = {.lex_state = 149},
  [75] = {.lex_state = 149},
  [76] = {.lex_state = 149},
  [77] = {.lex_state = 149},
  [78] = {.lex_state = 149},
  [79] = {.lex_state = 153},
  [80] = {.lex_state = 151},
  [81] = {.lex_state = 153},
  [82] = {.lex_state = 149},
  [83] = {.lex_state = 149},
  [84] = {.lex_state = 149},
  [85] = {.lex_state = 149},
  [86] = {.lex_state = 149},
  [87] = {.lex_state = 150},
  [88] = {.lex_state = 149},
  [89] = {.lex_state = 149},
  [90] = {.lex_state = 149},
  [91] = {.lex_state = 153},
  [92] = {.lex_state = 149},
  [93] = {.lex_state = 153},
  [94] = {.lex_state = 153},
  [95] = {.lex_state = 149},
  [96] = {.lex_state = 149},
  [97] = {.lex_state = 149},
  [98] = {.lex_state = 150},
  [99] = {.lex_state = 149},
  [100] = {.lex_state = 149},
  [101] = {.lex_state = 149},
  [102] = {.lex_state = 149},
  [103] = {.lex_state = 149},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 149},
  [106] = {.lex_state = 149},
  [107] = {.lex_state = 149},
  [108] = {.lex_state = 149},
  [109] = {.lex_state = 149},
  [110] = {.lex_state = 149},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 149},
  [114] = {.lex_state = 149},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 151},
  [122] = {.lex_state = 149},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 149},
  [126] = {.lex_state = 149},
  [127] = {.lex_state = 149},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 149},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 149},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 149},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 149},
  [214] = {.lex_state = 149},
  [215] = {.lex_state = 149},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 149},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 149},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 149},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 149},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 149},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 149},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 149},
  [276] = {.lex_state = 455},
  [277] = {.lex_state = 149},
  [278] = {.lex_state = 149},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 149},
  [285] = {.lex_state = 149},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 455},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 149},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 450},
  [294] = {.lex_state = 149},
  [295] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_DECL] = ACTIONS(1),
    [sym_FUNCTOR] = ACTIONS(1),
    [sym_INPUT_DECL] = ACTIONS(1),
    [sym_OUTPUT_DECL] = ACTIONS(1),
    [sym_PRINTSIZE_DECL] = ACTIONS(1),
    [sym_TYPE] = ACTIONS(1),
    [sym_COMPONENT] = ACTIONS(1),
    [sym_INSTANTIATE] = ACTIONS(1),
    [sym_NUMBER_TYPE] = ACTIONS(1),
    [sym_SYMBOL_TYPE] = ACTIONS(1),
    [sym_OVERRIDE] = ACTIONS(1),
    [sym_PRAGMA] = ACTIONS(1),
    [sym_AUTOINC] = ACTIONS(1),
    [sym_BW_AND] = ACTIONS(1),
    [sym_BW_OR] = ACTIONS(1),
    [sym_BW_XOR] = ACTIONS(1),
    [sym_BW_NOT] = ACTIONS(1),
    [sym_BW_SHIFT_L] = ACTIONS(1),
    [sym_BW_SHIFT_R] = ACTIONS(1),
    [sym_BW_SHIFT_R_UNSIGNED] = ACTIONS(1),
    [sym_L_AND] = ACTIONS(1),
    [sym_L_OR] = ACTIONS(1),
    [sym_L_NOT] = ACTIONS(1),
    [sym_TMATCH] = ACTIONS(1),
    [sym_MEAN] = ACTIONS(1),
    [sym_CAT] = ACTIONS(1),
    [sym_ORD] = ACTIONS(1),
    [sym_RANGE] = ACTIONS(1),
    [sym_STRLEN] = ACTIONS(1),
    [sym_SUBSTR] = ACTIONS(1),
    [sym_TCONTAINS] = ACTIONS(1),
    [sym_OUTPUT_QUALIFIER] = ACTIONS(1),
    [sym_INPUT_QUALIFIER] = ACTIONS(1),
    [sym_OVERRIDABLE_QUALIFIER] = ACTIONS(1),
    [sym_PRINTSIZE_QUALIFIER] = ACTIONS(1),
    [sym_EQREL_QUALIFIER] = ACTIONS(1),
    [sym_INLINE_QUALIFIER] = ACTIONS(1),
    [sym_BRIE_QUALIFIER] = ACTIONS(1),
    [sym_BTREE_QUALIFIER] = ACTIONS(1),
    [sym_BTREE_DELETE_QUALIFIER] = ACTIONS(1),
    [sym_MIN] = ACTIONS(1),
    [sym_MAX] = ACTIONS(1),
    [sym_AS] = ACTIONS(1),
    [sym_NIL] = ACTIONS(1),
    [sym_UNDERSCORE] = ACTIONS(1),
    [sym_COUNT] = ACTIONS(1),
    [sym_SUM] = ACTIONS(1),
    [sym_TRUE] = ACTIONS(1),
    [sym_FALSE] = ACTIONS(1),
    [sym_TOSTRING] = ACTIONS(1),
    [sym_TONUMBER] = ACTIONS(1),
    [sym_TOFLOAT] = ACTIONS(1),
    [sym_TOUNSIGNED] = ACTIONS(1),
    [sym_PIPE] = ACTIONS(1),
    [sym_LBRACKET] = ACTIONS(1),
    [sym_RBRACKET] = ACTIONS(1),
    [sym_DOLLAR] = ACTIONS(1),
    [sym_PLUS] = ACTIONS(1),
    [sym_MINUS] = ACTIONS(1),
    [sym_LPAREN] = ACTIONS(1),
    [sym_RPAREN] = ACTIONS(1),
    [sym_COMMA] = ACTIONS(1),
    [sym_COLON] = ACTIONS(1),
    [sym_SEMICOLON] = ACTIONS(1),
    [sym_DOT] = ACTIONS(1),
    [sym_SUBTYPE] = ACTIONS(1),
    [sym_LE] = ACTIONS(1),
    [sym_GE] = ACTIONS(1),
    [sym_NE] = ACTIONS(1),
    [sym_EQUALS] = ACTIONS(1),
    [sym_EXCLAMATION] = ACTIONS(1),
    [sym_STAR] = ACTIONS(1),
    [sym_AT] = ACTIONS(1),
    [sym_SLASH] = ACTIONS(1),
    [sym_CARET] = ACTIONS(1),
    [sym_PERCENT] = ACTIONS(1),
    [sym_LBRACE] = ACTIONS(1),
    [sym_RBRACE] = ACTIONS(1),
    [sym_LT] = ACTIONS(1),
    [sym_GT] = ACTIONS(1),
    [sym_IF] = ACTIONS(1),
    [sym_INPUT] = ACTIONS(1),
    [sym_OUTPUT] = ACTIONS(1),
    [sym_CPP_VAR] = ACTIONS(1),
    [aux_sym_IDENT_token1] = ACTIONS(1),
    [aux_sym_IDENT_token2] = ACTIONS(1),
    [aux_sym_IDENT_token3] = ACTIONS(1),
    [aux_sym_IDENT_token4] = ACTIONS(1),
    [aux_sym_NUMBER_token1] = ACTIONS(1),
    [aux_sym_NUMBER_token2] = ACTIONS(1),
    [aux_sym_NUMBER_token3] = ACTIONS(1),
    [sym_FLOAT] = ACTIONS(1),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUNDline] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_stateful] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(292),
    [sym_io_macro] = STATE(106),
    [sym_IDENT] = STATE(160),
    [sym_unit] = STATE(10),
    [sym_include] = STATE(106),
    [sym_line] = STATE(106),
    [sym_define] = STATE(106),
    [sym_identifier] = STATE(237),
    [sym_type] = STATE(106),
    [sym_relation_decl] = STATE(106),
    [sym_fact] = STATE(106),
    [sym_rule] = STATE(106),
    [sym_rule_def] = STATE(48),
    [sym_head] = STATE(238),
    [sym_atom] = STATE(212),
    [sym_component] = STATE(106),
    [sym_component_head] = STATE(214),
    [sym_comp_init] = STATE(106),
    [sym_functor_decl] = STATE(106),
    [sym_pragma] = STATE(106),
    [sym_io_head] = STATE(106),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_DECL] = ACTIONS(7),
    [sym_FUNCTOR] = ACTIONS(9),
    [sym_INPUT_DECL] = ACTIONS(11),
    [sym_OUTPUT_DECL] = ACTIONS(11),
    [sym_PRINTSIZE_DECL] = ACTIONS(11),
    [sym_TYPE] = ACTIONS(13),
    [sym_COMPONENT] = ACTIONS(15),
    [sym_INSTANTIATE] = ACTIONS(17),
    [sym_NUMBER_TYPE] = ACTIONS(19),
    [sym_SYMBOL_TYPE] = ACTIONS(19),
    [sym_PRAGMA] = ACTIONS(21),
    [sym_INPUT] = ACTIONS(23),
    [sym_OUTPUT] = ACTIONS(23),
    [sym_CPP_VAR] = ACTIONS(23),
    [aux_sym_IDENT_token1] = ACTIONS(25),
    [aux_sym_IDENT_token2] = ACTIONS(25),
    [aux_sym_IDENT_token3] = ACTIONS(27),
    [aux_sym_IDENT_token4] = ACTIONS(27),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(29),
    [anon_sym_POUNDline] = ACTIONS(31),
    [anon_sym_POUNDdefine] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(47), 1,
      sym_NUMBER,
    STATE(104), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_arg,
    STATE(186), 1,
      sym_conjunction,
    STATE(188), 1,
      sym_term,
    STATE(218), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(271), 1,
      sym_body,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(199), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [116] = 32,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(47), 1,
      sym_NUMBER,
    STATE(104), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_arg,
    STATE(186), 1,
      sym_conjunction,
    STATE(188), 1,
      sym_term,
    STATE(218), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(281), 1,
      sym_functor_built_in,
    STATE(295), 1,
      sym_body,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(199), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [232] = 32,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(47), 1,
      sym_NUMBER,
    STATE(104), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_arg,
    STATE(186), 1,
      sym_conjunction,
    STATE(188), 1,
      sym_term,
    STATE(218), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(253), 1,
      sym_body,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(199), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [348] = 32,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(47), 1,
      sym_NUMBER,
    STATE(104), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_arg,
    STATE(186), 1,
      sym_conjunction,
    STATE(188), 1,
      sym_term,
    STATE(218), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(256), 1,
      sym_body,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(199), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [464] = 31,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(47), 1,
      sym_NUMBER,
    STATE(104), 1,
      sym_IDENT,
    STATE(115), 1,
      sym_arg,
    STATE(186), 1,
      sym_conjunction,
    STATE(188), 1,
      sym_term,
    STATE(228), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(199), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [577] = 30,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(47), 1,
      sym_NUMBER,
    STATE(104), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_arg,
    STATE(182), 1,
      sym_conjunction,
    STATE(188), 1,
      sym_term,
    STATE(237), 1,
      sym_identifier,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(199), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [687] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(47), 1,
      sym_NUMBER,
    STATE(104), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_arg,
    STATE(192), 1,
      sym_term,
    STATE(237), 1,
      sym_identifier,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(199), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [794] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(47), 1,
      sym_NUMBER,
    STATE(104), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_arg,
    STATE(201), 1,
      sym_term,
    STATE(237), 1,
      sym_identifier,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(199), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [901] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(9), 1,
      sym_FUNCTOR,
    ACTIONS(13), 1,
      sym_TYPE,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(17), 1,
      sym_INSTANTIATE,
    ACTIONS(21), 1,
      sym_PRAGMA,
    ACTIONS(29), 1,
      anon_sym_POUNDinclude,
    ACTIONS(31), 1,
      anon_sym_POUNDline,
    ACTIONS(33), 1,
      anon_sym_POUNDdefine,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_rule_def,
    STATE(160), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(214), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(238), 1,
      sym_head,
    ACTIONS(19), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    STATE(11), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(23), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(106), 13,
      sym_io_macro,
      sym_include,
      sym_line,
      sym_define,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_functor_decl,
      sym_pragma,
      sym_io_head,
  [994] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_DECL,
    ACTIONS(80), 1,
      sym_FUNCTOR,
    ACTIONS(86), 1,
      sym_TYPE,
    ACTIONS(89), 1,
      sym_COMPONENT,
    ACTIONS(92), 1,
      sym_INSTANTIATE,
    ACTIONS(98), 1,
      sym_PRAGMA,
    ACTIONS(110), 1,
      anon_sym_POUNDinclude,
    ACTIONS(113), 1,
      anon_sym_POUNDline,
    ACTIONS(116), 1,
      anon_sym_POUNDdefine,
    STATE(48), 1,
      sym_rule_def,
    STATE(160), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(214), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(238), 1,
      sym_head,
    ACTIONS(95), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(104), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(107), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    STATE(11), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(83), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(101), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(106), 13,
      sym_io_macro,
      sym_include,
      sym_line,
      sym_define,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_functor_decl,
      sym_pragma,
      sym_io_head,
  [1087] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(119), 1,
      sym_RBRACKET,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(235), 1,
      sym_non_empty_arg_list,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1177] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    ACTIONS(123), 1,
      sym_RPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(249), 1,
      sym_non_empty_arg_list,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1267] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    ACTIONS(125), 1,
      sym_RPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(230), 1,
      sym_non_empty_arg_list,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1357] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    ACTIONS(127), 1,
      sym_RPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(232), 1,
      sym_non_empty_arg_list,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1447] = 23,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(227), 1,
      sym_non_empty_arg_list,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1534] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(124), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1618] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(50), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1702] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(129), 1,
      sym_LPAREN,
    STATE(132), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1786] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(133), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1870] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(132), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1954] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(52), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2038] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(44), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2122] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(129), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2206] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(54), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2290] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(134), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2374] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(135), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2458] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(130), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2542] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(35), 1,
      sym_AUTOINC,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(121), 1,
      sym_LPAREN,
    STATE(131), 1,
      sym_arg,
    STATE(281), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(47), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2626] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(32), 1,
      aux_sym_relation_tags_repeat1,
    STATE(85), 1,
      sym_relation_tags,
    ACTIONS(135), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(133), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(131), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2675] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(32), 1,
      aux_sym_relation_tags_repeat1,
    STATE(95), 1,
      sym_relation_tags,
    ACTIONS(139), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(133), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(137), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2724] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(36), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(145), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(143), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(141), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2770] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(147), 1,
      sym_DECL,
    ACTIONS(153), 1,
      sym_TYPE,
    ACTIONS(156), 1,
      sym_COMPONENT,
    ACTIONS(159), 1,
      sym_INSTANTIATE,
    ACTIONS(165), 1,
      sym_OVERRIDE,
    ACTIONS(168), 1,
      sym_RBRACE,
    STATE(48), 1,
      sym_rule_def,
    STATE(160), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(214), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(238), 1,
      sym_head,
    ACTIONS(162), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(173), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(176), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    STATE(33), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(150), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(170), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(126), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2846] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(181), 1,
      sym_TYPE,
    ACTIONS(183), 1,
      sym_INSTANTIATE,
    ACTIONS(187), 1,
      sym_OVERRIDE,
    ACTIONS(189), 1,
      sym_RBRACE,
    STATE(48), 1,
      sym_rule_def,
    STATE(160), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(214), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(238), 1,
      sym_head,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(185), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(35), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(23), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(179), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(126), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2922] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(181), 1,
      sym_TYPE,
    ACTIONS(183), 1,
      sym_INSTANTIATE,
    ACTIONS(187), 1,
      sym_OVERRIDE,
    ACTIONS(191), 1,
      sym_RBRACE,
    STATE(48), 1,
      sym_rule_def,
    STATE(160), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(214), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(238), 1,
      sym_head,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(185), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(33), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(23), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(179), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(126), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2998] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(36), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(198), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(195), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(193), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3044] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(160), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_identifier,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(200), 12,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(202), 15,
      sym_RBRACKET,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3093] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(206), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(204), 23,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_SUBTYPE,
      sym_EQUALS,
      sym_LBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3131] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(206), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(204), 25,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_LBRACE,
      sym_RBRACE,
  [3168] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(210), 1,
      sym_LT,
    STATE(49), 1,
      sym_type_params,
    ACTIONS(212), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(208), 22,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3209] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(216), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(214), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
      sym_IF,
  [3245] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(218), 24,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
      anon_sym_DQUOTE,
  [3281] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(224), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(222), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
      sym_IF,
  [3317] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(228), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(226), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3352] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(232), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(230), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3387] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(236), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(234), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3422] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(200), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(202), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3457] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_PLAN,
    ACTIONS(244), 1,
      sym_LOC,
    STATE(74), 1,
      sym_exec_plan,
    ACTIONS(242), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(238), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3498] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(246), 22,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3533] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(228), 2,
      sym_LT,
      sym_GT,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(226), 11,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_RBRACE,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [3574] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(258), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(256), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3609] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(262), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(260), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3644] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(228), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(226), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3679] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(262), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(260), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3714] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(262), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(260), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(266), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(264), 22,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3784] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(206), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(204), 19,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_SUBTYPE,
      sym_EQUALS,
      sym_LBRACE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [3818] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(270), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(268), 21,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3852] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(274), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(272), 21,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3886] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(278), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(276), 21,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3920] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 1,
      sym_COMMA,
    ACTIONS(284), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(280), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3956] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(288), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(286), 21,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3990] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(292), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(290), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4024] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(296), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(294), 21,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4058] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(300), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(298), 21,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4092] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(304), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(302), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4126] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(308), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(306), 21,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4160] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(312), 1,
      sym_DOT,
    ACTIONS(314), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(310), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_LPAREN,
      sym_COMMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4195] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(312), 1,
      sym_DOT,
    ACTIONS(318), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(316), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_LPAREN,
      sym_COMMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4230] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(322), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(320), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4263] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(324), 1,
      sym_LBRACE,
    ACTIONS(292), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(290), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4298] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(326), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PIPE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4331] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(330), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PIPE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4364] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(338), 1,
      sym_LOC,
    ACTIONS(336), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(334), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4399] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(342), 1,
      sym_PIPE,
    ACTIONS(344), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(340), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4434] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(348), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(346), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4467] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(352), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(350), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4499] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(354), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4531] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(360), 1,
      sym_DOT,
    ACTIONS(364), 1,
      anon_sym_stateful,
    ACTIONS(362), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(358), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4567] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(366), 1,
      sym_SUBTYPE,
    ACTIONS(368), 1,
      sym_EQUALS,
    ACTIONS(356), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(354), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4603] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(360), 1,
      sym_DOT,
    ACTIONS(374), 1,
      anon_sym_stateful,
    ACTIONS(372), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(370), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4639] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(378), 1,
      sym_LPAREN,
    ACTIONS(380), 1,
      sym_COMMA,
    ACTIONS(382), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(376), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4675] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(386), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(384), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4707] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(390), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(388), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4739] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(394), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(392), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4771] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(398), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(396), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4803] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(312), 1,
      sym_DOT,
    ACTIONS(402), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(400), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4837] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(406), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(404), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4869] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(410), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(408), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4901] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(414), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(412), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4933] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(304), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
    ACTIONS(302), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4965] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(418), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(416), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4997] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(292), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
    ACTIONS(290), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5029] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(206), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
    ACTIONS(204), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5061] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(135), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(131), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5093] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(422), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(420), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5125] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(426), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(424), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5157] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(312), 1,
      sym_DOT,
    ACTIONS(430), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(428), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5191] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(336), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(334), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5223] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(434), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(432), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5255] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(438), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(436), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5287] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(442), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(440), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5319] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(448), 1,
      sym_STRING,
    ACTIONS(446), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(444), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5352] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(290), 2,
      sym_LPAREN,
      sym_DOT,
    ACTIONS(200), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(202), 17,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
  [5385] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(450), 1,
      sym_PIPE,
    ACTIONS(422), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(420), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5418] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(454), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(452), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5448] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(458), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(456), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5478] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(462), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(460), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5508] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(372), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(370), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5538] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(466), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(464), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5568] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(292), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(290), 16,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5598] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(304), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(302), 16,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5628] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(470), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(468), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5658] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(474), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(472), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5688] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RPAREN,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(478), 2,
      sym_LT,
      sym_GT,
    ACTIONS(476), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5725] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      sym_DOT,
    ACTIONS(318), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(316), 15,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5756] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(324), 1,
      sym_LBRACE,
    ACTIONS(292), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(290), 14,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5787] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      sym_DOT,
    ACTIONS(314), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(310), 15,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5818] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      sym_DOT,
    ACTIONS(430), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(428), 14,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5848] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      sym_DOT,
    ACTIONS(402), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(400), 14,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5878] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      sym_SUBTYPE,
    ACTIONS(484), 1,
      sym_EQUALS,
    ACTIONS(356), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(354), 13,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5910] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(378), 1,
      sym_LPAREN,
    ACTIONS(486), 1,
      sym_COMMA,
    ACTIONS(382), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(376), 13,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5942] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(478), 2,
      sym_LT,
      sym_GT,
    ACTIONS(476), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5976] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(488), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6007] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(490), 1,
      sym_PIPE,
    ACTIONS(422), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(420), 13,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [6036] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(492), 13,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [6062] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(496), 13,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [6088] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(500), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6117] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(502), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6146] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RPAREN,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(504), 1,
      sym_COMMA,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6176] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(506), 1,
      sym_COMMA,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6203] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(508), 1,
      sym_COLON,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6230] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(510), 1,
      sym_RPAREN,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6257] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(512), 1,
      sym_COMMA,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6284] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RPAREN,
    ACTIONS(254), 1,
      sym_CARET,
    ACTIONS(252), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(250), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [6311] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_LBRACKET,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(75), 1,
      sym_sum_branch,
    STATE(96), 1,
      sym_non_empty_sum_branch_list,
    STATE(117), 1,
      sym_IDENT,
    STATE(119), 1,
      sym_identifier,
    STATE(125), 1,
      sym_union_type_list,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6341] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_LBRACKET,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(71), 1,
      sym_IDENT,
    STATE(75), 1,
      sym_sum_branch,
    STATE(96), 1,
      sym_non_empty_sum_branch_list,
    STATE(98), 1,
      sym_identifier,
    STATE(105), 1,
      sym_union_type_list,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6371] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(526), 1,
      sym_STRING,
    STATE(242), 1,
      sym_kvp_value,
    STATE(243), 1,
      sym_IDENT,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(524), 2,
      sym_TRUE,
      sym_FALSE,
  [6396] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(526), 1,
      sym_STRING,
    STATE(233), 1,
      sym_kvp_value,
    STATE(243), 1,
      sym_IDENT,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(524), 2,
      sym_TRUE,
      sym_FALSE,
  [6421] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(528), 1,
      sym_LBRACE,
    STATE(45), 1,
      sym_atom,
    STATE(160), 1,
      sym_IDENT,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6445] = 8,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(530), 1,
      sym_LPAREN,
    ACTIONS(532), 1,
      anon_sym_sips,
    STATE(61), 1,
      sym_plan_item,
    STATE(70), 1,
      sym_exec_plan_list,
    STATE(277), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6471] = 8,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(530), 1,
      sym_LPAREN,
    ACTIONS(532), 1,
      anon_sym_sips,
    STATE(61), 1,
      sym_plan_item,
    STATE(76), 1,
      sym_exec_plan_list,
    STATE(277), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6497] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(534), 1,
      sym_LBRACE,
    STATE(53), 1,
      sym_atom,
    STATE(160), 1,
      sym_IDENT,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6521] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(536), 1,
      sym_AT,
    STATE(160), 1,
      sym_IDENT,
    STATE(221), 1,
      sym_identifier,
    STATE(269), 1,
      sym_identifier_list,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6545] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(536), 1,
      sym_AT,
    STATE(160), 1,
      sym_IDENT,
    STATE(221), 1,
      sym_identifier,
    STATE(279), 1,
      sym_identifier_list,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6569] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(536), 1,
      sym_AT,
    STATE(160), 1,
      sym_IDENT,
    STATE(221), 1,
      sym_identifier,
    STATE(270), 1,
      sym_identifier_list,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6593] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(63), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_identifier,
    STATE(82), 1,
      sym_io_relation_list,
    STATE(84), 1,
      sym_io_directive_list,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6617] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(84), 1,
      sym_io_directive_list,
    STATE(111), 1,
      sym_IDENT,
    STATE(118), 1,
      sym_identifier,
    STATE(122), 1,
      sym_io_relation_list,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6641] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(538), 1,
      sym_RBRACKET,
    STATE(241), 1,
      sym_non_empty_record_type_list,
    STATE(252), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6662] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(237), 1,
      sym_identifier,
    STATE(265), 1,
      sym_atom,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6683] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(540), 1,
      sym_RPAREN,
    STATE(245), 1,
      sym_non_empty_attributes,
    STATE(260), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6704] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(542), 1,
      sym_RPAREN,
    STATE(251), 1,
      sym_non_empty_attributes,
    STATE(260), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6725] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(544), 1,
      sym_RPAREN,
    STATE(250), 1,
      sym_non_empty_key_value_pairs,
    STATE(255), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6746] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(546), 1,
      sym_RBRACE,
    STATE(240), 1,
      sym_non_empty_attributes,
    STATE(260), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6767] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(75), 1,
      sym_sum_branch,
    STATE(77), 1,
      sym_non_empty_sum_branch_list,
    STATE(268), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6788] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(236), 1,
      sym_atom,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6809] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(548), 1,
      sym_RPAREN,
    STATE(225), 1,
      sym_exec_order_list,
    STATE(231), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6829] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(220), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6847] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(229), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6865] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(290), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [6877] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(247), 1,
      sym_type_param_list,
    STATE(248), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6895] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(223), 1,
      sym_relation_list,
    STATE(244), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6913] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(40), 1,
      sym_IDENT,
    STATE(215), 1,
      sym_comp_type,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6931] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(40), 1,
      sym_IDENT,
    STATE(102), 1,
      sym_comp_type,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6949] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(217), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6967] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(209), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6985] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(224), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7003] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7021] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(160), 1,
      sym_IDENT,
    STATE(216), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7039] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      aux_sym_IDENT_token3,
    STATE(79), 1,
      sym_identifier,
    STATE(93), 1,
      sym_IDENT,
    ACTIONS(550), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7057] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(40), 1,
      sym_IDENT,
    STATE(102), 1,
      sym_comp_type,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7075] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      aux_sym_IDENT_token3,
    STATE(81), 1,
      sym_identifier,
    STATE(93), 1,
      sym_IDENT,
    ACTIONS(550), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7093] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(554), 1,
      sym_RPAREN,
    STATE(222), 1,
      sym_exec_order_list,
    STATE(231), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7113] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(63), 1,
      sym_IDENT,
    STATE(69), 1,
      sym_identifier,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7131] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(63), 1,
      sym_IDENT,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7149] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(302), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [7161] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(111), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_identifier,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7179] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(40), 1,
      sym_IDENT,
    STATE(219), 1,
      sym_comp_type,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7197] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(111), 1,
      sym_IDENT,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7215] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(112), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7230] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      aux_sym_IDENT_token3,
    STATE(91), 1,
      sym_IDENT,
    ACTIONS(550), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7245] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 1,
      sym_COMMA,
    ACTIONS(556), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7258] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(560), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7269] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(66), 1,
      sym_IDENT,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7284] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(562), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7295] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 1,
      sym_COMMA,
    ACTIONS(564), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7308] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(80), 1,
      sym_IDENT,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7323] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(566), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7334] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(261), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7349] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(259), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7364] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(239), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7379] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7390] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(254), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7405] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(96), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7420] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(78), 1,
      sym_IDENT,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7435] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      aux_sym_IDENT_token3,
    STATE(96), 1,
      sym_IDENT,
    ACTIONS(520), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7450] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(78), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7465] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(266), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7480] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(570), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7491] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(283), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7506] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(572), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7517] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(127), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7532] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(262), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7547] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(176), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7562] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(246), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7577] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(294), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7592] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(121), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7607] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(574), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7618] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(576), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [7630] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(226), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7644] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(580), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [7656] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(584), 1,
      sym_DOT,
    ACTIONS(586), 1,
      sym_LE,
    ACTIONS(582), 2,
      sym_COMMA,
      sym_IF,
  [7670] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(282), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7684] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(590), 1,
      sym_LBRACE,
    ACTIONS(588), 2,
      sym_COMMA,
      sym_COLON,
  [7695] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(592), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [7704] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(594), 2,
      sym_RBRACKET,
      sym_COMMA,
  [7715] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(596), 2,
      sym_RBRACKET,
      sym_COMMA,
  [7726] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(598), 1,
      sym_SEMICOLON,
    ACTIONS(600), 2,
      sym_DOT,
      sym_RBRACE,
  [7737] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(602), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [7746] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(604), 1,
      sym_RPAREN,
    ACTIONS(606), 1,
      sym_COMMA,
  [7759] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(608), 1,
      sym_RPAREN,
    ACTIONS(610), 1,
      sym_COMMA,
  [7772] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(612), 1,
      sym_RPAREN,
    ACTIONS(614), 1,
      sym_COMMA,
  [7782] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(616), 1,
      sym_LPAREN,
    ACTIONS(618), 1,
      sym_COMMA,
  [7792] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(620), 1,
      sym_RPAREN,
  [7802] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(614), 1,
      sym_COMMA,
    ACTIONS(622), 1,
      sym_RPAREN,
  [7812] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(624), 2,
      sym_RPAREN,
      sym_COMMA,
  [7820] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(626), 1,
      sym_RPAREN,
    ACTIONS(628), 1,
      sym_COMMA,
  [7830] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(598), 1,
      sym_SEMICOLON,
    ACTIONS(630), 1,
      sym_RPAREN,
  [7840] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(626), 1,
      sym_RPAREN,
  [7850] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(628), 1,
      sym_COMMA,
    ACTIONS(632), 1,
      sym_RPAREN,
  [7860] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(634), 2,
      sym_RPAREN,
      sym_COMMA,
  [7868] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(628), 1,
      sym_COMMA,
    ACTIONS(636), 1,
      sym_RPAREN,
  [7878] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(638), 2,
      sym_RPAREN,
      sym_COMMA,
  [7886] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(640), 1,
      sym_LPAREN,
  [7896] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RBRACKET,
    ACTIONS(628), 1,
      sym_COMMA,
  [7906] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(642), 2,
      sym_COMMA,
      sym_IF,
  [7914] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_DOT,
    ACTIONS(644), 1,
      sym_LPAREN,
  [7924] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(646), 1,
      sym_COMMA,
    ACTIONS(648), 1,
      sym_IF,
  [7934] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(650), 2,
      sym_COMMA,
      sym_GT,
  [7942] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(652), 1,
      sym_COMMA,
    ACTIONS(654), 1,
      sym_RBRACE,
  [7952] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(656), 1,
      sym_RBRACKET,
    ACTIONS(658), 1,
      sym_COMMA,
  [7962] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(660), 2,
      sym_RPAREN,
      sym_COMMA,
  [7970] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(662), 2,
      sym_RPAREN,
      sym_COMMA,
  [7978] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(664), 2,
      sym_LPAREN,
      sym_COMMA,
  [7986] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(652), 1,
      sym_COMMA,
    ACTIONS(666), 1,
      sym_RPAREN,
  [7996] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(668), 2,
      sym_LPAREN,
      sym_COMMA,
  [8004] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(670), 1,
      sym_COMMA,
    ACTIONS(672), 1,
      sym_GT,
  [8014] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(674), 2,
      sym_COMMA,
      sym_GT,
  [8022] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(127), 1,
      sym_RPAREN,
    ACTIONS(628), 1,
      sym_COMMA,
  [8032] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(676), 1,
      sym_RPAREN,
    ACTIONS(678), 1,
      sym_COMMA,
  [8042] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(652), 1,
      sym_COMMA,
    ACTIONS(680), 1,
      sym_RPAREN,
  [8052] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(682), 1,
      sym_COLON,
  [8059] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(636), 1,
      sym_RBRACE,
  [8066] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(684), 1,
      sym_LPAREN,
  [8073] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(686), 1,
      sym_EQUALS,
  [8080] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(688), 1,
      sym_DOT,
  [8087] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(690), 1,
      sym_COLON,
  [8094] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(692), 1,
      sym_LPAREN,
  [8101] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(694), 1,
      sym_EQUALS,
  [8108] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(696), 1,
      sym_COLON,
  [8115] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(698), 1,
      sym_EQUALS,
  [8122] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(700), 1,
      sym_COLON,
  [8129] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
  [8136] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
  [8143] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(706), 1,
      sym_IF,
  [8150] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(708), 1,
      sym_EQUALS,
  [8157] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RPAREN,
  [8164] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(324), 1,
      sym_LBRACE,
  [8171] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(710), 1,
      sym_RPAREN,
  [8178] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(712), 1,
      sym_RPAREN,
  [8185] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(714), 1,
      sym_DOT,
  [8192] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(716), 1,
      sym_LPAREN,
  [8199] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(718), 1,
      sym_COLON,
  [8206] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(720), 1,
      sym_LPAREN,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(722), 1,
      sym_COLON,
  [8220] = 2,
    ACTIONS(724), 1,
      sym_COMMENT,
    ACTIONS(726), 1,
      sym_filename,
  [8227] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(728), 1,
      sym_COLON,
  [8234] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(730), 1,
      sym_COLON,
  [8241] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(732), 1,
      sym_RPAREN,
  [8248] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(734), 1,
      sym_LPAREN,
  [8255] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(736), 1,
      sym_LPAREN,
  [8262] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
  [8269] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(640), 1,
      sym_LPAREN,
  [8276] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(740), 1,
      sym_STRING,
  [8283] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(742), 1,
      sym_COLON,
  [8290] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(744), 1,
      sym_LPAREN,
  [8297] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(746), 1,
      sym_LPAREN,
  [8304] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(748), 1,
      sym_LPAREN,
  [8311] = 2,
    ACTIONS(724), 1,
      sym_COMMENT,
    ACTIONS(750), 1,
      sym_filename,
  [8318] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
  [8325] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(754), 1,
      sym_STRING,
  [8332] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
  [8339] = 2,
    ACTIONS(724), 1,
      sym_COMMENT,
    ACTIONS(758), 1,
      aux_sym_define_token1,
  [8346] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(760), 1,
      sym_COLON,
  [8353] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(626), 1,
      sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 116,
  [SMALL_STATE(4)] = 232,
  [SMALL_STATE(5)] = 348,
  [SMALL_STATE(6)] = 464,
  [SMALL_STATE(7)] = 577,
  [SMALL_STATE(8)] = 687,
  [SMALL_STATE(9)] = 794,
  [SMALL_STATE(10)] = 901,
  [SMALL_STATE(11)] = 994,
  [SMALL_STATE(12)] = 1087,
  [SMALL_STATE(13)] = 1177,
  [SMALL_STATE(14)] = 1267,
  [SMALL_STATE(15)] = 1357,
  [SMALL_STATE(16)] = 1447,
  [SMALL_STATE(17)] = 1534,
  [SMALL_STATE(18)] = 1618,
  [SMALL_STATE(19)] = 1702,
  [SMALL_STATE(20)] = 1786,
  [SMALL_STATE(21)] = 1870,
  [SMALL_STATE(22)] = 1954,
  [SMALL_STATE(23)] = 2038,
  [SMALL_STATE(24)] = 2122,
  [SMALL_STATE(25)] = 2206,
  [SMALL_STATE(26)] = 2290,
  [SMALL_STATE(27)] = 2374,
  [SMALL_STATE(28)] = 2458,
  [SMALL_STATE(29)] = 2542,
  [SMALL_STATE(30)] = 2626,
  [SMALL_STATE(31)] = 2675,
  [SMALL_STATE(32)] = 2724,
  [SMALL_STATE(33)] = 2770,
  [SMALL_STATE(34)] = 2846,
  [SMALL_STATE(35)] = 2922,
  [SMALL_STATE(36)] = 2998,
  [SMALL_STATE(37)] = 3044,
  [SMALL_STATE(38)] = 3093,
  [SMALL_STATE(39)] = 3131,
  [SMALL_STATE(40)] = 3168,
  [SMALL_STATE(41)] = 3209,
  [SMALL_STATE(42)] = 3245,
  [SMALL_STATE(43)] = 3281,
  [SMALL_STATE(44)] = 3317,
  [SMALL_STATE(45)] = 3352,
  [SMALL_STATE(46)] = 3387,
  [SMALL_STATE(47)] = 3422,
  [SMALL_STATE(48)] = 3457,
  [SMALL_STATE(49)] = 3498,
  [SMALL_STATE(50)] = 3533,
  [SMALL_STATE(51)] = 3574,
  [SMALL_STATE(52)] = 3609,
  [SMALL_STATE(53)] = 3644,
  [SMALL_STATE(54)] = 3679,
  [SMALL_STATE(55)] = 3714,
  [SMALL_STATE(56)] = 3749,
  [SMALL_STATE(57)] = 3784,
  [SMALL_STATE(58)] = 3818,
  [SMALL_STATE(59)] = 3852,
  [SMALL_STATE(60)] = 3886,
  [SMALL_STATE(61)] = 3920,
  [SMALL_STATE(62)] = 3956,
  [SMALL_STATE(63)] = 3990,
  [SMALL_STATE(64)] = 4024,
  [SMALL_STATE(65)] = 4058,
  [SMALL_STATE(66)] = 4092,
  [SMALL_STATE(67)] = 4126,
  [SMALL_STATE(68)] = 4160,
  [SMALL_STATE(69)] = 4195,
  [SMALL_STATE(70)] = 4230,
  [SMALL_STATE(71)] = 4263,
  [SMALL_STATE(72)] = 4298,
  [SMALL_STATE(73)] = 4331,
  [SMALL_STATE(74)] = 4364,
  [SMALL_STATE(75)] = 4399,
  [SMALL_STATE(76)] = 4434,
  [SMALL_STATE(77)] = 4467,
  [SMALL_STATE(78)] = 4499,
  [SMALL_STATE(79)] = 4531,
  [SMALL_STATE(80)] = 4567,
  [SMALL_STATE(81)] = 4603,
  [SMALL_STATE(82)] = 4639,
  [SMALL_STATE(83)] = 4675,
  [SMALL_STATE(84)] = 4707,
  [SMALL_STATE(85)] = 4739,
  [SMALL_STATE(86)] = 4771,
  [SMALL_STATE(87)] = 4803,
  [SMALL_STATE(88)] = 4837,
  [SMALL_STATE(89)] = 4869,
  [SMALL_STATE(90)] = 4901,
  [SMALL_STATE(91)] = 4933,
  [SMALL_STATE(92)] = 4965,
  [SMALL_STATE(93)] = 4997,
  [SMALL_STATE(94)] = 5029,
  [SMALL_STATE(95)] = 5061,
  [SMALL_STATE(96)] = 5093,
  [SMALL_STATE(97)] = 5125,
  [SMALL_STATE(98)] = 5157,
  [SMALL_STATE(99)] = 5191,
  [SMALL_STATE(100)] = 5223,
  [SMALL_STATE(101)] = 5255,
  [SMALL_STATE(102)] = 5287,
  [SMALL_STATE(103)] = 5319,
  [SMALL_STATE(104)] = 5352,
  [SMALL_STATE(105)] = 5385,
  [SMALL_STATE(106)] = 5418,
  [SMALL_STATE(107)] = 5448,
  [SMALL_STATE(108)] = 5478,
  [SMALL_STATE(109)] = 5508,
  [SMALL_STATE(110)] = 5538,
  [SMALL_STATE(111)] = 5568,
  [SMALL_STATE(112)] = 5598,
  [SMALL_STATE(113)] = 5628,
  [SMALL_STATE(114)] = 5658,
  [SMALL_STATE(115)] = 5688,
  [SMALL_STATE(116)] = 5725,
  [SMALL_STATE(117)] = 5756,
  [SMALL_STATE(118)] = 5787,
  [SMALL_STATE(119)] = 5818,
  [SMALL_STATE(120)] = 5848,
  [SMALL_STATE(121)] = 5878,
  [SMALL_STATE(122)] = 5910,
  [SMALL_STATE(123)] = 5942,
  [SMALL_STATE(124)] = 5976,
  [SMALL_STATE(125)] = 6007,
  [SMALL_STATE(126)] = 6036,
  [SMALL_STATE(127)] = 6062,
  [SMALL_STATE(128)] = 6088,
  [SMALL_STATE(129)] = 6117,
  [SMALL_STATE(130)] = 6146,
  [SMALL_STATE(131)] = 6176,
  [SMALL_STATE(132)] = 6203,
  [SMALL_STATE(133)] = 6230,
  [SMALL_STATE(134)] = 6257,
  [SMALL_STATE(135)] = 6284,
  [SMALL_STATE(136)] = 6311,
  [SMALL_STATE(137)] = 6341,
  [SMALL_STATE(138)] = 6371,
  [SMALL_STATE(139)] = 6396,
  [SMALL_STATE(140)] = 6421,
  [SMALL_STATE(141)] = 6445,
  [SMALL_STATE(142)] = 6471,
  [SMALL_STATE(143)] = 6497,
  [SMALL_STATE(144)] = 6521,
  [SMALL_STATE(145)] = 6545,
  [SMALL_STATE(146)] = 6569,
  [SMALL_STATE(147)] = 6593,
  [SMALL_STATE(148)] = 6617,
  [SMALL_STATE(149)] = 6641,
  [SMALL_STATE(150)] = 6662,
  [SMALL_STATE(151)] = 6683,
  [SMALL_STATE(152)] = 6704,
  [SMALL_STATE(153)] = 6725,
  [SMALL_STATE(154)] = 6746,
  [SMALL_STATE(155)] = 6767,
  [SMALL_STATE(156)] = 6788,
  [SMALL_STATE(157)] = 6809,
  [SMALL_STATE(158)] = 6829,
  [SMALL_STATE(159)] = 6847,
  [SMALL_STATE(160)] = 6865,
  [SMALL_STATE(161)] = 6877,
  [SMALL_STATE(162)] = 6895,
  [SMALL_STATE(163)] = 6913,
  [SMALL_STATE(164)] = 6931,
  [SMALL_STATE(165)] = 6949,
  [SMALL_STATE(166)] = 6967,
  [SMALL_STATE(167)] = 6985,
  [SMALL_STATE(168)] = 7003,
  [SMALL_STATE(169)] = 7021,
  [SMALL_STATE(170)] = 7039,
  [SMALL_STATE(171)] = 7057,
  [SMALL_STATE(172)] = 7075,
  [SMALL_STATE(173)] = 7093,
  [SMALL_STATE(174)] = 7113,
  [SMALL_STATE(175)] = 7131,
  [SMALL_STATE(176)] = 7149,
  [SMALL_STATE(177)] = 7161,
  [SMALL_STATE(178)] = 7179,
  [SMALL_STATE(179)] = 7197,
  [SMALL_STATE(180)] = 7215,
  [SMALL_STATE(181)] = 7230,
  [SMALL_STATE(182)] = 7245,
  [SMALL_STATE(183)] = 7258,
  [SMALL_STATE(184)] = 7269,
  [SMALL_STATE(185)] = 7284,
  [SMALL_STATE(186)] = 7295,
  [SMALL_STATE(187)] = 7308,
  [SMALL_STATE(188)] = 7323,
  [SMALL_STATE(189)] = 7334,
  [SMALL_STATE(190)] = 7349,
  [SMALL_STATE(191)] = 7364,
  [SMALL_STATE(192)] = 7379,
  [SMALL_STATE(193)] = 7390,
  [SMALL_STATE(194)] = 7405,
  [SMALL_STATE(195)] = 7420,
  [SMALL_STATE(196)] = 7435,
  [SMALL_STATE(197)] = 7450,
  [SMALL_STATE(198)] = 7465,
  [SMALL_STATE(199)] = 7480,
  [SMALL_STATE(200)] = 7491,
  [SMALL_STATE(201)] = 7506,
  [SMALL_STATE(202)] = 7517,
  [SMALL_STATE(203)] = 7532,
  [SMALL_STATE(204)] = 7547,
  [SMALL_STATE(205)] = 7562,
  [SMALL_STATE(206)] = 7577,
  [SMALL_STATE(207)] = 7592,
  [SMALL_STATE(208)] = 7607,
  [SMALL_STATE(209)] = 7618,
  [SMALL_STATE(210)] = 7630,
  [SMALL_STATE(211)] = 7644,
  [SMALL_STATE(212)] = 7656,
  [SMALL_STATE(213)] = 7670,
  [SMALL_STATE(214)] = 7684,
  [SMALL_STATE(215)] = 7695,
  [SMALL_STATE(216)] = 7704,
  [SMALL_STATE(217)] = 7715,
  [SMALL_STATE(218)] = 7726,
  [SMALL_STATE(219)] = 7737,
  [SMALL_STATE(220)] = 7746,
  [SMALL_STATE(221)] = 7759,
  [SMALL_STATE(222)] = 7772,
  [SMALL_STATE(223)] = 7782,
  [SMALL_STATE(224)] = 7792,
  [SMALL_STATE(225)] = 7802,
  [SMALL_STATE(226)] = 7812,
  [SMALL_STATE(227)] = 7820,
  [SMALL_STATE(228)] = 7830,
  [SMALL_STATE(229)] = 7840,
  [SMALL_STATE(230)] = 7850,
  [SMALL_STATE(231)] = 7860,
  [SMALL_STATE(232)] = 7868,
  [SMALL_STATE(233)] = 7878,
  [SMALL_STATE(234)] = 7886,
  [SMALL_STATE(235)] = 7896,
  [SMALL_STATE(236)] = 7906,
  [SMALL_STATE(237)] = 7914,
  [SMALL_STATE(238)] = 7924,
  [SMALL_STATE(239)] = 7934,
  [SMALL_STATE(240)] = 7942,
  [SMALL_STATE(241)] = 7952,
  [SMALL_STATE(242)] = 7962,
  [SMALL_STATE(243)] = 7970,
  [SMALL_STATE(244)] = 7978,
  [SMALL_STATE(245)] = 7986,
  [SMALL_STATE(246)] = 7996,
  [SMALL_STATE(247)] = 8004,
  [SMALL_STATE(248)] = 8014,
  [SMALL_STATE(249)] = 8022,
  [SMALL_STATE(250)] = 8032,
  [SMALL_STATE(251)] = 8042,
  [SMALL_STATE(252)] = 8052,
  [SMALL_STATE(253)] = 8059,
  [SMALL_STATE(254)] = 8066,
  [SMALL_STATE(255)] = 8073,
  [SMALL_STATE(256)] = 8080,
  [SMALL_STATE(257)] = 8087,
  [SMALL_STATE(258)] = 8094,
  [SMALL_STATE(259)] = 8101,
  [SMALL_STATE(260)] = 8108,
  [SMALL_STATE(261)] = 8115,
  [SMALL_STATE(262)] = 8122,
  [SMALL_STATE(263)] = 8129,
  [SMALL_STATE(264)] = 8136,
  [SMALL_STATE(265)] = 8143,
  [SMALL_STATE(266)] = 8150,
  [SMALL_STATE(267)] = 8157,
  [SMALL_STATE(268)] = 8164,
  [SMALL_STATE(269)] = 8171,
  [SMALL_STATE(270)] = 8178,
  [SMALL_STATE(271)] = 8185,
  [SMALL_STATE(272)] = 8192,
  [SMALL_STATE(273)] = 8199,
  [SMALL_STATE(274)] = 8206,
  [SMALL_STATE(275)] = 8213,
  [SMALL_STATE(276)] = 8220,
  [SMALL_STATE(277)] = 8227,
  [SMALL_STATE(278)] = 8234,
  [SMALL_STATE(279)] = 8241,
  [SMALL_STATE(280)] = 8248,
  [SMALL_STATE(281)] = 8255,
  [SMALL_STATE(282)] = 8262,
  [SMALL_STATE(283)] = 8269,
  [SMALL_STATE(284)] = 8276,
  [SMALL_STATE(285)] = 8283,
  [SMALL_STATE(286)] = 8290,
  [SMALL_STATE(287)] = 8297,
  [SMALL_STATE(288)] = 8304,
  [SMALL_STATE(289)] = 8311,
  [SMALL_STATE(290)] = 8318,
  [SMALL_STATE(291)] = 8325,
  [SMALL_STATE(292)] = 8332,
  [SMALL_STATE(293)] = 8339,
  [SMALL_STATE(294)] = 8346,
  [SMALL_STATE(295)] = 8353,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(263),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_tags, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_tags, 1),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(162),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(148),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(207),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(178),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(189),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(197),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(202),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(272),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(39),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(36),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IDENT, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_IDENT, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_type, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_type, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_type, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_type, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_params, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_params, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plan_item, 7),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plan_item, 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plan_item, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plan_item, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_def, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_def, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_plan_list, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_plan_list, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plan_item, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plan_item, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plan_item, 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plan_item, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plan_item, 6),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plan_item, 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_def, 6),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_def, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_relation_list, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_relation_list, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_relation_list, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_relation_list, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_plan_list, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_plan_list, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_branch, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_branch, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_branch, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_branch, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_plan, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_plan, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_directive_list, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_directive_list, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_head, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_head, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_list, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type_list, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_directive_list, 4),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_directive_list, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_directive_list, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_directive_list, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_list, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type_list, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_macro, 4),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_macro, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_init, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_init, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_arg_list, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_arg_list, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_attributes, 5),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_attributes, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_head, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_record_type_list, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_record_type_list, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_head, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_order_list, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_order_list, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_key_value_pairs, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_list, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_key_value_pairs, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kvp_value, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_list, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_list, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_list, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_built_in, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [756] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_souffle(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
