#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	int Odd_positions = 0;
	int Even_positions = 0;
	int vitri = 1;
	int temp = n;
	while (temp > 0){
		int d = temp % 10;
		if (vitri % 2 == 0){
			Even_positions += d;
		}else{
			Odd_positions += d;
		}
		vitri++;
		temp /= 10;
	}
	cout << "Odd_positions: " << Odd_positions << endl;
	cout << "Even_positions: " << Even_positions;
	return 0;
} 
