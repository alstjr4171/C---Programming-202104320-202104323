#include "Shape.h"
#include <iostream>
using namespace std;

// next �����͸� NULL�� �ʱ�ȭ�մϴ�.
Shape::Shape() {
    next = NULL;  // ���� ����Ʈ���� ���� ��带 ����Ű�� �����͸� NULL�� �ʱ�ȭ
}

// ��ü�� ������ �� �ڵ����� ȣ��Ǹ�, �޸� ������ ���
Shape::~Shape() {}

// ���ο� ������ ����Ʈ�� �߰��ϴ� �Լ� �� ������ ����Ʈ�� �����ϰ�, �� ������ ��ȯ�մϴ�.
Shape* Shape::add(Shape* p) {
    this->next = p;  // ���� ������ next �����͸� �� ������ ����
    return p;  // �� ������ ��ȯ
}

// ���� ������ next �����͸� ��ȯ �̴� ���� ����Ʈ���� ���� ������ ����Ű�� ������
Shape* Shape::getNext() {
    return next;  // next �����͸� ��ȯ
}

// ������ �׸��� �Լ�
void Shape::paint() {
    draw();  // draw() �Լ��� ȣ���Ͽ� ������ �׸�
}

// next �����͸� �����ϴ� �Լ� ���� ������ next �����͸� ���ο� ������ next�� �����Ͽ� ���� ����Ʈ���� ������ ������ �� ���
void Shape::setNext(Shape* p) {
    this->next = p->next;  // ���� ������ next�� �� ������ next�� ����
}

// �⺻���� draw �Լ� �� �Լ��� �������̵��Ͽ� ��ü���� �׸��� ������ ����
void Shape::draw() {
    cout << "--Shape--" << endl;  // --Shape-- ���
}
