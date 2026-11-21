#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int n;
	cout << "Enter n: ";
	cin >> n;
	int max = 0;
	while (n > 0){
		int d = n % 10;
		if (d > max){
			max = d;
		}
		n /= 10;
		cout << "Enter n: ";
		cin >> n;
	}
	cout << max;
	return 0;
}
