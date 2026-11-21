#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int tich = 1;
	bool le = false;
	while (n > 0){
		int d = n % 10;
		if (d % 2 != 0){
			tich *= d;
			le = true;
		}
		n /= 10;
	}
	if (le == true){
		cout << tich;
	}else{
		cout << 0;
	}
	return 0;
}
