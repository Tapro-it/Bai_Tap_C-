#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int min = 9;
	bool odd = false;
	while (n > 0){
		int d = n % 10;
		if (d % 2 != 0){
			odd = true;
			if (d < min){
				min = d;
			}
		}
		n /= 10;
	}
	if (!odd){
		cout << -1 << endl;
	}else{
		cout << min;
	}
	return 0;
}
