#ifndef RECT_H
#define RECT_H

#include "Shape.h"  // �⺻ ������ Shape Ŭ������ �����մϴ�.

class Rect : public Shape {
public:
    // ������ �׸��� �Լ���, �簢���� �׸��� ���� ������ �մϴ�.
    // Shape Ŭ������ draw()�� ������(Override)�Ͽ� �簢���� ����մϴ�.
    virtual void draw();
};

#endif
