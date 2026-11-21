#include <iostream>
using namespace std;

int tinhTongChuSo(int);
int daonguocso(int);
bool lasodaonguoc(int);
bool lasoprime(int);
void insoprime(int, int);

int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    int a = tinhTongChuSo(n);
    cout << a << endl;
    int b = daonguocso(n);
    cout << b << endl;
    if (lasodaonguoc(n)){
        cout << "Day la so dao nguoc!" << endl;
    }else{
        cout << "Day ko phai la so dao nguoc!" << endl;
    }
    if (lasoprime(n)) cout << "Day la so nguyen to!" << endl;
    else cout << "Day ko phai la so nguyen to!" << endl;
    int x, y;
    cin >> x >> y;
    insoprime(x, y);
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

bool lasodaonguoc(int n){
    int temp = n;
    if (daonguocso(n) == temp){
        return true;
    }else{
        return false;
    }
}

bool lasoprime(int n){
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return n > 1;
}

void insoprime(int a, int b){
    for (int i = a; i <= b; i++){
        if (lasoprime(i)){
            cout << i << " ";
        }
    }
}