#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    CONSOLE_SCREEN_BUFFER_INFO hely;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &hely);
    const int szelesseg = hely.srWindow.Right - hely.srWindow.Left;
    const int magassag = hely.srWindow.Bottom - hely.srWindow.Top;

    int x = 5, y = 5;
    int dx = 1, dy = 1;
    COORD koordinata;

    CONSOLE_CURSOR_INFO kurzor;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &kurzor);
    kurzor.bVisible = false;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &kurzor);

    while (true) {
        system("cls");

        x += dx;
        y += dy;

        if (x <= 0 || x >= szelesseg) {
            dx *= -1;
        }
        if (y <= 0 || y >= magassag) {
            dy *= -1;
        }

        koordinata.X = x;
        koordinata.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), koordinata);
        cout << "O";

        Sleep(50);
    }
}