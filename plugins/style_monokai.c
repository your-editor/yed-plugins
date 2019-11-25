#include "plugin.h"

int yed_plugin_boot(yed_plugin *self) {
    yed_style s;

    memset(&s, 0, sizeof(s));

    s.active.flags        = ATTR_256;
    s.active.fg           = 231;
    s.active.bg           = 235;

    s.inactive.flags      = ATTR_256;
    s.inactive.fg         = 231;
    s.inactive.bg         = 232;

    s.cursor_line.flags   = ATTR_256;
    s.cursor_line.fg      = 15;
    s.cursor_line.bg      = 233;

    s.search.flags        = ATTR_256 | ATTR_BOLD | ATTR_INVERSE;
    s.search.fg           = 24;
    s.search.bg           = 231;

    s.search_cursor.flags = ATTR_256 | ATTR_BOLD | ATTR_INVERSE;
    s.search_cursor.fg    = 193;
    s.search_cursor.bg    = 16;


    s.selection.flags     = ATTR_256;
    s.selection.fg        = 231;
    s.selection.bg        = 59;

    s.attention.flags     = ATTR_256;
    s.attention.fg        = 197;

    s.command_line        = s.inactive;

    s.status_line.flags   = ATTR_256;
    s.status_line.fg      = s.active.fg;
    s.status_line.bg      = 234;

    s.code_comment.flags  = ATTR_256;
    s.code_comment.fg     = 242;

    s.code_keyword.flags  = ATTR_256 | ATTR_BOLD;
    s.code_keyword.fg     = 197;

    s.code_preprocessor   = s.code_keyword;

    s.code_fn_call.flags  = ATTR_256;
    s.code_fn_call.fg     = 148;

    s.code_number.flags   = ATTR_256;
    s.code_number.fg      = 141;

    s.code_constant.flags = ATTR_256;
    s.code_constant.fg    = 81;

    s.code_string.flags   = ATTR_256;
    s.code_string.fg      = 186;

    s.code_character      = s.code_string;

    yed_plugin_set_style(self, "monokai", &s);

    return 0;
}