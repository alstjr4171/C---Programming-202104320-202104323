#include "Circle.h"  // Circle 클래스의 정의를 포함하는 헤더 파일을 포함
#include <iostream>
using namespace std;

// Circle 클래스에서 상속받은 draw() 메서드ㅠCircle 객체가 그려질 때 호출됩니다.
void Circle::draw() {
    cout << "Circle" << endl;  // Circle을 출력하여 원을 나타냄
}
