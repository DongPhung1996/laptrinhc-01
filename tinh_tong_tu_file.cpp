#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream file;
	file.open("file2.txt", ios::out);
	file << "Hello world!";
	cout << "Hello world!";
	file.close();
	return 0;
}
