#include "Rect.h"  // Rect 헤더 파일을 포함하여 Rect 클래스의 정의를 사용
#include <iostream>
using namespace std;

// Rect 클래스에서 상속받은 draw() 메서드 Rect 객체가 그려질 때 호출
void Rect::draw() {
    cout << "Rectangle" << endl;  // Rectangle을 출력하여 사각형을 나타냄
}
