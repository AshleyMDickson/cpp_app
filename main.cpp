// include our header file with the function declaration
#include "function.h" 
#include <iostream>

using namespace std;

int main()
{
    char z{'y'};
    while(z = 'y'){
        int x{}; int y{}; 
        cout << "Enter your first number: " << endl;
        cin >> x;
        cout << "Enter your second number" << endl;
        cin >> y;
        cout << "Here's the list of primes between your two numbers:" << endl;
        f(x, y);
        cout << "Run it again? (y/n):" << endl;
        cin >> z;
        if(z == 'y'){} 
        else {
            break;
        }
    }
    return 0;
}