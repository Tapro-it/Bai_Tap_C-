#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int dem_le = 0;
	int dem_chan = 0;
	while (n > 0){
		int d = n % 10;
		if (d % 2 != 0){
			dem_le++;
		}
		dem_chan++;
		n /= 10;
	}
	if (dem_le > dem_chan){
		cout << "Y";
	}
	cout << "N";
	return 0;
}
