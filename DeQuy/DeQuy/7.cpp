#include<iostream>
using namespace std;
int tongChan(int n)
{
	if(n==0)
		return 0;
	else
		return n + tongChan(n-2);
}
int tongLe(int n)
{
	if(n==1)
		return 1;
	else
		return n + tongLe(n-2);
}
int main()
{
	int n;
	do
	{
		cout << "Nhap so chan khong am: ";
		cin >> n;
		if(n<0 || n%2 != 0)
			cout << "\nNhap sai, hay nhap lai!\n";
	}while(n<0 || n%2 != 0);
	cout << "Tong chan tu 0 den " << n << ": " <<tongChan(n);
	do
	{
		cout << "\n\nNhap so le khong am: ";
		cin >> n;
		if(n<0 || n%2 == 0)
			cout << "\nNhap sai, hay nhap lai!\n";
	}while(n<0 || n%2 == 0);
	cout << "Tong le tu 1 den " << n << ": " <<tongLe(n);
	cout << endl;
	system("pause");
	return 0;
}