#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    int temp = n;
    
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    if (sum % 7 == 0) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}
