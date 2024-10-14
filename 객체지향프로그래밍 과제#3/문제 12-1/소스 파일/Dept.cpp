#include <iostream>
#include "Dept.h"
using namespace std;

// 클래스 구현부
Dept::Dept(Dept& dept) { // 참조 매개변수를 가진 깊은 복사 생성자
    this->size = dept.size; // 기존 객체의 size 값을 복사하여 저장
    this->scores = new int[this->size]; // 새로운 배열을 동적으로 할당
    // 기존 객체의 size만큼 반복하여 기존에 있던 배열을 복사
    for (int i = 0; i < this->size; i++) { 
        this->scores[i] = dept.scores[i]; 
    }
}

Dept::~Dept() {
    delete[] scores; // 동적 할당된 scores 배열 메모리 해제
}

// size 값을 반환하는 함수
int Dept::getSize() {
    return size; // 저장된 점수의 개수를 반환
}

// 키보드에서 점수를 입력받아 scores 배열에 저장하는 함수
void Dept::read() {
    cout << size << "개 점수 입력>> "; // 사용자에게 점수 입력 안내
    for (int i = 0; i < size; ++i) { // size만큼 반복하여 점수 입력
        std::cin >> scores[i]; // 사용자로부터 점수 입력받아 배열에 저장
    }
}

// 주어진 인덱스의 점수가 60점 이상인지 확인하는 함수
bool Dept::isOver60(int index) {
    return scores[index] > 60; // 60점 초과면 true, 그렇지 않으면 false 반환
}