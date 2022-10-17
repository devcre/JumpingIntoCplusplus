#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 작은 계산기 프로그램
    int val1, val2;
    string opr; // operator

    cout << "Enter a Operator: \n";
    cin >> opr;

    cout << "Enter a first Number to calculate: \n";
    cin >> val1;
    cout << "Enter a second Number to calculate: \n";
    cin >> val2;
    cout << "\n";

    if (opr == "+") {
        cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
    }
    else if (opr == "-") {
        cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
    }
    else if (opr == "*") {
        cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
    }
    else if (val2 != 0 && opr == "/") {
        cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
    }
    else {
        cout << "Not a valid Operator or Numbers.\n";
    }
}
