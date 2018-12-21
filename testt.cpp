#include <iostream>

using namespace std;
int main() {
	int n;
    do{
        cin >> n;
        
          
        
    }while(n <= 0);
    int sum = 0;
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            sum += i;
        }
    }
    cout << "\nSum = " << sum << '\n';
}
