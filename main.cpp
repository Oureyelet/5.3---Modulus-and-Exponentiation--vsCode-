#include <iostream>
#include "first.h"
#include <cmath> // for 'pow'
#include <cstdint> // for int_fast64_7

using namespace std;

int main()
{
    message();
    modulus_one();

    /*
    exponent operator
    */
   double x{ pow( 3.0, 4.0 ) }; //3 to the 4th power :)
   cout << x << '\n' << endl;

   cout << powint(7, 12) << '\n'; // 7 to the 12th power

    /*
    Question #2

    Write a program that asks the user to input an integer, and tells the user whether the number is 
    even or odd. Write a function called isEven() that returns true if an integer passed to it is even, 
    and false otherwise. Use the modulus operator to test whether the integer parameter is even.

    Hint: You’ll need to use if statements and the comparison operator (==) for this program. 
    See lesson 4.9 -- Boolean values if you need a refresher on how to do this.

    Your program should match the following output:

    Enter an integer: 5
    5 is odd
    */

    cout << "Input an Enteger: ";
    int x1{};
    cin >> x1;

    if ( isEven(x1) )
        cout << x1 << " is even." << '\n' << endl;
    else 
        cout << x1 << " is odd." << '\n' << endl;


    return 0;
}