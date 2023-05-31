#include <iostream>
using namespace std;

int main(){
    int a = 1;
    double b = 1.2;
    char c = 'g';
    string d = "This is a string";
    bool e = true;
    double f = a + b;

    cout << "The number: \"" << f << "\" comes from the addition of the numbers: \"" << a << "\" and \"" << b << "\". \nThe letter \"" << c << "\" is the 7th letter in the alphabet.\n";
    cout << '\n' << d << " is " << e;
}