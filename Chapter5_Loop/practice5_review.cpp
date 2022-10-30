#include <iostream>
#include <string>

using namespace std;

/*
선택 항목이 세 개인 설문 조사 프로그램을 작성하라. 프로그램에서 읽어 들어야 할 첫 번째 입력은 '설문'이고,
두 번째 입력부터 네 번째까지는 각 선택 항목이다. 첫 번째 선택 항목은 1, 두 번째는 2, 세 번째는 3으로 표시한다.
설문 조사는 0이 입력될 때까지 진행된다. 설문 조사가 완료되면 프로그램은 그 결과를 출력해야 한다.
가능하다면 막대그래프를 활용하여 설문 결과를 화면에 나타내어라.
이때 각 항목의 선택 비율이 막대그래프로 올바르게 나타나야 한다.
*/

int main(){
    string startReview;
    int i, j;
    int Tot1=0, Tot2=0, Tot3=0;
    string selc;

    cout << "개인 설문 조사\n";
    
    while(true){
        cout << "설문을 시작하려면 '설문'을 입력하세요(설문을 종료하려면 0을 입력하세요): ";
        cin >> startReview;

        if (startReview == "0"){
            break;
        }

        for (i=0; i<3; i++){
            cout << "3개의 선택 항목중 한 개의 숫자를 선택하여 입력하세요.(예: 3)\n";
            cout << "1\n";
            cout << "2\n";
            cout << "3\n";
            cout << "입력: ";
            cin >> selc;

            if (selc == "1"){
                Tot1 += 1;
            }
            else if(selc == "2"){
                Tot2 += 1;
            }
            else{
                Tot3 += 1;
            }
        }
    }

    // 막대그래프 그리기
    cout << "\n\n";
    cout << "  설문 결과\n\n";

     for (i=10; i>0; i--){
        cout.width(4);
        cout << i << "  │ ";

        if(Tot1 >= i){
                if(Tot1 == i){ cout << "  ┌┐ "; }
                else{ cout << "  ││ "; }
        }
        else{
            cout << "     ";
        }

        if(Tot2 >= i){
                if(Tot2 == i){ cout << "  ┌┐ "; }
                else{ cout << "  ││ "; }
        }
        else{
                cout << "     ";
        }

        if(Tot3 >= i){
                if(Tot3 == i){ cout << "  ┌┐ "; }
                else{ cout << "  ││ "; }
        }
        else{
            cout << "     ";
        }

        cout << "\n";
        
     }

    cout.width(15);
    cout << std::right << "0  └──";
     
    if(Tot1 != 0){
            cout << "─┴┴──";
    }
    else{
        cout << "─────";
    }

    if(Tot2 != 0){
            cout << "─┴┴──";
    }
    else{
        cout << "─────";
    }

    if(Tot3 != 0){
            cout << "─┴┴──";
    }
    else{
        cout << "─────";
    }

    cout << "\n";
    cout.width(15);
    cout << std::left << "         1번   2번   3번\n";

    cout << "\n";

    cout << "개인 설문 조사 프로그램을 종료합니다. 감사합니다.\n";
}