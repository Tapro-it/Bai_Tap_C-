#include <iostream>
using namespace std;

void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
void xoaPhantu(int a[], int &n, int k);
void themPhantu(int a[], int &, int k, int x);

int main() {
    int n;
    int a[50];
    do {
        cin >> n;
        if (n < 1 || n > 50) {
            cout << "Khong hop le!\n";
        }
    } while (n < 1 || n > 50);

    nhapMang(a, n);
    xuatMang(a, n);

    int kXoa;
    cin >> kXoa;
    xoaPhanTu(a, n, kXoa);
    xuatMang(a, n);

    int kThem, x;
    cin >> kThem >> x;
    themPhanTu(a, n, kThem, x);
    xuatMang(a, n);

    return 0;
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << '\n';
}

void xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        cout << "Vi tri xoa ko hop le!\n";
        return;
    }
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

void themPhanTu(int a[], int &n, int k, int x) {
    if (n >= 50 || k < 0 || k > n) {
        cout << "Khong the them phan tu!\n";
        return;
    }
    for (int i = n; i >= k + 1; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    n++;
}
