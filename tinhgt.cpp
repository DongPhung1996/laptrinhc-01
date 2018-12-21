#include<stdio.h>
#include <iostream>
 
using namespace std; 
void Lap();
int Tong(int a, int b);
int Tich(int a, int b);
int Hieu(int a, int b);

main(){
	int soA, soB, kq, hieu, tich;
	cin >> soA >> soB;
	kq = Tong(soA, soB);
	hieu = Hieu(soA, soB);
	tich =  Tich(soA, soB);
	cout << kq << endl;	
	cout << hieu << endl;
	cout << tich << endl;
	Lap();
}
int Tong(int a, int b)
{
   return a + b;
}

int Hieu(int a, int b)
{
   return a - b;
}

int Tich(int a, int b)
{
   return a * b;
}

void Lap(){
	while(true)
	{
		int a, b, kq;
		cin >> a >> b;
		kq = Tong(a, b);
		cout << kq;
		if(kq > 100)
			break;		
	}
}
