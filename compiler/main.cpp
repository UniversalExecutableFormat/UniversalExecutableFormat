#include "include/version.hpp"
#include "include/multiplatform.hpp"
#include <cstring>

int main(int argc, char* argv[]) {
    set_console_color(7, 0);

    if (argc == 1) {
        print("uefc: ");
        set_console_color(4, 0);
        println("no arguments");
        set_console_color(7, 0);
        println("tip: you can use `uefc --version` to get compiler version");
        return 0;
    }

    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "--version") == 0) {
            print("UEFC (UniversalExecutableFormat compiler) ");
            println(COMPILER_VERSION);
            println("Licensed under GNU General Public License version 3.");
        }
        if (strcmp(argv[i], "--authors") == 0) {
            println("Created by UniversalExecutableFormat team (under the leadership of Gorciu).");
        }
    }

    set_console_color(7, 0);
    return 0;
}