#include <iostream>
using namespace std;

int main()
{
	int a[4][3];
	int i = 0;
	while (i < 4)
	{
		int j = 0;
		while (j < 3)
		{
			cout << "a[" << i << "][" << j << "]: = ";
			cin >> a[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		int j = 0;
		while (j < 3)
		{
			cout << a[i][j] << '\t';
			j++;
		}
		cout << endl;
		i++;
	}
}