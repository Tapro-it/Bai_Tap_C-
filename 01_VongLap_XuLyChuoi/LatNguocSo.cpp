#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int temp = n;          
    int lat_nguoc = 0;     
    while (temp > 0) {
        int d = temp % 10;
        lat_nguoc = lat_nguoc * 10 + d;
        temp /= 10;
    }
    if (lat_nguoc == n){
    	cout << "Y" << endl;
	}else{
		cout << "N" << endl;
	}
	return 0;
}
