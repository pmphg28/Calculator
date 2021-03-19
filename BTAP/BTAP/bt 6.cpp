#include <iostream>
using namespace std;
const int maxr= 10 , maxc = 10;

int main()
{
	int a[maxr][maxc], b[maxr][maxc];
	int tong[maxr][maxc] , tich[maxr][maxc];

	int ra, ca,rb,cb;
	do
	{
		cout<<"Nhap so hang ma tran 1: ";
		cin>>ra;
		if (ra < 0 || ra> maxr)
		{
			cout<<"Nhap sai! Nhap lai: ";

		}
	}while (ra <0 || ra > maxr);
	do
	{
		cout<<"Nhap so cot ma tran 1: ";
		cin>>ca;
		if (ca < 0 || ca> maxc)
		{
			cout<<"Nhap sai! Nhap lai: ";

		}
	}while (ca <0 || ca > maxc);
	do
	{
		cout<<"Nhap so hang ma tran 2: ";
		cin>>rb;
		if (rb < 0 || rb> maxr)
		{
			cout<<"Nhap sai! Nhap lai: ";

		}
	}while (rb <0 || rb > maxr);
	do
	{
		cout<<"Nhap so cot ma tran 2: ";
		cin>>cb;
		if (cb < 0 || cb> maxc)
		{
			cout<<"Nhap sai! Nhap lai: ";

		}
	}while (cb <0 || cb > maxc);

	for (int  i = 0 ; i <= ra ; i ++)
	{
		for (int j = 0 ; j <= ca ; j++)
		{
			cout<< a[i][j]; 
			cout<<endl;
		}
	}
}