#include <iostream>
using namespace std;

int tinhTongChuSo(int);
int daonguocso(int);

int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    int a = tinhTongChuSo(n);
    cout << a << endl;
    int b = daonguocso(n);
    cout << b;
    return 0; 
}

int tinhTongChuSo(int n){
    int sum = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int daonguocso(int n){
    int daonguoc = 0;
    while (n){
        daonguoc = daonguoc * 10 + n % 10;
        n /= 10;
    }
    return daonguoc;
}
