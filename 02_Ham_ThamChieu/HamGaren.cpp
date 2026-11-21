#include <iostream>
using namespace std;

void hoiNoiTai(int &hp, int hpMax){
	hp += hpMax*0.1;
	if (hp > hpMax){
		hp = hpMax;
	}
} 

int Q(int &tocchay, int DamageCoBan){
	tocchay += tocchay*0.35;
	return DamageCoBan * 1.5;
}

void W(int &giap, int &khangphep, int capdo = 1){
	if (capdo == 1){
		giap += 20;
		khangphep += 10;
	}
	else if (capdo == 2){
		giap += 40;
		khangphep += 20;
	}
	else if (capdo == 3){
		giap += 60;
		khangphep += 30;
	}
}

double E(int damageCoBan, int soVongXoay ){
	return damageCoBan * soVongXoay;
}

double E(int damageCoBan, int soVongXoay, double tyleChiMang){
	return damageCoBan * soVongXoay * tyleChiMang;
}

bool R(int hpDoiThu, int hpMaxDoiThu){
	int damageKetLieu = 200 + 0.3 * (hpMaxDoiThu - hpDoiThu);
	if (damageKetLieu >= hpDoiThu){
		return true;
	}else{
		return false;
	}	
}

void combo(){
	cout << "Q W E + thieu dot, sat thuong la qua nhieu, R may di!" << '\n';
}

int main(){
	int hp = 400, hpMax = 1000;
    int tocChay = 340;
    int giap = 50, khangphep = 30;
    int dameCoBan = 800;

    int hpDoiThu = 200, hpMaxDoiThu = 500;
	
	int capdo;
	cout << "Nhap cap do(1-3): ";
	cin >> capdo;
	
	hoiNoiTai(hp, hpMax);
	
	int damageQ = Q(tocChay, dameCoBan);
	
	W(giap, khangphep, capdo);
	
	double damageE = E(dameCoBan, 3, 1.5);
	
	bool teemoGucDo = R(hpDoiThu, hpMaxDoiThu);
	
	cout << "\n=== THONG SO GAREN SAU COMBO ===" << endl;
    cout << "HP: " << hp << "/" << hpMax << endl;
    cout << "Toc chay: " << tocChay << endl;
    cout << "Giap: " << giap << " | Khang phep: " << khangphep << endl;
    
    cout << "\n=== COMBO GAREN ===" << endl;
    combo();
    
    cout << "\n=== TONG SAT THUONG DONG KHI ===" << endl;
    cout << "Tong dame Q + E: " << damageQ + damageE << endl;
    
    cout << "\n=== KET QUA R ===" << endl;
    if (teemoGucDo) {
        cout << "DEMACIA! Teemo da bi ket lieu!" << endl;
        cout << "DU MA M LA 1 BEST GAREN, M DA DANH BAI CON CHON LUI!";
    } else {
        cout << "Teemo con song voi " << hpDoiThu << " HP!" << endl;
        cout << "VL! THE MA M VAN DE NO THOAT. QUA NON!";
    }
	return 0;
}



