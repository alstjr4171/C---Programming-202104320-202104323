#include <iostream>
using namespace std; // std::를 생략하기 위해 표준 네임스페이스 사용


// 덧셈을 구현하기 위한 Add 클래스의 선언부
class Add {
private: // 중요한 멤버는 다른 클래스나 객체에서 접근할 수 없도록 보호하기 위해 private 설정
    int a, b; // 입력 받은 두 정수를 저장할 private 멤버 변수
public: // Add 클래스 밖에서도 접근 할 수 있게 public 설정
    void setValue(int x, int y); // a와 b의 값을 설정하는 메서드
    int calculate(); // a와 b의 덧셈을 수행하는 메서드
};

// a와 b의 값을 설정하는 Add 구현부
void Add::setValue(int x, int y) {
    a = x; // 매개변수 x를 멤버 변수 a에 할당
    b = y; // 매개변수 y를 멤버 변수 b에 할당
}

// 덧셈을 계산하는 Add 구현부
int Add::calculate() {
    return a + b; // a와 b의 덧셈을 반환
}

// 뺄셈을 구현하기 위한 Sub 클래스의 선언부
class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y); // a와 b의 값을 설정하는 메서드
    int calculate(); // a와 b의 뺄셈을 수행하는 메서드
};

// a와 b의 값을 설정하는 sub 구현부
void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}

// 뺄셈을 계산하는 Sub 구현부
int Sub::calculate() {
    return a - b; // a와 b의 뺄셈을 반환
}

// 곱셈을 구현하기 위한 Mul 클래스의 선언부
class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y); // a와 b의 값을 설정하는 메서드
    int calculate(); // a와 b의 곱셈을 수행하는 메서드
};

// a와 b의 값을 설정하는 Mul 구현부
void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}
// 곱셈을 계산하는 Mul 구현부
int Mul::calculate() {
    return a * b; // a와 b의 곱셈을 반환
}

// 나눗셈을 구현하기 위한 Div 클래스의 선언부
class Div {
private:
    int a, b;
public:
    void setValue(int x, int y); // a와 b의 값을 설정하는 메서드
    int calculate(); // a와 b의 나눗셈을 수행하는 메서드
};
// a와 b의 값을 설정하는 Div 구현부
void Div::setValue(int x, int y) {
    a = x;
    b = y;
}
// 나눗셈을 계산하는 Div 구현부
int Div::calculate() {
    return a / b; // a와 b의 나눗셈을 반환
}

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