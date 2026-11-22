#include <iostream>
using namespace std;

void daoNguocMang(int *a, int n);
int timSoLonThuHai(int *a, int n, bool &aquan);

int main(){
	bool aquan = false;
	int n;
	int *a;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	} 
	daoNguocMang(a, n);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	int lonThuHai = timSoLonThuHai(a, n, aquan);
	if (aquan){
		cout << lonThuHai;
	}else{
		cout << "Khong co so lon thu hai!";
	}
	delete[] a;
	return 0;
}

void daoNguocMang(int *a, int n){
	int *left = &a[0];
	int *right = &a[n - 1];
	while(left < right){
		int temp = *left;
		*left = *right;
		*right = temp;
		
		left++;
		right--;
	}
}

int timSoLonThuHai(int *a, int n, bool &aquan){
	aquan = false;
	int max1 = *a;
	int max2 = 0;
	for (int i = 1; i < n; i++){
		if (*(a + i) > max1){
			max2 = max1;
			max1 = *(a + i);
			aquan = true;
		}
		else if (*(a + i) < max1 && (!aquan || *(a + i) > max2)){
			max2 = *(a + i);
			aquan = true;
		}
	}
	return max2;
}
