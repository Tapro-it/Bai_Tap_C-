#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int boc = 10;
	bool tach = true;
	while (n > 0){
		int d = n % 10;
		if (d >= boc){
			tach = false;
			break;
		}else {
			boc = d;
		}
		n /= 10;
	}
	if (tach == true){
		cout << "Y";
	}else {
		cout << "N";
	}
	return 0;	
}
