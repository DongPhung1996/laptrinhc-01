#include <iostream>

using namespace std;

int main(){
	int a[5];
	cout << "Nhap vao cac phan tu cua mang: " << endl;
	for(int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << "Xuat ra cac phan tu cua mang: " << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << a[i] << "\t";
	}
	int n;
	cout << endl;
	cout << "Nhap vao vi tri can xoa: " << endl;
	cin >> n;
	for (int i = n; i < 4 ; i++)
	{
		a[i] = a[i+1];
	}
	cout << "Mang sau khi xoa la: " << endl;
	for(int i = 0; i < 4; i++)
	{
		cout << a[i] << endl;
	}
	int x;
	cout << "Nhap vao phan tu can them: " << endl;
	cin >> x;
	cout << "Nhap vao vi tri can them: " << endl;
	cin >> n; 
	for (int i = 4; i > n  ; i--)
	{	
		a[i] = a[i-1];		
	}
	a[n] = x;
	cout << "Mang sau khi them la: " << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
	cout << "Nhap vao vi tri can sua: " << endl;
	cin >> n;
	for(int i = 0; i < 5; i++)
	{
		if(i == n)
		{
			int x; 
			cin >> x;
			a[i] = x;
		}
	}
	cout << "Mang sau khi duoc sua la: " << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
}
