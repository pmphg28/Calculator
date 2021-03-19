#include <iostream>
using namespace std;

int main()
{
	const long M = 3;
	const long N = 4;
	long a[M][N] = {{1,2,3,4},{5,6,7,8},{9,3,2,7}};
	for (int i = 0; i < M; i++)
	{
		if ( i % 2 == 0)
			for (int j = 0; j < N; j++)
				cout << a[i][j] << " ";
		else
			for (int j = N - 1; j >= 0; j--)
				cout << a[i][j] << " ";
	}
	cout << endl;
	return 0;
}