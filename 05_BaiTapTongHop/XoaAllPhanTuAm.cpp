#include <iostream>
using namespace std;

void xoaTaiViTri(int a[], int &n, int k);
void xoaTatCaSoAm(int a[], int &n);
void xuatmang(int a[], int n);

int main(){
	int n;
	int *a;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	xoaTatCaSoAm(a, n);
	if (n == 0) cout << "Doi hinh trong!";
	else xuatmang(a, n);
	delete[] a;
	return 0;
}

void xoaTaiViTri(int a[], int &n, int k){
	if (k < 0 || k >= n){
		cout << "Loi!";
		return;
	}
	for (int i = k; i < n - 1; i++){
		a[i] = a[i + 1];
	}
	n--;
}

void xoaTatCaSoAm(int a[], int &n){
	for (int i = 0; i < n; i++){
		if (a[i] < 0){
			xoaTaiViTri(a, n, i);
			i--;
		}
	}
}

void xuatmang(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
