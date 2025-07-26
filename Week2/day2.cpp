// week2 - day 2


//Password strength checker

#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0, upper = 0, lower = 0, digit = 0, special = 0;

    cout << "Enter password: ";
    cin >> str;

    int i = 0;
    while (str[i] != '\0') {
        length++;

        if (str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        }
        else {
            special++;
        }
        i++;
    }

    int categories = 0;
    if (upper > 0) categories++;
    if (lower > 0) categories++;
    if (digit > 0) categories++;
    if (special > 0) categories++;

    // Determine strength
    if (length < 6 || categories < 2) {
        cout << "Password strength: Weak" << endl;
    }
    else if (length >= 6 && length <= 8 && categories >= 3) {
        cout << "Password strength: Medium" << endl;
    }
    else if (length >= 9 && categories == 4) {
        cout << "Password strength: Strong" << endl;
    }
    else {
        cout << "Password strength: Weak" << endl;
    }

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------

// -> displays availaible items using arrays and loops 
// -> uses switch-case to handle item selection 
// -> uses do-while loop for money insertion untiil sufficient amount 
// -> calculates and dispenses change using nested loops 
// -> continue until user selects exit option 

#include <iostream>
using namespace std;

    int main() {
        // Item details: IDs, Names, Prices (in cents)
        int itemIds[4] = {1, 2, 3, 4};
        string itemNames[4] = {"Soda", "Chips", "Chocolate", "Water"};
        int itemPrices[4] = {120, 75, 90, 50}; // prices in cents

        int coins[6] = {100, 50, 25, 10, 5, 1}; // coin denominations in cents

        bool exitProgram = false;

        while (!exitProgram) {
            cout << "Available items:\n";
            for (int i = 0; i < 4; i++) {
                cout << itemIds[i] << ". " << itemNames[i] << " - $" << itemPrices[i] / 100.0 << endl;
            }
            cout << "5. Exit\n";

            int choice;
            cout << "Select an item by entering its number: ";
            cin >> choice;

            switch (choice) {
                case 1:
                case 2:
                case 3:
                case 4: {
                    int index = choice - 1;
                    cout << "You selected: " << itemNames[index] << ", price: $" << itemPrices[index] / 100.0 << endl;

                    int totalInserted = 0;
                    do {
                        int inserted;
                        cout << "Insert money (in cents). Total inserted: " << totalInserted << " cents: ";
                        cin >> inserted;

                        if (inserted <= 0) {
                            cout << "Please insert a positive amount.\n";
                        } else {
                            totalInserted += inserted;
                        }
                    } while (totalInserted < itemPrices[index]);

                    int change = totalInserted - itemPrices[index];
                    cout << "Dispensing your " << itemNames[index] << "...\n";

                    if (change > 0) {
                        cout << "Your change is " << change << " cents:\n";
                        int remaining = change;
                        for (int i = 0; i < 6; i++) {
                            while (remaining >= coins[i]) {
                                remaining -= coins[i];
                                cout << "  Dispensed coin: " << coins[i] << " cents\n";
                            }
                        }
                    } else {
                        cout << "No change to dispense.\n";
                    }
                    break;
                }
                case 5:
                    cout << "Exiting vending machine. Thank you!\n";
                    exitProgram = true;
                    break;
                default:
                    cout << "Invalid selection. Please try again.\n";
            }
            cout << endl;
        }

        return 0;
    }


//------------------------------------------------------------------------------------------------------------------------------------