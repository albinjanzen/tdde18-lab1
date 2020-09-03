#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    
    float first = 0, last = 0, stride = 0, tax = 0;

    cout << "INPUT PART" << endl << "==========" << endl << "Enter first price: ";
    cin >> first;
    cout << "Enter last price" << setw(3) << ": ";
    cin >> last;
    cout << "Enter stride" << setw(7) << ": ";
    cin >> stride;
    cout << "Enter tax percent: ";
    cin >> tax;
    cout << endl;
    
    cout << "TAX TABLE" << "==========" << endl;
    cout << setw(8) << "Price" << setw(15) << "Tax" 


}