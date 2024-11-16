#include "GraphicEditor.h"
#include <iostream>
#include <cstdlib> 

// 그래픽 에디터 객체를 초기화
GraphicEditor::GraphicEditor() {
    pStart = nullptr;  // 시작 노드를 nullptr로 초기화
    pLast = nullptr;   // 마지막 노드를 nullptr로 초기화
    node_size = 0;     // 도형의 개수를 0으로 초기화
}

// 메뉴를 출력하고 사용자 입력에 따라 작업을 수행
int GraphicEditor::run() {
    std::cout << "그래픽 에디터입니다.\n";
    while (true) {
        int num;
        num = UI::show_menu();  // 메뉴를 출력하고 사용자 선택을 받음
        switch (num) {
        case 1:
            num = UI::input_shape();  // 삽입할 도형 선택
            input_new(num);           // 선택된 도형을 리스트에 추가
            break;
        case 2:
            if (pStart == nullptr) {  // 도형 리스트가 비어있으면 삭제할 수 없음
                std::cout << "List Empty\n";
                break;
            }
            num = UI::del_index();   // 삭제할 도형의 인덱스를 입력받음
            del(num);                 // 해당 도형을 삭제
            break;
        case 3:
            show();  // 현재 리스트에 저장된 도형들을 출력
            break;
        case 4:
            std::exit(0);  // 프로그램 종료
        default:
            std::cout << "메뉴를 잘못 선택하셨습니다.\n";
        }
    }
}

// 새로운 도형을 리스트에 삽입
void GraphicEditor::input_new(int n) {
    Shape* newShape = nullptr;
    switch (n) {
    case 1: newShape = new Line(); break;  // 선 도형 생성
    case 2: newShape = new Circle(); break;  // 원 도형 생성
    case 3: newShape = new Rect(); break;  // 사각형 도형 생성
    default:
        std::cout << "메뉴를 잘못 선택하셨습니다.\n";
        return;
    }

    // 리스트가 비어있을 때, 새로운 도형을 첫 번째 노드로 추가
    if (node_size == 0) {
        pStart = newShape;
        pLast = pStart;
    }
    else {
        // 리스트의 마지막에 새 도형을 추가
        pLast = pLast->add(newShape);
    }
    node_size++;  // 도형 수 증가
}

// 주어진 인덱스에 해당하는 도형을 삭제
bool GraphicEditor::del(int n) {
    if (pStart == nullptr) {  // 도형 리스트가 비어있으면 삭제할 수 없음
        std::cout << "List Empty\n";
        return false;
    }

    int k = 0;
    Shape* target_node = pStart;
    Shape* priv_node = nullptr;  // 이전 노드 포인터

    // 삭제할 도형이 첫 번째 도형인 경우
    if (n == 0) {
        pStart = pStart->getNext();  // 첫 번째 노드를 두 번째 노드로 변경
        delete target_node;  // 첫 번째 노드 삭제
    }
    else {
        // 삭제할 도형을 찾기 위해 리스트를 순차적으로 탐색
        while (target_node != nullptr && k < n) {
            priv_node = target_node;  // 이전 노드를 갱신
            target_node = target_node->getNext();  // 현재 노드를 갱신
            k++;
        }

        // 유효하지 않은 인덱스를 입력한 경우
        if (target_node == nullptr) {
            std::cout << "없는 노드입니다.\n";
            return false;
        }
        else {
            // 이전 노드의 next를 삭제할 노드의 next로 변경
            priv_node->setNext(target_node);
            // 삭제한 노드가 마지막 노드였다면 pLast를 갱신
            if (target_node == pLast) {
                pLast = priv_node;
            }
            delete target_node;  // 노드 삭제
        }
    }

    node_size--;  // 도형 수 감소
    return true;
}

// 리스트에 저장된 도형들을 출력
void GraphicEditor::show() {
    Shape* p = pStart;
    int i = 0;
    if (p == nullptr) {  // 리스트가 비어있는 경우
        std::cout << "List Empty\n";
    }
    else {
        // 리스트의 모든 도형을 순차적으로 출력
        while (p != nullptr) {
            std::cout << i << ": ";
            p->paint();  // 각 도형의 paint 메서드를 호출하여 출력
            p = p->getNext();  // 다음 도형으로 이동
            i++;
        }
    }
}
