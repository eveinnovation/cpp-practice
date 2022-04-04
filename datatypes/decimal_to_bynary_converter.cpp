#include <iostream>
#include <cmath>


/*
Assignment	=	x = y	Assign value y to x
Addition assignment	+=	x += y	Add y to x
Subtraction assignment	-=	x -= y	Subtract y from x
Multiplication assignment	*=	x *= y	Multiply x by y
Division assignment	/=	x /= y	Divide x by y
Modulus assignment	%=	x %= y	Put the remainder of x / y in x
 */


/*
 * Decimal to byte conversion
 * 1. Divide the given number 13 repeatly by 2 until you got 0 as quotient
 * 13 / 2 = 6 (remainder 1)
 * 6 / 2 = 3 (remainder 0)
 * 3 / 2 = 1 (remainder 1)
 * 1 / 2 = 0 (remainder 1)  always rounding up
 *
 * 2. Write the reminders in the reverse order : 1101
 *
 *
 */

int increment = 0;
int arr[] = {};

int binary(int);
void reverseNumber(char);

void reverseNumber(char number) {
    using namespace std;
    int reversed_number = 0, remainder;
    cout << "Enter an integer: ";


    while(number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    cout << "Reversed Number = " << reversed_number;
}

int binary(int decimal) {
    if (decimal == 0) {
        return 0;
    }

    using namespace std;
    int bit_base = 2;

    int divide = decimal / bit_base;
    int rest_remaining_as_bit = decimal % bit_base;

    arr[increment] = rest_remaining_as_bit;

    increment++;
    return binary(divide);
}

int main() {
    using namespace std;

    int decimal;
    cout << "Enter a decimal: " << endl;
    cin >> decimal;

    binary(decimal);

    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout << arrSize << endl;


//    for (int i = 0; i <= sizeof arr; i++ ) {
//        cout << arr[i];
//    }

    return 0;
}
