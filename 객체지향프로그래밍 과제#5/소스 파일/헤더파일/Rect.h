#ifndef RECT_H
#define RECT_H

#include "Shape.h"  // 기본 도형인 Shape 클래스를 포함합니다.

class Rect : public Shape {
public:
    // 도형을 그리는 함수로, 사각형을 그리기 위한 구현을 합니다.
    // Shape 클래스의 draw()를 재정의(Override)하여 사각형을 출력합니다.
    virtual void draw();
};

#endif
