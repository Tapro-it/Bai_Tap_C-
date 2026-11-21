#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	int max = 0;
	int dem = 0;
	int temp = n;
	while (temp > 0){
		int d = temp % 10;
		if (d > max){
			max = d;
			dem = 1;
		}else if (d == max){
			dem++;
		}
		temp /= 10;
	}
	cout << dem;
	return 0;
}
