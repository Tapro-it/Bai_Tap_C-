#include <iostream>
using namespace std;

const double THUE_VAT = 0.1; 

void xuatHoaDon(double giaMon, int soLuong = 1, double giamGia = 0.0);

int main() {
    int b;
    double a, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    xuatHoaDon(a);             
    xuatHoaDon(a, b);          
    xuatHoaDon(a, b, c);    
    return 0;
}

void xuatHoaDon(double giaMon, int soLuong, double giamGia) {
    
    static int soThuTuHoaDon = 0; 
    
    double tongTien = (giaMon * soLuong - giamGia) * (1 + THUE_VAT); 

    soThuTuHoaDon++;
    cout << "Hoa don #" << soThuTuHoaDon << " | Tong thanh toan: " << tongTien << endl;
}