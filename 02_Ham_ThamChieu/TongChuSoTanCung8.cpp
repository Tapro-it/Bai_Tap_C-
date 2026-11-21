#include <iostream>
using namespace std;

bool check(long long n){
	long long sum = 0;
	while (n){
		int m = n % 10;
		sum += m;
		n /= 10;
	}
	if (sum % 10 == 8){
		return true;
	}else{
		return false;
	}
}

int main(){
	long long x;
	cin >> x;
	if (check(x) == true){
		cout << "28tech\n";
	}else{
		cout << "29tech\n";
	}
	return 0;
}
