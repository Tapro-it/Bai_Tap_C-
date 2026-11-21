#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	for (int i = 2; i <= n; i++){
		bool prime = true;
		for (int k = 2; k < i; k++){
			if (i % k == 0){
			prime = false;
			break;
			}
		}
		if (prime == true){
			cout << i << " ";
		}
	}
	return 0;
}
