#ifndef LINE_H
#define LINE_H

#include "Shape.h"  // �⺻ ������ Shape Ŭ������ �����մϴ�.

class Line : public Shape {
public:
    // ������ �׸��� �Լ���, '��'�� �׸��� ���� ������ �մϴ�.
    // Shape Ŭ������ draw()�� ������(Override)�Ͽ� ���� ����մϴ�.
    virtual void draw();
};

#endif
