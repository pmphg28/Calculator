

#include <iostream>
using namespace std;

int main()
{
	int a[3][4] = {{8,4,-1,5},{2,2,6,9},{11,2,5,4}};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}