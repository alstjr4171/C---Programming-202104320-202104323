#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"  // �⺻ ������ Shape Ŭ������ ����

class Circle : public Shape {
public:
    // ������ �׸��� �Լ���, '��'�� �׸��� ���� ���� Shape Ŭ������ draw()�� ������(Override)�Ͽ� ���� ���
    virtual void draw();
};

#endif
