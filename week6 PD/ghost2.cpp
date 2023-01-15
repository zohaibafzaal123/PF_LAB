#include <iostream>
#include <windows.h>
using namespace std;

void erase(int x, int y);
void printPacman(int x, int y);

void printMaze();
void gotoxy(int x, int y);
void clear(int x, int y, char previous);
void showGhost(int x, int y);
void showGhostup(int x, int y);
char getCharAtxy(short int x, short int y);

main()
{
    int pacmanX = 4;
    int pacmanY = 4;
    bool gameRunning = true;
    int score = 0;
    int life = 1;
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
    printPacman(pacmanX, pacmanY);
    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ' || nextLocation == '.' || nextLocation == 'L' )
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
            }
            if (nextLocation == '.')
            {
                score = score + 1;
                gotoxy(4, 12);
                cout << "Score is: " << score;
            }
            if (nextLocation == 'L')
            {
                life = life + 1;
                gotoxy(4, 13);
                cout << "Life remaining: " << life;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ' || nextLocation == '.'|| nextLocation == 'L' )
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
            }
            if (nextLocation == '.')
            {
                score = score + 1;
                gotoxy(4, 12);
                cout << "Score is: " << score;
            }
            if (nextLocation == 'L')
            {
                life = life + 1;
                gotoxy(4, 13);
                cout << "Life remaining: " << life;
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == ' ' || nextLocation == '.'|| nextLocation == 'L' )
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
            }
            if (nextLocation == '.')
            {
                score = score + 1;
                gotoxy(4, 12);
                cout << "Score is: " << score;
            }
            if (nextLocation == 'L')
            {
                life = life + 1;
                gotoxy(4, 13);
                cout << "Life remaining: " << life;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ' || nextLocation == '.'|| nextLocation == 'L' )
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
            }
            if (nextLocation == '.')
            {
                score = score + 1;
                gotoxy(4, 12);
                cout << "Score is: " << score;
            }
            if (nextLocation == 'L')
            {
                life = life + 1;
                gotoxy(4, 13);
                cout << "Life remaining: " << life;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(100);

        Sleep(100);
        if (direction == "right")
        {
            char nextLocation = getCharAtxy(gx + 1, gy);
            if (nextLocation == '%')
            {
                direction = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.' || nextLocation == 'L')
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
            else if (nextLocation == ' ' || nextLocation == '.' || nextLocation == 'L')
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
            else if (nextLocation == ' ' || nextLocation == '.' || nextLocation == 'L')
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
            else if (nextLocation == ' ' || nextLocation == '.' || nextLocation == 'L')
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
    cout << "%                ......    %" << endl;
    cout << "% L         .....          %" << endl;
    cout << "%      .....               %" << endl;
    cout << "%               ...        %" << endl;
    cout << "%     ..     ...           %" << endl;
    cout << "%            ....          %" << endl;
    cout << "%             ...          %" << endl;
    cout << "%                   .... L %" << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void clear(int x, int y, char previous)
{
    gotoxy(x, y);
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
void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
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