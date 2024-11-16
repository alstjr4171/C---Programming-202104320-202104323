#include "Line.h"  // Line 클래스의 정의를 포함하는 헤더 파일을 포함
#include <iostream>
using namespace std;

// Line 클래스에서 상속받은 draw() 메서드 Line 객체가 그려질 때 호출
void Line::draw() {
    cout << "Line" << endl;  // Line을 출력하여 선을 나타냄
}
