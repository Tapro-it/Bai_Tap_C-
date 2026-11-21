#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n:";
	cin >> n;
	int sum = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			sum += i;
		}
	}
	if (sum == n){
		cout << "Y";
	}else{
		cout << "N";
	}
	return 0;
}
