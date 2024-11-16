#include "GraphicEditor.h"  // GraphicEditor 클래스의 헤더 파일을 포함

int main() {
    // GraphicEditor 객체를 동적으로 생성
    GraphicEditor* g_editor = new GraphicEditor;

    // g_editor 객체의 run() 메서드를 호출하여 프로그램의 주요 기능을 실행
    // 사용자가 메뉴를 선택하고 도형을 삽입/삭제/보기 등의 작업을 할 수 있음
    g_editor->run();

    // 프로그램이 종료되면 동적으로 할당된 GraphicEditor 객체를 삭제
    delete g_editor;

}
