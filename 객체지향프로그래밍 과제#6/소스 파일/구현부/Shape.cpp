#include "Shape.h"

// Shape 클래스의 paint 함수 draw()를 호출하여 도형을 그림 Shape 클래스의 공통 인터페이스를 제공
void Shape::paint() {
    draw();
}

// Circle 클래스의 draw 함수 원을 출력
void Circle::draw() {
    cout << "Circle" << endl;
}

// Rect 클래스의 draw 함수 사각형을 출력
void Rect::draw() {
    cout << "Rectangle" << endl;
}

// Line 클래스의 draw 함수 선을 출력
void Line::draw() {
    cout << "Line" << endl;
}
