#include <iostream>

#include <conio.h>   
#include <windows.h>

using namespace std;
bool gameOver;
const int width = 30;
const int height = 20;
int x, y, malpaX, malpaY, wynik;
int tailX[100], tailY[100];
int nTail;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirecton dir;
void baner()


{
HANDLE hOut;
hOut = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY );	
cout<<"|======================================================|\n"
    <<"|SSSSSSSSSS  NN      N       A       K    K EEEEEEEEEE |\n"
    <<"|S           N N     N      A A      K   K  E          |\n"
	<<"|S           N  N    N     A   A     K  K   E          |\n"
    <<"|SSSSSSSSSS  N   N   N    A     A    KK     EEEEEEE    |\n"
    <<"|         S  N    N  N   AAAAAAAAA   K  K   E          |\n"
	<<"|         S  N     N N  A         A  K   K  E          |\n"
    <<"|SSSSSSSSSS  N      NN A           A K    K EEEEEEEEEE |\n"
    <<"|======================================================|\n\n";               
SetConsoleTextAttribute( hOut, 0 );
SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );

cout<<endl;
}



void Setup() 
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    malpaX = rand() % width;
    malpaY = rand() % height;
    wynik = 0;
}
void clearscreen() // czyszczenie ekranu
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}
void plansza_waz() //plansza waz i malpa
{
HANDLE hOut;
hOut=GetStdHandle(STD_OUTPUT_HANDLE);


SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
    for (int i = 0; i < width+2; i++)
        cout << (char)219;
    cout << endl;
 
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
			if (j == 0)
                cout << (char)219;
            SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
			if (i == y && j == x)
                cout << "O";
			else if
			(i == malpaY && j == malpaX)
                cout << "@";
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
					if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
                 
 			SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
            if (j == width - 1)
                cout << (char)219;
        }
        cout << endl;
    }
 	SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
    for (int i = 0; i < width+2; i++)
        cout << (char)219;
    cout << endl;
    SetConsoleTextAttribute( hOut, 0 );
	SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
	cout << "Wynik:" << wynik << endl;
}
void wejscie() // sterowanie
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
        	case 'A':
            dir = LEFT;
            break;
        case 'd':
        	case 'D':
            dir = RIGHT;
            break;
        case 'w':
            case 'W':
			dir = UP;
            break;
        case 's':
        	case 'S':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}
void Logika()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
    
    
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;
 
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
 
    if (x == malpaX && y == malpaY)
    {
        wynik += 10;
        malpaX = rand() % width;
        malpaY = rand() % height;
        nTail++;
    }
}
int main()
{
HANDLE hOut;
hOut=GetStdHandle(STD_OUTPUT_HANDLE);


baner();

int wybor;
cout <<"[1] Nowa gra "<<endl;
cout <<"[2] Wyjscie "<<endl;
cout<<"Wybrales: ";
cin >>wybor; 
system("cls");
switch(wybor)
{
   
  case 1:
   	cout <<"[1] Nowa gra";
    	Setup();
    while (!gameOver)
    {
 		//system("cls");
        clearscreen();
		plansza_waz();
        wejscie();
        Logika();
        Sleep(10); 
    }
		break;
  default:
    cout <<"[2] Wyjscie "<<endl<<endl;
		break;
}
   SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
    cout << "****************************"<<endl;
	cout << "You Are Loser !!!!!!!!!!!!!!"<<endl;
	cout << "****************************"<<endl;
	SetConsoleTextAttribute( hOut, 0 );
	SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );

	return 0;
}
