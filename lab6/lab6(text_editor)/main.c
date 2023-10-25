#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int z = 20;
    char t[100];
    int c = 0;


    t[z] = '\0';

    while (1) {
        system("cls");

        printf("%s", t);

        gotoxy(c, 1);


        int input = getch();
        if (input == 13) {
            printf("%s", t);
            break;
        }
        else if (input == 8) {
            if (c > 0) {
                for (int i = c - 1; i < z; i++) {
                    t[i] = t[i + 1];
                }
                c--;
            }
        }
        else if (input == 77) {
            if (c < z && t[c] != '\0') {
                c++;
            }
        }
        else if (input == 75) {
            if (c > 0) {
                c--;
            }
        }
        else if (input >= 32 && input <= 126 && c < z) {
            for (int i = z; i > c; i--) {
                t[i] = t[i - 1];
            }
            t[c] = (char)input;
            c++;
        }
    }

    return 0;
}
