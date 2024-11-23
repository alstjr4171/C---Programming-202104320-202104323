#ifndef UI_H
#define UI_H

#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;

// UI 클래스 사용자와 프로그램 간의 상호작용을 담당
class UI {
public:
    // 메뉴 선택 삽입, 삭제, 모두 보기, 종료 중 하나 선택 사용자 입력을 받아 해당 메뉴의 번호를 반환
    static int seleteMenu();

    // 삽입할 도형 종류를 선택 선, 원, 사각형 중 하나 선택 사용자 입력을 받아 도형 종류의 번호를 반환
    static int seleteShape();

    // 삭제할 도형의 인덱스 선택 사용자 입력을 받아 삭제할 인덱스를 반환
    static int seleteDelIndex();

    // 저장된 모든 도형을 출력 벡터와 반복자를 매개변수로 받아 순차적으로 각 도형을 출력
    static void showAll(vector<Shape*>& v, vector<Shape*>::iterator& it);
};

#endif
