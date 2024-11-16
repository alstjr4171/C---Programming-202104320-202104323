#ifndef SHAPE_H
#define SHAPE_H

// Shape 클래스는 도형을 나타내는 추상 클래스입니다. 이 클래스는 기본적인 도형의 속성 및 동작을 정의하고 있으며,
// 이를 상속받은 클래스에서 구체적인 도형의 형태를 구현하도록 합니다.
class Shape {
    Shape* next;  // 다음 노드를 가리키는 포인터 (리스트에서 사용)

protected:
    // 도형을 그리는 함수로, 각 도형 클래스에서 재정의해야 합니다.
    virtual void draw();

public:
    // 생성자: next 포인터를 nullptr로 초기화
    Shape();

    // 소멸자: 파생 클래스에서 적절히 자원을 해제할 수 있도록 가상 함수로 선언
    virtual ~Shape();

    // add 함수: 새로운 도형을 리스트에 추가하고, 현재 도형을 반환
    Shape* add(Shape* p);

    // getNext 함수: 현재 도형의 다음 도형을 반환
    Shape* getNext();

    // paint 함수: 도형을 그리기 위해 draw 메서드를 호출
    void paint();

    // setNext 함수: 현재 도형의 next 포인터를 변경
    void setNext(Shape* p);
};

#endif
