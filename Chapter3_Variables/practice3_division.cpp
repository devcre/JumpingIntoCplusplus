#include <iostream>
#include <string>

using namespace std;

int main()
{
    double divnd, divor; // 피제수, 제수 => divnd / divor = quotient

    cout << "Enter dividend: ";
    cin >> divnd;
    cout << "Enter second divisor: ";
    cin >> divor;

    cout << divnd << " / " << divor << " = " << divnd / divor << "\n";
}
