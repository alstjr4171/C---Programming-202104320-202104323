#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

// Shape 클래스 모든 도형의 기본 클래스 역할 (추상 클래스)
class Shape {
protected:
    // 자식 클래스가 반드시 draw()를 구현해야 하는 순수 가상 함수 이 함수는 각 도형의 그리기 동작을 정의
    virtual void draw() = 0;
public:
    // paint 함수 draw() 호출을 통해 도형을 그림
    void paint();
};

// Circle 클래스 Shape를 상속받아 원을 그리는 기능을 구현
class Circle : public Shape {
protected:
    // 원을 그리는 함수 (오버라이딩)
    virtual void draw();
};

// Rect 클래스 Shape를 상속받아 사각형을 그리는 기능을 구현
class Rect : public Shape {
protected:
    // 사각형을 그리는 함수 (오버라이딩)
    virtual void draw();
};

// Line 클래스 Shape를 상속받아 선을 그리는 기능을 구현
class Line : public Shape {
protected:
    // 선을 그리는 함수 (오버라이딩)
    virtual void draw();
};

#endif
