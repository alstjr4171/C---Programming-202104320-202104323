#include "UI.h"

// 사용자에게 메뉴를 선택하도록 요청 1: 삽입, 2: 삭제, 3: 모두 보기, 4: 종료
int UI::seleteMenu() {
    int n;
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    cin >> n; // 사용자에게 입력받음
    return n;
}

// 사용자에게 삽입할 도형의 종류를 선택하도록 요청 1: 선, 2: 원, 3: 사각형
int UI::seleteShape() {
    int n;
    cout << "선:1, 원:2, 사각형:3 >> ";
    cin >> n; // 사용자에게 입력받음
    return n;
}

// 사용자에게 삭제할 도형의 인덱스를 선택하도록 요청
int UI::seleteDelIndex() {
    int n;
    cout << "삭제하고자 하는 도형의 인덱스 >> ";
    cin >> n; // 사용자에게 입력받음
    return n;
}

// 저장된 모든 도형을 출력 벡터의 모든 원소를 순회하며 각 도형의 paint() 함수 호출
void UI::showAll(vector<Shape*>& v, vector<Shape*>::iterator& it) {
    int i = 0;
    for (it = v.begin(); it != v.end(); it++, i++) { // 벡터의 모든 원소 탐색
        cout << i << ": ";  // 인덱스 출력
        v.at(i)->paint();   // 해당 도형 출력
    }
}
