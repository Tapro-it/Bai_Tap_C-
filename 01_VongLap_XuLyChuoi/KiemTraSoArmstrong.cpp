#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int temp = n;
	int sum = 0;
	while (temp > 0){
		int d = temp % 10;
		sum += pow(d, 3);
		temp /= 10;
	}
	if (sum == n){
		cout << "Y";
	}else{
		cout << "N";
	}
	return 0;
} 
