#include <yed/plugin.h>

PACKABLE_STYLE(vt) {
    yed_style s;

    memset(&s, 0, sizeof(s));

    s.selection.flags     = ATTR_INVERSE;

    s.search.flags        = ATTR_16 | ATTR_INVERSE;
    s.search.fg           = ATTR_16_YELLOW;

    s.search_cursor.flags = ATTR_16 | ATTR_INVERSE;
    s.search_cursor.fg    = ATTR_16_MAGENTA;

    s.attention.flags     = ATTR_16;
    s.attention.fg        = ATTR_16_RED;

    s.status_line.flags   = ATTR_INVERSE;

    s.code_comment.flags  = ATTR_16;
    s.code_comment.fg     = ATTR_16_GREEN;

    s.code_keyword.flags  = ATTR_16;
    s.code_keyword.fg     = ATTR_16_BLUE;

    s.code_preprocessor   = s.code_keyword;

    s.code_number.flags   = ATTR_16;
    s.code_number.fg      = ATTR_16_RED;

    s.code_constant       = s.code_number;

    s.code_string.flags   = ATTR_16;
    s.code_string.fg      = ATTR_16_RED;

    s.code_character      = s.code_string;

    yed_plugin_set_style(self, "vt", &s);

    return 0;
}
