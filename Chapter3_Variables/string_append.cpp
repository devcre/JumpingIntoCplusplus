#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_first_name; // 이름
    string user_last_name; // 성

    cout << "Please enter your first name: ";
    cin >> user_first_name;
    cout << "user_last_name: ";
    cin >> user_last_name;
    string user_full_name = user_first_name + " " + user_last_name;

    cout << "Your name is: " << user_full_name << "\n";
}
