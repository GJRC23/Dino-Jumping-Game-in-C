#include <conio.h>
#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void toUpperString(char *text[]){
    char *s = text;
    while (*s) {
        *s = toupper((unsigned char) *s);
        s++;
    }
}
