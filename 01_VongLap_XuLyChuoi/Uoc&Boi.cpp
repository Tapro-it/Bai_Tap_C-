#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << "Entre a, b: ";
	cin >> a >> b;
	int a_bd = a;
	int b_bd = b;
	while (b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	int gcd = a;
	int lcm = (a_bd * b_bd) / gcd;
	cout << "GCD: " << gcd << endl;
	cout << "LCM: " << lcm << endl;
	return 0;
}
