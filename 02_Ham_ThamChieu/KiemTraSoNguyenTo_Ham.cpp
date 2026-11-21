#include <iostream>
using namespace std;

bool kiemtraPrime(int n){
	if (n < 2){
		return false;
	}
	for (int i = 2; i*i <= n; i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	if (kiemtraPrime(n)){
		cout << n << " LA so nguyen to!" << endl;
    } else {
        cout << n << " KHONG PHAI so nguyen to!" << endl;
    }
    return 0;
}
