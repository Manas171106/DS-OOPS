#include <iostream>
using namespace std;

//Create a program that performs basic arithmetic operations on two  numbers.
int main() {
    double a, b, result;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '*') {
        result = a * b;
    } else if (op == '/') {
        if (b != 0)
            result = a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
    } else {
        cout << "Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}



//Grade Calculator
#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    double average;
    char grade;

    cout << "Enter marks for 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    if (average >= 90 && average <= 100) {
        grade = 'A';
    } else if (average >= 80 && average <= 89) {
        grade = 'B';
    } else if (average >= 70 && average <= 79) {
        grade = 'C';
    } else if (average >= 60 && average <= 69) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}




//Number Properties
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Even or Odd
    if (num % 2 == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;

    // Positive, Negative or Zero
    if (num > 0)
        cout << "Positive number" << endl;
    else if (num < 0)
        cout << "Negative number" << endl;
    else
        cout << "Zero" << endl;

    // Digit Count
    int absNum = num < 0 ? -num : num;
    if (absNum < 10)
        cout << "Single digit number" << endl;
    else if (absNum < 100)
        cout << "Double digit number" << endl;
    else
        cout << "More than two digits" << endl;

    return 0;
}








//Simple interest calculator
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;

    cout << "Enter Principal: ";
    cin >> principal;
    cout << "Enter Rate (%): ";
    cin >> rate;
    cout << "Enter Time (years): ";
    cin >> time;

    interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << interest << endl;

    return 0;
}



//Temperature Converter
#include <iostream>
using namespace std;

int main() {
    float temp, converted;
    char from, to;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Convert from (C/F/K): ";
    cin >> from;

    cout << "Convert to (C/F/K): ";
    cin >> to;

    if (from == 'C' && to == 'F') {
        converted = (temp * 9/5) + 32;
    } else if (from == 'C' && to == 'K') {
        converted = temp + 273.15;
    } else if (from == 'F' && to == 'C') {
        converted = (temp - 32) * 5/9;
    } else if (from == 'F' && to == 'K') {
        converted = (temp - 32) * 5/9 + 273.15;
    } else if (from == 'K' && to == 'C') {
        converted = temp - 273.15;
    } else if (from == 'K' && to == 'F') {
        converted = (temp - 273.15) * 9/5 + 32;
    } else if (from == to) {
        converted = temp;
    } else {
        cout << "Invalid conversion!" << endl;
        return 1;
    }

    cout << "Converted temperature: " << converted << " " << to << endl;

    return 0;
}









//  Scope demonstration 
#include <iostream>
using namespace std;

int x = 10; 

int main() {
    cout << "Global x = " << x << endl;

    int x = 20; 
    cout << "Function scope x = " << x << endl;

    {
        int x = 30; 
        cout << "Block scope x = " << x << endl;
    }

    cout << "Back to function scope x = " << x << endl;

    return 0;
}









//constant usage
#include <iostream>
#define PI_MACRO 3.14159 

using namespace std;

int main() {
    const float pi_const = 3.14159; 

    cout << "Const variable pi = " << pi_const << endl;
    cout << "Macro constant PI_MACRO = " << PI_MACRO << endl;

    return 0;
}











//Variable Initialization
#include <iostream>
using namespace std;

int main() {
    // Copy initialization
    int a = 10;

    // Direct initialization
    int b(20);

    // Uniform initialization (C++11)
    int c{30};

    // Default initialization
    int d{}; // Initializes to 0

    cout << "Copy initialized: a = " << a << endl;
    cout << "Direct initialized: b = " << b << endl;
    cout << "Uniform initialized: c = " << c << endl;
    cout << "Default initialized: d = " << d << endl;

    return 0;
}










//Basic Array operations
#include <iostream>
using namespace std;

int main() {
   
    int intArray[5]; 
    float floatArray[] = {1.1f, 2.2f, 3.3f}; 

    for (int i = 0; i < 5; i++) {
        intArray[i] = i + 1;
    }

    intArray[2] = 10;

    cout << "Integer array: ";
    for (int i = 0; i < 5; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += intArray[i];
    }

    float average = sum / 5.0;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}