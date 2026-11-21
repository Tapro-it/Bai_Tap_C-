#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int sum = 0;
	int socuoi = n % 10;
	int sodau = 0;
	int temp = n;
	while (temp >= 10){
		temp /= 10;
		sodau = temp;
	}
	cout << "Sum: " << sodau + socuoi;
	return 0;
}
