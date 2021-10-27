#include <iostream>
using namespace std;

int main()
{
    int x, i, j, k;

    cout << "Masukkan x: ";
    cin >> x;

    for(i = x; i >= 1; i--)
    {
        for(k = 0; k < x-i; k++)
            cout << "  ";

        for(j = i; j <= 2*i-1; j++)
            cout << "* ";

        for(int j = 0; j < i-1; j++)
            cout << "* ";

        cout << "\n";
    }

    return 0;
}
