#include <iostream>
using namespace std;

int timUCLN(int a, int b);
void rutGonPhanSo(int &tu, int &mau);

int main(){
    int tu, mau;
    cin >> tu >> mau;
    rutGonPhanSo(tu, mau);
    if (mau != 0){
        cout << tu << " / " << mau;
    }
    return 0;
}

int timUCLN(int a, int b){
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b){
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}

void rutGonPhanSo(int &tu, int &mau){
    if (mau == 0){
        cout << "Mau so khong hop le!\n";
        return;
    }
    if (mau < 0){
        tu = -tu;
        mau = -mau;
    }
    int ucln = timUCLN(tu, mau);
    tu /= ucln;
    mau /= ucln;
}
