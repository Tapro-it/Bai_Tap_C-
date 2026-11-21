#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int sum = 0;
	int temp = n;
	for (int i = 1; i <= temp; i++){
		if (temp % i == 0){
			sum += i;
		}
	}
	if (sum == 2*n){
		cout << "Y";
	}else {
		cout << "N";
	}
	return 0;
}
