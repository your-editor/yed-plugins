#include <yed/plugin.h>

int yed_plugin_boot(yed_plugin *self) {
    YEXE("plugin-load", "lang/syntax/yedrc");

    return 0;
}