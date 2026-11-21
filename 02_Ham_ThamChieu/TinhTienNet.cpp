#include <iostream> 
using namespace std;

double tinhHoaDon(char loaiphong, double sogio);

int main(){
	char loaiphong;
	double sogio;
	cout << tinhHoaDon(loaiphong, sogio);
	return 0;
}

double tinhHoaDon(char loaiphong, double sogio){
	cin >> loaiphong;
	cin >> sogio;
	double tien;
	bool ok = true;
	switch(loaiphong){
		case 'T': case 't':
			tien = sogio * 10000;
			break;
		case 'V': case 'v':
			tien = sogio * 15000;
			break;
		case 'S': case 's':
			tien = sogio * 25000;
			break;
		default:
			cout << "Loai phong khong hop le!";
			ok = false;
			break;
	}
	if (ok){
		if (sogio <= 0){
		cout << "So gio ko hop le!";
		}
		else{
			if (sogio >= 5 && sogio < 10){
				tien = tien - tien*0.1;
			}
			else if(sogio >= 10){
				tien = tien - tien*0.2;
			}
			else{
				cout << "ko dc giam!";
			}
		} 
		return tien;
	}
}
