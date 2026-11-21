#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int sum = 0;
	while (n > 0){
		int d = n % 10;
		if (d % 3 == 0){
			sum += d;
		}
		n /= 10;
	}
	cout << "Sum is: " << sum;
	return 0;
}
