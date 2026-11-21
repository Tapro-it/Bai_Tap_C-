#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Entre n: ";
	cin >> n;
	int tong_le =0;
	int tong_chan = 0;
	int pos = 1;
	while (n > 0){
		int d = n % 10;
		if (pos % 2 != 0){
			tong_le += d;
		}else{
			tong_chan += d;
		}
		n /= 10;
		pos++;
	}
	cout << "Tong le: " << tong_le << endl;
	cout << "Tonh chan: " << tong_chan << endl;
	return 0;
}
