#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"  // 기본 도형인 Shape 클래스를 포함

class Circle : public Shape {
public:
    // 도형을 그리는 함수로, '원'을 그리기 위한 구현 Shape 클래스의 draw()를 재정의(Override)하여 원을 출력
    virtual void draw();
};

#endif
