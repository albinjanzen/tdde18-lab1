#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    ifstream doc{"text.txt"};
    string s{};
    string l{};
    string k{};
    int size{0}, letters{0};
    float average{0};
    doc >> s;
    ++size;
    l = s;
    k = s;
    letters = letters + s.size();
    while (doc >> s) {
        ++size;
        letters = letters + s.size();
        if (s.size()>l.size()) {
            l=s;
        } else if (s.size()<k.size())
        {
            k=s;
        }
    }
    if (!(average=0.00)) {
        average = letters/size;
        cout << "There are " << size << " words in the file." << endl;
        cout << "The shortest word was \"" << k << "\" with " << k.size() << " character(s)." << endl;
        cout << "The longest word was \"" << l << "\" with " << l.size() << " character(s)." << endl;
        cout << "The average length was " << fixed << setprecision(2) << average << " character(s)." << endl;
    } else {
        cout << "Error: file is empty." << endl;
    }
    
}