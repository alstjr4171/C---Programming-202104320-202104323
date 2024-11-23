#ifndef GRAPHIC_EDITOR_H
#define GRAPHIC_EDITOR_H

#include <vector>
#include "Shape.h"
#include "UI.h"

// GraphicEditor 클래스 그래픽 편집기의 전체 동작을 관리
class GraphicEditor {
    vector<Shape*> v;                  // 도형 객체를 저장하는 벡터
    vector<Shape*>::iterator it;      // 벡터를 탐색하기 위한 반복자
public:
    // 생성자 프로그램 초기화 및 시작
    GraphicEditor();
    // 그래픽 편집기 메인 루프를 실행
    void start();
};

#endif