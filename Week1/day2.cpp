// Write a Program That Demonstrates all c++ Datatypes and there Sizes:
// 1.Display the Size of Each fundamental Datatype
#include <iostream>
using namespace std;
int main()
{
    int num = 9;
    char alpha = 'A';
    float num2 = 7.5;
    double a = 4.5528;
    bool b = true;
    long int l = 45876.25856;
    long long int d = 456321.023145;
    cout << "The size of integer is:" << sizeof(num) << endl;
    cout << "The size of character is:" << sizeof(alpha) << endl;
    cout << "The size of float is:" << sizeof(num2) << endl;
    cout << "The size of double is:" << sizeof(a) << endl;
    cout << "The size of bool is:" << sizeof(b) << endl;
    cout << "The size of long integer is:" << sizeof(l) << endl;
    cout << "The size of long long integer is:" << sizeof(d) << endl;
    return 0;
}

// 2.show range of signed and unsigned Integers
#include <iostream>

#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    cout << "Size of char       : " << sizeof(char) << " bytes" << endl;
    cout << "Size of wchar_t    : " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of char16_t   : " << sizeof(char16_t) << " bytes" << endl;
    cout << "Size of char32_t   : " << sizeof(char32_t) << " bytes" << endl;
    cout << "Size of bool       : " << sizeof(bool) << " bytes" << endl;
    cout << "Size of short      : " << sizeof(short) << " bytes" << endl;
    cout << "Size of int        : " << sizeof(int) << " bytes" << endl;
    cout << "Size of long       : " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long  : " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float      : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double     : " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    cout << "Size of void* (pointer): " << sizeof(void *) << " bytes" << endl;
    cout << "Range of signed char   : " << (int)SCHAR_MIN << " to " << (int)SCHAR_MAX << endl;
    cout << "Range of unsigned char : 0 to " << (int)UCHAR_MAX << endl;
    cout << "Range of signed short  : " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "Range of unsigned short: 0 to " << USHRT_MAX << endl;
    cout << "Range of signed int    : " << INT_MIN << " to " << INT_MAX << endl;
    cout << "Range of unsigned int  : 0 to " << UINT_MAX << endl;
    cout << "Range of signed long   : " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "Range of unsigned long : 0 to " << ULONG_MAX << endl;
    cout << "Range of signed long long   : " << LLONG_MIN << " to " << LLONG_MAX << endl;
    cout << "Range of unsigned long long : 0 to " << ULLONG_MAX << endl;
    cout << "Float min  : " << FLT_MIN << " , max : " << FLT_MAX << endl;
    cout << "Double min : " << DBL_MIN << " , max : " << DBL_MAX << endl;
    cout << "Long double min : " << LDBL_MIN << " , max : " << LDBL_MAX << endl;

    return 0;
}

// 3.Demonstrate the type casting between different types
#include <iostream>
using namespace std;

int main()
{
    cout << "Implicit Type Casting " << endl;
    int a = 5;
    double b = 2.5;

    double result = a + b;
    cout << "int a = " << a << " + double b = " << b << " gives double result = " << result << endl;
    char ch = 'A';
    int x = ch;
    cout << "char 'A' implicitly cast to int: " << x << endl;
    cout << "Explicit Type Casting " << endl;
    double pi = 3.14159;
    int intPi = (int)pi;
    cout << "C-style cast: double pi = " << pi << " -> int = " << intPi << endl;
    int intPi2 = static_cast<int>(pi);
    cout << "C++ static_cast: double pi = " << pi << " -> int = " << intPi2 << endl;
    int num = 66;
    char letter = static_cast<char>(num);
    cout << "int 66 cast to char: " << letter << endl;
    int n = 10, m = 3;
    cout << "Integer division (10/3): " << n / m << endl;
    cout << "Explicit cast for float division: " << static_cast<float>(n) / m << endl;

    return 0;
}

// Create A program that shows the difference between global,function,and block scope
#include <iostream>
using namespace std;
int a = 100; // Global variable
void myFunction()
{
    int a = 50;
    cout << "Function variable Declaration: " << a << endl;
}
int main()
{
    cout << "Global variable Declaration: " << a << endl;
    {
        int a = 50;
        cout << "Block Space Variable Declaration: " << a << endl;
    }
    myFunction();
    return 0;
}

// Write a program that demonstrates different ways to use constrants
#include <iostream>
using namespace std;
#define PI 3.14159
const int MAX_USERS = 100;
constexpr int DAYS_IN_WEEK = 7;
enum Colors
{
    RED = 1,
    GREEN = 2,
    BLUE = 3
};

int main()
{
    cout << "=== Demonstrating Different Constants in C++ ===\n\n";
    cout << "Using #define: PI = " << PI << endl;
    cout << "Using const: MAX_USERS = " << MAX_USERS << endl;
    cout << "Using constexpr: DAYS_IN_WEEK = " << DAYS_IN_WEEK << endl;
    cout << "Using enum: RED = " << RED << ", GREEN = " << GREEN << ", BLUE = " << BLUE << endl;
    return 0;
}

// Create a program that show different ways to intialization variables
#include <iostream>
using namespace std;
int main()
{
    int a;
    a = 10;
    cout << "Default initialized (then assigned): a = " << a << endl;
    int b = 20;
    cout << "Copy initialization: b = " << b << endl;
    int c(30);
    cout << "Direct initialization: c = " << c << endl;
    int d{40};
    cout << "Uniform (brace) initialization: d = " << d << endl;
    double e{3.5};
    cout << "Uniform initialization (double): e = " << e << endl;
    int arr1[3] = {1, 2, 3};
    int arr2[]{4, 5, 6};
    cout << "Array list initialization: arr1[0] = " << arr1[0] << ", arr2[2] = " << arr2[2] << endl;
    return 0;
}

// wap that 1. declares arrays of diffrent types 2. initializes  arrays in different methods 3. Accesses and modifies the variable 4. calcuate avg and sum of array elements
#include <iostream>
using namespace std;

int main()
{
    // 1. Declare arrays of different types
    int intArray[5];
    float floatArray[5];
    char charArray[5];

    // 2. Initialize arrays in different methods

    int intArray2[5] = {1, 2, 3, 4, 5};
    float floatArray2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray2[5] = {'A', 'B', 'C', 'D', 'E'};

    // 3. Access and modify the variables
    intArray[0] = 10;
    floatArray[1] = 20.2;
    charArray[2] = 'Z';

    // 4. Calculate average and sum of array elements
    int intSum = 0;
    float floatSum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        intSum += intArray[i];
        floatSum += floatArray[i];
    }
    float intAvg = intSum / 5.0;
    float floatAvg = floatSum / 5.0;

    cout << "Integer Array - Sum: " << intSum << ", Average: " << intAvg << endl;
    cout << "Float Array - Sum: " << floatSum << ", Average: " << floatAvg << endl;
    return 0;
}