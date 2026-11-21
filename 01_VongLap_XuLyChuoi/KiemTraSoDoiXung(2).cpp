#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int temp = n;
	int daonguoc = 0;
	while (temp > 0){
		int d = temp % 10;
		daonguoc = daonguoc * 10 + d;
		temp /= 10;
	}
	if (daonguoc == n){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
