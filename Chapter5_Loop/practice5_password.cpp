#include <iostream>
#include <string>

using namespace std;

/*
 사용자가 무작위로 패스워드를 입력해 가며 추측하지 못하도록 사용자에게 정해진 횟수만큼만 패스워드
 입력 기회를 제공하는 패스워드 프로그램을 작성하라.
*/

int main(){
    int count = 2;
    string pw;

    cout << "비밀번호를 입력하세요: ";
    cin >> pw;

    while(count < 6){
        if(pw == "asdf"){
            cout << "올바른 비밀번호입니다.\n";
            break;
        }
        else{
            cout << "틀린 비밀번호입니다. 올바른 비밀번호를 입력해주세요(" << count << "/5): ";
            cin >> pw;
            count += 1;
        }
    }

    if (count == 6){
        cout << "입력횟수를 초과해서 입력하였습니다.\n";
    }
    return 0;
}