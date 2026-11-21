#include <iostream> 
using namespace std;

void giaiMaSo(int);

int main(){
	int n;
	do{
		cin >> n;
		if (n <= 0){
			cout << "Nhap lai!" << endl;
		}
	}while(n <= 0);
	giaiMaSo(n);
	return 0;
}

void giaiMaSo(int n){
	int dem = 0;
	int sum = 0;
	int doixung = 0;
	int temp = n;
	while(temp){
		int d = temp % 10;
		
		dem++;
		
		if (d % 2 == 0){
			sum += d;
		}
		
		doixung = doixung * 10 + d;
		
		temp /= 10;
	}
	cout << dem << endl;
	cout << sum << endl;
	if (doixung == n){
		cout << "DOI XUNG";
	}else{
		cout << "KHONG DOI XUNG";
	}
}
