#include<iostream>
using namespace std; // std::를 생략하기 위해 표준 네임스페이스 사용

#include "Calculator.h" // 클래스 구현을 하기 위해 클래스 선언부의 헤더파일을 불러옴

// a와 b의 값을 설정하는 Add 구현부
void Add::setValue(int x, int y) {
    a = x; // 매개변수 x를 멤버 변수 a에 할당
    b = y; // 매개변수 y를 멤버 변수 b에 할당
}
// 덧셈을 계산하는 Add 구현부
int Add::calculate() {
    return a + b; // a와 b의 덧셈을 반환
}

// a와 b의 값을 설정하는 sub 구현부
void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}
// 뺄셈을 계산하는 Sub 구현부
int Sub::calculate() {
    return a - b; // a와 b의 뺄셈을 반환
}

// a와 b의 값을 설정하는 Mul 구현부
void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}
// 곱셈을 계산하는 Mul 구현부
int Mul::calculate() {
    return a * b; // a와 b의 곱셈을 반환
}

// a와 b의 값을 설정하는 Div 구현부
void Div::setValue(int x, int y) {
    a = x;
    b = y;
}
// 나눗셈을 계산하는 Div 구현부
int Div::calculate() {
    return a / b; // a와 b의 나눗셈을 반환
}
