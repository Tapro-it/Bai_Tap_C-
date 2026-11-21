#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	bool prime = true;
	for (int i = 2; i < n; i++){
		if (n % i == 0){
			prime = false;
			break;
		}
	}
	if (prime == true){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
