#include <iostream>

using namespace std;

bool isEven(int x)
{
    return (x%2 == 0); // bool function is only for give as true or false answer.
}

int_fast64_t powint(int base, int exp)
{
    int_fast64_t result{ 1 };
    while (exp)
    {
        if(exp & 1)
        result *= base;
		exp >>= 1;
		base *= base;
    }
    return result;
}

void message()
{
    cout << "Hello World!" << '\n' << endl;;
}

void modulus_one()
{
    cout << "Enter an integer: ";
    int x{};
    cin >> x;

    cout << "Enter another integer: ";
    int y{};
    cin >> y;

    cout << "The remainder is: " << x % y << '\n';

    if ( (x%y) == 0 )
    {
        cout << x << " is evenly devisible by " << y << '\n';
    }
    else
    {
        cout << x << " is not evenly devisible by " << y << '\n';
    }
}