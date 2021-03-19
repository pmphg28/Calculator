//#include<iostream>
//using namespace std;
////a
//int S1(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return n + S1(n-1); 
//}
////b
//int S2(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return n*n + S2(n-1);
//}
////c
//double S3(int m)
//{
//	if(m==1)
//		return 1;
//	else
//		return 1.0/m + S3(m-2);
//}
////d
//int S4(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return n*S4(n-1);
//}
//int main()
//{
//	int n, m;
//	do
//	{
//		cout << "Nhap so nguyen duong: ";
//		cin >> n;
//		if(n<=0)
//			cout << "\nNhap sai dieu kien, hay nhap lai!";
//	}while(n<=0);
//	cout << "Tong tu 1 den " << n << ": ";
//	cout << S1(n) << endl;
//	cout << "Tong binh phuong tu 1 den " << n << ": ";
//	cout << S2(n) << endl;
//	do
//	{
//		cout << "Nhap so le: ";
//		cin >> m;
//		if(m%2==0)
//			cout << "\nHay nhap so le";
//	}while(m%2==0);
//	cout << "Tong phan so co mau le tu 1 den " << m << ": ";
//	cout << S3(m) << endl;
//	cout << "Tong giai thua tu 1 den " << n << ": ";
//	cout << S4(n) << endl;
//	cout << endl;
//	system("pause");
//	return 0;
//}