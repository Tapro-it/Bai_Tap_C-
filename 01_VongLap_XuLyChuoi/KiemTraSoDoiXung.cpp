#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int temp = n;
	int so_dao_nguoc = 0;
	while (temp > 0){
		int d = temp % 10;
		so_dao_nguoc = so_dao_nguoc * 10 + d;
		temp /= 10; 
	}
	if (so_dao_nguoc == n){
		cout << "Y";
	}else{
		cout << "N";
	}
	return 0;
}
