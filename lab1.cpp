#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number{};
    float real{};
    char character{};
    string str{};

    cout << "Enter one integer: " << flush;
    cin >> number;
    getline(cin, str);
    cout << "You entered the number: " << number << endl << endl;

    cout << "Enter four integers: ";
    cin >> number;
    cout << "You entered the numbers: " << number << " ";
    cin >> number;
    cout << number << " ";
    cin >> number;
    cout << number << " ";
    cin >> number;
    cout << number << endl << endl;
    getline(cin, str);

    cout << "Enter one integer and one real number: ";
    cin >> number;
    cin >> real;
    cout << "The real is: " << setw(11) << setprecision(4) << real << endl;
    cout << "the integer is: " << setw(8) << number << endl << endl;
    getline(cin, str);

    cout << "Enter one real and one integer number: ";
    cin >> real;
    cin >> number;
    cout << "The real is: " << setfill('.') << setw(11) << fixed << setprecision(3) << real << endl;
    cout << "the integer is: " << setfill('.') << setw(8) << number << endl << endl;
    getline(cin, str);

    cout << "Enter a character: ";
    cin >> character;
    cout << "You entered: " << character << endl << endl;
    getline(cin, str);

    cout << "Enter a word: ";
    cin >> str;
    cout << "The word '" << str << "' has " << str.size() << " character(s)" << endl << endl;
    getline(cin, str);

    cout << "Enter an integer and a word: ";
    cin >> number;
    cin >> str;
    cout << "You entered '" << number << "' and '" << str <<"'." << endl << endl;
    getline(cin, str);

    cout << "Enter a character and a word: ";
    cin >> character;
    cin >> str;
    cout << "You entered the string \""<< str << "\" and the character '" << character << "'." << endl << endl;
    getline(cin, str);

    cout << "Enter a word and a real number: ";
    cin >> str;
    cin >> real;
    cout << "You entered: \"" << str << "\" and \"" << fixed << setprecision(3) << real << "\"." << endl << endl;
    getline(cin, str);

    cout << "Enter a text-line: ";
    getline(cin, str);
    cout << "You entered: \"" << str << "\"" << endl << endl;

    cout << "Enter a second line of text: ";
    getline(cin, str);
    cout << "You entered: '" << str << "\"" << endl << endl;

    cout << "Enter three words: ";
    cin >> str;
    cout << "You entered: '" << str << " ";
    cin >> str;
    cout << str << " ";
    cin >> str;
    cout << str << "'" << endl << endl;

    return 0;
}