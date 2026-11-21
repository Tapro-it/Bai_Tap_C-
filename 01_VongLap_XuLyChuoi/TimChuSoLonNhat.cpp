#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n:";
	cin >> n;
	int max = 0;
	while (n > 0){
		int d = n % 10;
		if (d > max){
			max = d;
		}
		n /= 10;
	}
	cout << "Max is: " << max;
	return 0;
}
