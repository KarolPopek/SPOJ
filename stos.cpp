#include <iostream>
using namespace std;

int main()
{
    int tab[10], i=0;
    char znak;

    while (cin >> znak)
    {
        switch(znak)
        {
        case '+':
        {
            if(i<10)
            {
                cin >> tab[i];
                i++;
                cout << ":)" << endl;
            }
            else
                cout << ":(" << endl;
            break;
        }
        case '-':
        {
            if(i>0)
            {
                --i;
                cout << tab[i] << endl;
                tab[i] = 0;
            }
            else
                cout << ":(" << endl;
        }
        break;
        }
    }
    return 0;
}
