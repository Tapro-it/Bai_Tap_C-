#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter so lan ban muon lap: ";
    cin >> n;
    int choice;
    while (true){
        cout << "May muon xu li nhu the nao day:\n1. Muc nhau tai cho\n2. Keu them nguoi den\n3. 8=>o  :))\nChon 1 trong 3: ";
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3){
            break;
        }
        cout << "Chon 1 trong 3 thoi thang lon: ";
    } 
    do {
        switch (choice){
            case 1:
                for (int i=1; i<=n; i++){
                    cout << "Muc nhau tai cho!" << endl;
                }
                break;
            case 2:
                for (int i=1; i<=n; i++){
                    cout << "Keu them nguoi den!" << endl;
                }
                break;
            case 3:
                for (int i=1; i<=n; i++){
                    cout << "8=>o  :))" << endl;
                }
                break;
        }
        cout << "Chon 1 trong 3: 1 or 2 or 3 " << endl;
        cin >> choice;
    } 
    while (n > 0);
    return 0;
}
