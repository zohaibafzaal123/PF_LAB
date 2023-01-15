#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void printPacman(int x, int y);
void clear(int x, int y, char previous);
void showGhost(int x, int y);
void showGhostup(int x, int y);
char getCharAtxy(short int x, short int y);

main()
{
    int gx = 1;
    int gy = 1;
    string direction = "right";
    char previousChar = ' ';
    string direction1 = "down";
    char previousChar1 = ' ';
    system("cls");
    printMaze();
    showGhostup(gx, gy);
    showGhost(gx, gy);
    while (true)
    {
        Sleep(100);
        if (direction == "right")
        {
            char nextLocation = getCharAtxy(gx + 1, gy);
            if (nextLocation == '%')
            {
                direction = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx, gy, previousChar);
                gx = gx + 1;
                previousChar = nextLocation;
                showGhost(gx, gy);
            }
        }
        if (direction == "left")
        {
            char nextLocation = getCharAtxy(gx - 1, gy);
            if (nextLocation == '%')
            {
                direction = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx, gy, previousChar);
                gx = gx - 1;
                previousChar = nextLocation;
                showGhost(gx, gy);
            }
        }
        if (direction1 == "down")
        {
            char nextLocation = getCharAtxy(gx, gy + 1);
            if (nextLocation == '%')
            {
                direction1 = "up";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx, gy, previousChar1);
                gy = gy + 1;
                previousChar1 = nextLocation;
                showGhostup(gx, gy);
            }
        }
        if (direction1 == "up")
        {
            char nextLocation = getCharAtxy(gx, gy - 1);
            if (nextLocation == '%')
            {
                direction1 = "down";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx, gy, previousChar1);
                gy = gy - 1;
                previousChar1 = nextLocation;
                showGhostup(gx, gy);
            }
        }
    }
}
void printMaze()
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "%                          %" << endl;
    cout << "%                          %" << endl;
    cout << "%                          %" << endl;
    cout << "%                          %" << endl;
    cout << "%                          %" << endl;
    cout << "%                          %" << endl;
    cout << "%                          %" << endl;
    cout << "%                          %" << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void clear (int x, int y, char previous)
{
    gotoxy(x,y);
    cout << previous;
}
void showGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void showGhostup(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}