#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	long long f0 = 0;
	long long f1 = 1;
	if (n >= 2){
		cout << f0 << " " << f1 << " ";
	}else if (n == 1){
		cout << f0;
	}
	for (int i = 3; i <= n; i++){
		long long fn = f0 + f1;
		cout << fn << " ";
		f0 = f1;
		f1 = fn;
	}
	return 0;
}
