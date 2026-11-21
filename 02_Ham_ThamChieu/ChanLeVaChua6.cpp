#include <iostream>
using namespace std;

bool chua6(int n){
	while (n){
		int d = n % 10;
		n /= 10;
		if (d == 6){
			return true;
		}	
	}
	return false;
}

bool tongchan(int n){
	int sum = 0;
	while (n){
		sum += n%10;
		n/=10;
	}
	return sum % 2 == 0;
}

bool chanle(int n){
	int demchan = 0;
	int demle = 0;
	while (n){
		int d = n % 10;
		if (d % 2 == 0){
			demchan++;
		}
		else{
			demle++;
		}
		n /= 10;
	}
	return demle > demchan;
	
}

int main(){
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++){
		if (chua6(i) && tongchan(i) && chanle(i)){
			cout << i << " ";
		}
	}
}
