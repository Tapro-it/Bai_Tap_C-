#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	bool chan = true;
	while (n > 0){
		int d = n % 10;
		if (d % 2 != 0){
			chan = false;
			break;
		}
		n /= 10;
	}
	if (chan == true){
		cout << "Y";
		
	}else{
		cout << "N";
	}
	return 0;
}
