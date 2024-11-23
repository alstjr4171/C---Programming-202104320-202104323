#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

// Shape Ŭ���� ��� ������ �⺻ Ŭ���� ���� (�߻� Ŭ����)
class Shape {
protected:
    // �ڽ� Ŭ������ �ݵ�� draw()�� �����ؾ� �ϴ� ���� ���� �Լ� �� �Լ��� �� ������ �׸��� ������ ����
    virtual void draw() = 0;
public:
    // paint �Լ� draw() ȣ���� ���� ������ �׸�
    void paint();
};

// Circle Ŭ���� Shape�� ��ӹ޾� ���� �׸��� ����� ����
class Circle : public Shape {
protected:
    // ���� �׸��� �Լ� (�������̵�)
    virtual void draw();
};

// Rect Ŭ���� Shape�� ��ӹ޾� �簢���� �׸��� ����� ����
class Rect : public Shape {
protected:
    // �簢���� �׸��� �Լ� (�������̵�)
    virtual void draw();
};

// Line Ŭ���� Shape�� ��ӹ޾� ���� �׸��� ����� ����
class Line : public Shape {
protected:
    // ���� �׸��� �Լ� (�������̵�)
    virtual void draw();
};

#endif
