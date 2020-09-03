#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    
    float first=0, last=0, stride=0, tax=0, actax=0, actaxprice=0;
    int loopsize{};

    cout << "INPUT PART" << endl << "==========" << endl << "Enter first price: ";
    cin >> first;
    while(first<0) {
        cout << "First price must be at least 0 (zero)." << endl << "Enter first price: ";
        cin >> first;
    }
    cout << "Enter last price" << setw(3) << ": ";
    cin >> last;
    while(last<=first) {
        cout << "First price must be larger than first price." << endl << "Enter last price" << setw(3) << ": ";
        cin >> last;
    }
    cout << "Enter stride" << setw(7) << ": ";
    cin >> stride;
    while(stride<float(0.01)) {
        cout << "Stride must be at least 0.01" << endl << "Enter stride" << setw(7) << ": ";
        cin >> stride;
    }
    cout << "Enter tax percent: ";
    cin >> tax;
    while(tax<float(0.00) || tax>float(100.00)) {
        cout << "Tax must be between 0 and 100" << endl << "Enter tax percent: ";
        cin >> tax;
    }
    cout << endl;
    
    cout << "TAX TABLE" << endl <<  "==========" << endl;
    cout << fixed << setw(13) << "Price" << fixed << setw(17) << "Tax" << fixed << setw(20) << "Price with tax" << endl;
    cout << setfill('-') << setw(50) << '-' << endl;
    
    loopsize = (last-first)/stride;
    
    for(int i{0}; i <= loopsize; ++i) {
        actax = first*(tax/100.00);
        actaxprice = first + actax;
        cout << fixed << setfill(' ') << setw(13) << setprecision(2) << first << fixed << setw(17) << setprecision(2) << actax << fixed << setw(20) << setprecision(2) << actaxprice << endl;
        first = first + stride;
    }



}