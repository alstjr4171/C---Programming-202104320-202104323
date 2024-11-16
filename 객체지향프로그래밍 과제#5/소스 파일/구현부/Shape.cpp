#include "Shape.h"
#include <iostream>
using namespace std;

// next 포인터를 NULL로 초기화합니다.
Shape::Shape() {
    next = NULL;  // 연결 리스트에서 다음 노드를 가리키는 포인터를 NULL로 초기화
}

// 객체가 삭제될 때 자동으로 호출되며, 메모리 해제를 담당
Shape::~Shape() {}

// 새로운 도형을 리스트에 추가하는 함수 새 도형을 리스트에 연결하고, 새 도형을 반환합니다.
Shape* Shape::add(Shape* p) {
    this->next = p;  // 현재 도형의 next 포인터를 새 도형에 연결
    return p;  // 새 도형을 반환
}

// 현재 도형의 next 포인터를 반환 이는 연결 리스트에서 다음 도형을 가리키는 포인터
Shape* Shape::getNext() {
    return next;  // next 포인터를 반환
}

// 도형을 그리는 함수
void Shape::paint() {
    draw();  // draw() 함수를 호출하여 도형을 그림
}

// next 포인터를 설정하는 함수 현재 도형의 next 포인터를 새로운 도형의 next로 설정하여 연결 리스트에서 도형을 삭제할 때 사용
void Shape::setNext(Shape* p) {
    this->next = p->next;  // 현재 도형의 next를 새 도형의 next로 설정
}

// 기본적인 draw 함수 이 함수를 오버라이드하여 구체적인 그리기 동작을 구현
void Shape::draw() {
    cout << "--Shape--" << endl;  // --Shape-- 출력
}
