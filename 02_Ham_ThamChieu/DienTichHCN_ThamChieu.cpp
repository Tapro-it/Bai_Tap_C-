#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double& l, double& w);
void displayData(double& l, double& w, double& a);

int main(){
	double length, width, area;	
	length = getLength();
	width = getWidth();
	area = getArea(length, width);
	displayData(length, width, area);
}

double getLength(){
	double length;
	cout << "Enter length: ";
	cin >> length;
	return length;
}

double getWidth(){
	double width;
	cout << "Enter width: ";
	cin >> width;
	return width;
} 

double getArea(double& l, double& w) { 
    return l * w;                     
}

void displayData(double& l, double& w, double& a){
	cout << "Length: " << l << '\n';
	cout << "Width: " << w << '\n';
	cout << "Area: " << a << '\n';
}
