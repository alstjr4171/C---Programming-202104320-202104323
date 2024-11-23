#include "GraphicEditor.h"

// GraphicEditor 클래스의 생성자 초기 메시지 출력 및 메인 루프 실행
GraphicEditor::GraphicEditor() {
    cout << "그래픽 에디터입니다.\n";
    start();
}

// 그래픽 편집기 메인 루프 사용자의 입력에 따라 삽입, 삭제, 모두 보기, 종료 동작을 수행
void GraphicEditor::start() {
    while (true) {
        int n;
        n = UI::seleteMenu();  // 메뉴 선택
        switch (n) {
        case 1: // 삽입
            n = UI::seleteShape();  // 삽입할 도형 선택
            switch (n) {
            case 1: // 선 삽입
                v.push_back(new Line());
                break;
            case 2: // 원 삽입
                v.push_back(new Circle());
                break;
            case 3: // 사각형 삽입
                v.push_back(new Rect());
                break;
            default:
                // 잘못된 입력 처리
                cout << "잘못 선택하셨습니다.\n";
                break;
            }
            break;

        case 2: { // 삭제
            n = UI::seleteDelIndex();  // 삭제할 인덱스 입력
            if (n >= v.size() || n < 0) { // 유효하지 않은 인덱스 처리
                cout << "없는 인덱스 입니다.\n";
                break;
            }
            it = v.begin();            // 반복자 초기화
            Shape* tmp = *(it + n);    // 삭제할 객체 임시 저장
            v.erase(it + n);          // 벡터에서 해당 객체 제거
            delete tmp;               // 메모리 해제
            break;
        }

        case 3: // 모두 보기
            UI::showAll(v, it);        // 저장된 모든 도형 출력
            break;

        case 4: // 종료
            return;                    // 프로그램 종료

        default:
            // 잘못된 메뉴 입력 처리
            cout << "잘못 입력하셨습니다.\n";
            break;
        }
    }
}
