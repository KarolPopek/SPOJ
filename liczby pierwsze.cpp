#include <iostream>
using namespace std;

bool czy_pierwsza ( int a)
{
    if(a<2)
        return false;                           // liczby mniejsze od 2 nie s¹ liczbami pierwszymi

    for(int i = 2; i*i <= a; i++ )
        if(a%i == 0)
            return false;                       // znalezienie dzielnika oznacza, ¿e to nie jest liczba pierwsza

    return true;
}

int main()
{
    int a, n;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(czy_pierwsza(a))
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;

    }
    return 0;
}
