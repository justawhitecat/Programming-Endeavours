#include <iostream>
using namespace std;

void showBalance(double balance){
    cout << "You have $" << balance << endl;
}

double deposit(){
    double amount;

    cout << "\nEnter amount to be deposited\n";
    cin >> amount;

    if (amount > 0){
        return amount;
    } else{
        cout << "Invalid amount\n";
    }
}
double withdraw(){
    double amount;

    cout << "\nEnter amount to be withdrawn\n";
    cin >> amount;

    if (amount > 0){
        return amount;
    } else{
        cout << "Invalid amount\n";
    }
}

int main(){
    double balance = 100;
    int choice;

    do{
        cout << "\nWELCOME TO BANK\n\n1. Show Balance\t2. Deposit Money\t3. Withdraw Money\n\n";
        cin >> choice;

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw();
                showBalance(balance);
                break;
            default:
                cout << "ERROR IN CHOICE";
        }
    } while(choice != 4);

}