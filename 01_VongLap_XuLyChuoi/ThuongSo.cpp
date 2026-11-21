#include <iostream>
using namespace std;
int main(){
	int n;
	cout << " Enter n: ";
	cin >> n;
	double sum = 0;
	int mau_so = 0;
	for (int i=1;i<=n;i++){
		mau_so += i;
		sum += (double)1 / mau_so;
	}
	cout << "Sum: " << sum;
	return 0;
}
