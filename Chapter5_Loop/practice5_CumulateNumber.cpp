#include <iostream>
#include <string>

using namespace std;

// 사용자가 입력하는 수를 누적하며 더하는 프로그램
int main()
{
    int val1, total;
    total = 0;

    cout << "수를 입력하세요: ";
    cin >> val1;
    total += val1;

    while (val1 != 0) {
        cout << "수를 입력하세요: ";
        cin >> val1;
        total += val1;
    }

    cout << "누적된 값: " << total << "\n";
    return 0;
}
