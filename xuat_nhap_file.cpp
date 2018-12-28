#include <iostream>
#include <fstream>      // std::fstream

using namespace std;

int main () {
	  string a;
	  char b;
	  fstream file;
	  file.open ("test.txt", ios::out | ios::in | ios::app);  
	  file << endl;
	  file << "Ten sinh vien" << endl;	  
	  while(true) {
	  	cin >> a;
	  	cout << "Ban co muon tiep tuc: " << endl;
	  	cin >> b;
	  	file << a << endl;
	  	if(a == ' ') 
	  		break;
	  }
	  file.close();
	  return 0;
}
