#include<iostream>
using namespace std;

#include "Calculator.h" // 객체를 생성하기 위해 클래스 선언부의 헤더파일을 불러옴

int main() {
    Add a; // Add 클래스의 덧셈 객체 생성
    Sub s; // Sub 클래스의 뺄셈 객체 생성
    Mul m; // Mul 클래스의 곱셈 객체 생성
    Div d; // Div 클래스의 나눗셈 객체 생성
    int x, y; // 입력 값을 저장할 변수
    char c; // 연산자를 저장할 변수(연산자는 문자이기 때문에 char 선언)

    // while문에 true를 넣어 무한 루프
    while (true) {
        cout << "두 정수와 연산자를 입력하세요>>"; // 사용자에게 두 정수와 연산자를 입력하라고 모니터에 출력해주는 코드
        cin >> x >> y >> c; // 사용자에게 정수 2개와 연산자를 입력 받는다
        if (c == '+') { // 입력받은 c 변수의 연산자가 덧셈인지 확인
            a.setValue(x, y); // 객체 a의 멤버 함수 setValue에 접근하여 x, y의 값 설정
            cout << a.calculate() << endl; // 객체 a의 멤버 함수 calculate가 계산한 반환값을 출력
        }
        else if (c == '-') { // 입력받은 c 변수의 연산자가 뺄셈인지 확인
            s.setValue(x, y); // 객체 s의 멤버 함수 setValue에 접근하여 x, y의 값 설정
            cout << s.calculate() << endl; // 객체 s의 멤버 함수 calculate가 계산한 반환값을 출력
        }
        else if (c == '*') { // 입력받은 c 변수의 연산자가 곱셈인지 확인
            m.setValue(x, y); // 객체 ,m의 멤버 함수 setValue에 접근하여 x, y의 값 설정
            cout << m.calculate() << endl; // 객체 m의 멤버 함수 calculate가 계산한 반환값을 출력
        }
        else if (c == '/') { // 입력받은 c 변수의 연산자가 나눗셈인지 확인
            d.setValue(x, y); // 객체 d의 멤버 함수 setValue에 접근하여 x, y의 값 설정
            cout << d.calculate() << endl; // 객체 d의 멤버 함수 calculate가 계산한 반환값을 출력
        }
    }
}
