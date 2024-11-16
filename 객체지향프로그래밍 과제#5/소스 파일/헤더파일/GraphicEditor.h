#ifndef GRAPHIC_EDITOR_H
#define GRAPHIC_EDITOR_H

#include "UI.h"      // UI 클래스를 포함하여 사용자 인터페이스를 처리
#include "Line.h"    // Line 클래스를 포함하여 선 도형을 사용
#include "Circle.h"  // Circle 클래스를 포함하여 원 도형을 사용
#include "Rect.h"    // Rect 클래스를 포함하여 사각형 도형을 사용

class GraphicEditor {
    int node_size;     // 도형의 개수를 추적하는 변수
    Shape* pStart;     // 도형 리스트의 시작을 가리키는 포인터
    Shape* pLast;      // 도형 리스트의 마지막을 가리키는 포인터
public:
    // 그래픽 에디터 객체를 초기화
    GraphicEditor();

    // 메뉴 선택에 따라 도형 삽입, 삭제, 전체 보기, 종료 등의 작업을 처리
    int run();

    // 사용자가 선택한 도형을 리스트에 추가
    void input_new(int n);

    // 지정된 인덱스(n)의 도형을 삭제
    bool del(int n);

    // 현재 도형 리스트의 모든 도형을 출력
    void show();
};

#endif
