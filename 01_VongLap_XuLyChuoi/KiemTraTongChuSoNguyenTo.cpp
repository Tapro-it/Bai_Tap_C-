#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int sum = 0;
	while (n > 0){
		int d = n % 10;
		sum += d;
		n /= 10;
	}
	bool prime = true;
	if (sum < 2){
		prime = false;
	}else{
		for (int i = 2; i < sum; i++){
			if (sum % i == 0){
				prime = false;
				break;
			}		
		}
	}
	if (prime == true){
		cout << "Y";
	}else{
		cout << "N";
	}
	return 0;
}
