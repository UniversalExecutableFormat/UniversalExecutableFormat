#ifdef _WIN32

#include <windows.h>

void set_console_color(int foreground, int background) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((background << 4) | foreground));
}

#else

#include <unistd.h>
#include <stdio.h>

void set_console_color(int foreground, int background) {
    printf("\033[%d;%dm", background + 40, foreground);
}

#endif

void print(const char* text) {
    printf("%s", text);
}

void println(const char* text) {
    printf("%s%s", text, "\n");
}
