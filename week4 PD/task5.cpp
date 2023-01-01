#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int x, int y);
void printName();

main()
{

system("cls");
printName();
}

void printName()
{
gotoxy (38,21);
cout << "zzzzzzzzzzzzzzzzzzzzzzz       ooooooooooo         h          h         aaaaaaaaaaa       iiiiiiiiiii      bbbbbbbbbb          " << endl;
gotoxy (38,22);
cout << "                  zzzz        o         o         h          h         a         a           ii           b         b          " << endl;
gotoxy (38,23);
cout << "              zzzz            o         o         h          h         a         a           ii           b         b          " << endl;
gotoxy (38,24);
cout << "          zzzz                o         o         hhhhhhhhhhhh         aaaaaaaaaaa           ii           bbbbbbbbbb          " << endl;
gotoxy (38,25);
cout << "      zzzz                    o         o         h          h         a         a           ii           b         b          " << endl;
gotoxy (38,26);
cout << "  zzzz                        o         o         h          h         a         a           ii           b         b          " << endl;
gotoxy (38,27);
cout << "zzzzzzzzzzzzzzzzzzzzzz        ooooooooooo         h          h         a         a       iiiiiiiiiii      bbbbbbbbbb          " << endl;

}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

