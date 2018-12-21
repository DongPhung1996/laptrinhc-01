#include <iostream>
#define MAX 5

using namespace std;

int max(int ia[], int in)
{
	int i, imax;
	imax = ia[0]; //cho phan tu dau tien la max
	for (i = 1; i < in; i++)
	if (imax < ia[i]) //neu so dang xet > max
		imax = ia[i]; //gan so nay cho max
	return imax; //tra ve ket qua so lon nhat
}
main()
{
	int ia[MAX];
	int i = 0, inum;
	do
	{
		cout << "Nhap vao mot so: ";
		cin >> ia[i];
	} while (ia[i++] != 0);
	i--;
	inum = max(ia, i);
	cout << "So lon nhat la: " << inum;
}
