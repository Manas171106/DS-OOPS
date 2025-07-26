// week2 - day1

// Write a c++ program that stmulates a simple banking system:
// use global variable totalBankBalance to track overall bank money
// create functions :- depositMoney(double amount) - adds to both acount and total bank balance
// withdrawMoney(double amount) - deducts if sufficient balance exists
// displayBalance() - show both account and total bank balancee
// in main(), demonstrate how local account balance and global bank balance work differently
// use static local variable inside functions to count total transactions

#include <iostream>
using namespace std;

static double totalBankBalance;
static double accountBalance;
static int transactions = 0;

// Deposit function
void depositMoney(double deposit)
{
    totalBankBalance += deposit;
    accountBalance += deposit;
    transactions++;
    cout << "\nAfter deposit of " << deposit << endl;
    cout << "Account Balance : " << accountBalance << endl;
    cout << "Total Bank Balance : " << totalBankBalance << endl;
}

// Withdraw function
void withdrawMoney(double withdraw)
{
    if (withdraw > totalBankBalance || withdraw > accountBalance)
    {
        cout << "Insufficient Balance";
    }
    else
    {
        totalBankBalance -= withdraw;
        accountBalance -= withdraw;
        transactions++;
        cout << "\nAfter Withdrawal of " << withdraw << endl;
        cout << "Account Balance : " << accountBalance << endl;
        cout << "Total Bank Balance : " << totalBankBalance << endl;
    }
}

int main()
{
    char choice;
    double depositAmount, withdrawAmount;

    cout << "Enter account balance: ";
    cin >> accountBalance;

    cout << "Enter total bank balance: ";
    cin >> totalBankBalance;

    bool opt = true;
    while (opt)
    {
        cout << "enter your choice (E for Exit, C for continue)";
        cin >> choice;

        if (choice == 'c' || choice == 'C')
        {
            char choice2;
            cout << "Enter your choice (D for deposit, W for withdrawal, S for showing balances): ";
            cin >> choice;

            if (choice == 'D' || choice == 'd')
            {
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                depositMoney(depositAmount);
            }
            else if (choice == 'S' || choice == 's')
            {
                cout << "\nAccount Balance : " << accountBalance << endl;
                cout << "Total Bank Balance : " << totalBankBalance << endl;
            }
            else if (choice == 'W' || choice == 'w')
            {
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                withdrawMoney(withdrawAmount);
            }
            else
            {
                cout << "\nInvalid choice." << endl;
            }
        }
        else
        {
            opt = false;
        }
    }
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------

// traffic light stimulator
//  takes current traffic light color(r/g/y) and duration as input
//  uses if-else statement to determine the next light color and timming
//  red(30 sec) -> green(45 sec)
//  green(45 sec) -> yellow(5 sec)
//  yellow(5 sec) -> red(30 sec)
//  uses a for loop to stimulate countdown timer
//  displays appropriate message for drivers

#include <iostream>
#include <cctype> // for toupper
using namespace std;

int main()
{
    char currentLight;
    int remTime;

    cout << "Enter Current light (R/G/Y): ";
    cin >> currentLight;
    currentLight = toupper(currentLight);

    cout << "Enter remaining time (in seconds): ";
    cin >> remTime;

    char nextLight;
    int nextDuration;
    string message;

    if (currentLight == 'R')
    {
        nextLight = 'G';
        nextDuration = 45;
        message = "STOP! Wait for green.";
    }
    else if (currentLight == 'G')
    {
        nextLight = 'Y';
        nextDuration = 5;
        message = "GO! But prepare to stop.";
    }
    else if (currentLight == 'Y')
    {
        nextLight = 'R';
        nextDuration = 30;
        message = "SLOW DOWN! Red light coming.";
    }
    else
    {
        cout << "Invalid traffic light color!" << endl;
        return 1;
    }

    // Countdown timer
    cout << "\nCurrent Light: " << currentLight << " | Time remaining: " << remTime << " seconds" << endl;
    for (int i = remTime; i > 0; i--)
    {
        cout << "Time left: " << i << " seconds\r";
    }

    cout << "\nLight changed to: " << nextLight << " for " << nextDuration << " seconds." << endl;
    cout << "Driver message: " << message << endl;

    return 0;
}
