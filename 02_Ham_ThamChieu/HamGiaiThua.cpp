#include <iostream>
using namespace std;

long long gt(int n){
	
	if (n >= 0 && n <= 15){
		long long d = 1;
		for (int i = 1; i <= n; i++){
			d *= i;
		}
		return d;
	}
	else{
		return -1;
	}
}

int main(){
	int x;
	cin >> x;
	cout << gt(x);
	return 0;
}
