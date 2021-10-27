#include <iostream>
using namespace std;
int main()
{
	int  x, j, i;
	cout << "Masukkan x:  ";
	cin >> x;
	for(i = 1; i <= x; i++)
{
	for(j = 1; j <= i; j++)
{
	cout << "* ";
}
	cout << "\n";
}
return 0;
}
