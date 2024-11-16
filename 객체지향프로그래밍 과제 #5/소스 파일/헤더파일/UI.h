#ifndef UI_H
#define UI_H

#include <iostream>

// UI 클래스는 사용자 인터페이스를 처리하는 클래스
class UI {
public:
    // 메뉴를 화면에 출력하고 사용자의 선택을 받아옴
    static int show_menu();

    // 사용자가 도형 종류를 선택할 수 있도록 프롬프트를 출력
    static int input_shape();

    // 사용자가 삭제하고자 하는 도형의 인덱스를 입력
    static int del_index();
};

#endif
