#include <iostream>
using namespace std;

int main()
{
    int x, i, j, k;

    cout <<"Masukkan x: ";
    cin >> x;

    for(i = 1, k = 0; i <= x; i++, k = 0)
    {
        for(j = 1; j <= x-i; j++)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            k++;
        }
        cout <<"\n";
    }    
    return 0;
}
