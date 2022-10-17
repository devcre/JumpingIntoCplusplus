#include <iostream>

using namespace std;

int main()
{
    // 누가누가 더 연장자인가
    int user1;
    int user2;

    cout << "Enter first user's age: \n";
    cin >> user1;
    cout << "Enter second user's age: \n";
    cin >> user2;

    if (user1 > 100 && user2 > 100) {
        cout << "All users are over 100.\n";
    }
    else if (user1 > user2) {
        cout << "user1 is older than user2.\n";
    }
    else if (user2 > user1) {
        cout << "user2 is older than user1.\n";
    }
    else {
        cout << "All users are the same age.";
    }

}
