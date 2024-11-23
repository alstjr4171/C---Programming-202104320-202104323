#include "Shape.h"

// Shape Ŭ������ paint �Լ� draw()�� ȣ���Ͽ� ������ �׸� Shape Ŭ������ ���� �������̽��� ����
void Shape::paint() {
    draw();
}

// Circle Ŭ������ draw �Լ� ���� ���
void Circle::draw() {
    cout << "Circle" << endl;
}

// Rect Ŭ������ draw �Լ� �簢���� ���
void Rect::draw() {
    cout << "Rectangle" << endl;
}

// Line Ŭ������ draw �Լ� ���� ���
void Line::draw() {
    cout << "Line" << endl;
}
