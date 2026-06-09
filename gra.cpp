#include <iostream>
using namespace std;
int main()
{
    cout << "=================================\n";
cout << "      ZBIERANIE MONET\n";
cout << "      Autor: Laura Terlecka\n";
cout << "=================================\n";
const int ROZMIAR = 5;
char plansza[ROZMIAR][ROZMIAR]=
{   {'G', '.', '.', '.', '.'},
    {'.', 'M', '.', '.', '.'},
    {'.', '.', 'M', '.', '.'},
    {'.', '.', '.', 'M', '.'},
    {'.', '.', '.', '.', 'M'}};
    int x = 0, y = 0;
    int punkty = 0;
    while (punkty<4)
    {
        cout<<"Punkty: "<<punkty<<endl;
        cout<<"Pozycja gracza: ("<<x<<","<<y<<")"<<endl;
        for (int i = 0; i < ROZMIAR; i++)
        {
            for (int j = 0; j < ROZMIAR; j++)
            {
                cout << plansza[i][j] << " ";
            }
            cout << endl;
        }
        char ruch;
        cout<<"Ruch(W/A/S/D): ";
        cin >>ruch;
        int nowyX=x;
        int nowyY=y;
        switch (toupper(ruch))
        {
            case 'W':
                nowyY--;
                break;
            case 'S':
                nowyY++;
                break;
            case 'A':
                nowyX--;
                break;
            case 'D':
                nowyX++;
                break;
                 default:
                cout << "Bledny ruch!";
                continue;
        }
        if (nowyX<0 || nowyX>=ROZMIAR || nowyY<0 || nowyY>=ROZMIAR )
        {
            cout <<"Nie mozna wyjsc poza plansze!"<<endl;
            continue;
        }
        if (plansza[nowyY][nowyX]=='M')
        {
            punkty++;
            cout<<"Zebrano monete!"<<endl;
        }
        plansza[y][x]='.';
        x=nowyX;
        y=nowyY;
        plansza[y][x]='G';
    }
    cout<<"Gratulacje, zebrales/as wszystkie monety!"<<endl;
    cout <<"Liczba punktow: "<<punkty<<endl;
    return 0;
}