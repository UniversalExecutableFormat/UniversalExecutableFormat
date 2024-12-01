#include <version.hpp>
#include <multiplatform.hpp>

int main(int argc, char* argv[]) {
    set_console_color(7, 0);

    if (argc == 0) {
        print("uefc: ");
        set_console_color(4, 0);
        print_line("no arguments");
        set_console_color(7, 0);
        print_line("tip: you can use `uefc --version` to get compiler version");
        return 0;
    }

    for (int i = 1; i < argc; ++i) {
        if (argv[i] == "--version") {
            print("UEFC (UniversalExecutableFormat compiler) ");
            println(COMPILER_VERSION);
            println("Licensed under GPL in version 3.");
        }
        if (argv[i] == "--authors") {
            print("Created by UniversalExecutableFormat team (under the leadership of Gorciu).");
        }
    }

    set_console_color(7, 0);
    return 0;
}
