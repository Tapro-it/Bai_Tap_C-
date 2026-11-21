#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter n: ";
	cin >> n;
	double sum = 0;
	double mauso = 0; 
	for (int i = 1; i <= n; i++){
		mauso += i;
		sum += double(i)/mauso;
	}
	cout << sum;
	return 0;
}
