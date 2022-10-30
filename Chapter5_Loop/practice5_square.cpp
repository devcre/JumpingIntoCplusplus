#include <iostream>
#include <string>

using namespace std;

/*
1에서 20까지 각각의 제곱을 출력하는 프로그램
*/

int main(){
    int value;

    for(value=1; value<21; value++){
        cout << value << "의 제곱: " << value * value << "\n";
    }

    return 0;
}