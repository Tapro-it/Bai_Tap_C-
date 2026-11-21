#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int temp = n;
	int sum = 0;
	while(temp > 0) {
		int d = temp % 10;
		int t = 1;
		for (int i = 1; i <= d; i++){
			t *= i;
		}
		sum += t;
		temp /= 10;
	}
	if (sum == n){
		cout << "Y";
	}else {
		cout << "N";
	}
	return 0;
}
