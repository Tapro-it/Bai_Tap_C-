#include <iostream>
using namespace std;

void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
double tinhTrungBinh(int a[], int n);
int demTinhNhue(int a[], int n, double mucTrungBinh);
int timDuongNhoNhat(int a[], int n);

int main() {
	int n;
	int a[50];
	do {
    	cout << "Nhap so luong chien binh (1 - 50): ";
    	cin >> n;
    	if (n < 1 || n > 50) {
        cout << "Quan so khong hop le! Nhap lai.\n";
    	}
	} while (n < 1 || n > 50);
	nhapmang(a, n);
	xuatmang(a, n);
	double tb = tinhTrungBinh(a, n);
	cout << "\nSuc manh trung binh: " << tb << '\n';
	int count = demTinhNhue(a, n, tb);
	cout << "So chien binh dat suc manh ok: " << count << '\n';
	int min = timDuongNhoNhat(a, n);
	if (min == -1){
		cout << "Khong co chien binh duong";
	}else{
		cout << "Chien binh duong yeu nhat: " << min << '\n';
	}

    return 0;
}

void nhapmang(int a[], int n){
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void xuatmang(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

double tinhTrungBinh(int a[], int n){
	double tb = 0;
	for (int i = 0; i < n; i++){
		tb += a[i];
	}
	return tb/n;
}

int demTinhNhue(int a[], int n, double mucTrungBinh){
	int count = 0;
	for (int i = 0; i < n; i++){
		if (a[i] >= mucTrungBinh){
			count++;		
		}
	}
	return count;
}

int timDuongNhoNhat(int a[], int n){
	int min = -1;
	for (int i = 0; i < n; i++){
		if (a[i] > 0){
			if (min == -1 || a[i] < min){
				min = a[i];
			}
		}
	}
	return min;
}



