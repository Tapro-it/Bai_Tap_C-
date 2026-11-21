#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int tich = 1;
	bool odd = false; 
	while (n > 0){
		int d = n % 10;
		if (d % 2 != 0){
			tich *= d;
			odd = true;
		}
		n /= 10;
	}
	if (!odd){
		cout << 0 << endl;
	}else{
		cout << tich;
	}
	return 0;
}
