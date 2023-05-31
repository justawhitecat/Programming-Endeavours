#include <iostream>
using namespace std;

int main(){
    // all conversions
    double meters;
    double feet;
    double celsius;
    double fahrenheit;
    double distance;
    double time;
    double speed;
    double kilograms;
    double pounds;
    double miles;
    double kilometer;

    // tool
    int choice;

    // calculator
    double num1;
    double num2;
    char op;

    // conversion tool
    int choice2;
    
    cout << "What tool will you use:\n0 = Conversion\t 1 = Calculator\n";
    cin >> choice;

    switch(choice){
        case 0:
            cout << "What are you converting from\n0 = Feet\t 1 = Meters\n2 = Celsius\t 3 = Fahrenheit\n4 = Time\t 5 = Distance\t 6 = Speed\n7 = Pounds\t 8 = Kilograms\n9 = Miles\t 10 = Kilometers\n";
            cin >> choice2;

            switch(choice2){
                case 0: 
                    cout << "How many feet? "; cin >> feet;
                    meters = feet / 3.28084;
                    cout << meters << "m";
                    break;
                case 1:
                    cout << "How many meters? "; cin >> meters;
                    feet = meters * 3.28084;
                    cout << feet << "ft";
                    break;
                case 2:
                    cout << "Enter the celsius: "; cin >> celsius;
                    fahrenheit = (celsius * 1.8) + 32;
                    cout << fahrenheit << "°F";
                    break;
                case 3:
                    cout << "Enter the fahrenheit: "; cin >> fahrenheit;
                    celsius = (fahrenheit - 32) / 1.8;
                    cout << celsius << "°C";
                    break;
                case 4:
                    cout << "Enter distance: "; cin >> distance;
                    cout << "Enter speed: "; cin >> speed;
                    time = distance / speed;
                    cout << time << "s";
                    break;
                case 5:
                    cout << "Enter time: "; cin >> time;
                    cout << "Enter speed: "; cin >> speed;
                    distance = speed * time;
                    cout << distance << "m";
                    break;
                case 6:
                    cout << "Enter distance: "; cin >> distance;
                    cout << "Enter time: "; cin >> time;
                    speed = distance / time;
                    cout << speed << "m/s";
                    break;
                case 7:
                    cout << "Enter pounds: "; cin >> pounds;
                    kilograms = pounds / 2.2;
                    cout << kilograms;
                    break;
                case 8:
                    cout << "Enter kilograms: "; cin >> kilograms;
                    pounds = kilograms * 2.2;
                    cout << pounds;
                    break;
                case 9:
                    cout << "How many miles: "; cin >> miles;
                    kilometer = miles * 1.609344;
                    cout << kilometer << "km";
                    break;
                case 10:
                    cout << "How many kilometers: "; cin >> kilometer;
                    miles = kilometer / 1.609344;
                    cout << miles << " miles";
                    break;
                default:
                    cout << "Invalid choice";
            }
            break;
        case 1:
            cout << "Enter first number: "; cin >> num1;
            cout << "Enter second number: "; cin >> num2;
            cout << "Enter operator: "; cin >> op;

            switch (op){
                case '+':
                    cout << num1 + num2;
                    break;
                case '-':
                    cout << num1 - num2;
                    break;
                case '*':
                    cout << num1 * num2;
                    break;
                case '/':
                    cout << num1 / num2;
                    break;
                default:
                    cout << "Something went wrong.";
            }
            break;
        default:
            cout << "Invalid choice.";
    }
}