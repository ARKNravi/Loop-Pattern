#include <iostream>
using namespace std;
int main()
{
	int  i, j, x;
	cout << "Masukkan x:  ";
	cin >> x;
	for(i = x; i >= 1; i--)
{
	for(j = 1; j <= i; j++)
{
	cout << "* ";
}
	cout << "\n";
}
return 0;
}
