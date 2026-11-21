#include <iostream>
#include <string>
#include <iomanip> // Thu vi?n dùng setprecision(2)
using namespace std;

// 1. Khai báo m?u (Function Prototypes)
double getSales(string divisionName);
void findHighest(double ne, double se, double nw, double sw);

int main() {
    double neSales, seSales, nwSales, swSales;

    // G?i hàm getSales 4 l?n cho 4 chi nhánh
    neSales = getSales("Northeast");
    seSales = getSales("Southeast");
    nwSales = getSales("Northwest");
    swSales = getSales("Southwest");

    // Chuy?n 4 con s? dã h?ng du?c vào hàm tìm chi nhánh cao nh?t
    findHighest(neSales, seSales, nwSales, swSales);

    return 0;
}

// 2. Hàm nh?p doanh s? và nh?t do-while b?t nh?p s? duong
double getSales(string divisionName) {
    double sales;
    do {
        cout << "Enter quarterly sales figure for " << divisionName << ": $";
        cin >> sales;
        if (sales < 0.0) {
            cout << "Error! Sales figures cannot be negative. Please try again.\n";
        }
    } while (sales < 0.0);

    return sales;
}

// 3. Hàm so sánh tìm doanh s? cao nh?t và in k?t qu?
void findHighest(double ne, double se, double nw, double sw) {
    // T?m th?i coi Northeast là chi nhánh cao nh?t
    double highestSales = ne;
    string winningDivision = "Northeast";

    // So sánh l?n lu?t v?i 3 chi nhánh còn l?i
    if (se > highestSales) {
        highestSales = se;
        winningDivision = "Southeast";
    }
    if (nw > highestSales) {
        highestSales = nw;
        winningDivision = "Northwest";
    }
    if (sw > highestSales) {
        highestSales = sw;
        winningDivision = "Southwest";
    }

    // In k?t qu? d?nh d?ng 2 ch? s? th?p phân
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe winning division is " << winningDivision 
         << " with $" << highestSales << " in sales!\n";
}
