#include <iostream>
#include "Gambling.h"

using namespace std;

// Player 객체가 생성 될 때 실행되는 Player의 생성자
Player::Player() {
    name = " "; // name을 공백으로 초기화 함
}

// Player 객체가 소멸 될 때 실행되는 Player의 소멸자
Player::~Player() {}

// 플레이어의 이름을 설정하기 위한 함수
void Player::setName(string name) {
    this->name = name; // 인자로 받은 이름으로 플레이어의 이름 설정
    //(this를 사용한 이유는 매개변수와 멤버 변수의 이름이 같기 때문에 객체 자신을 가리키기 위해 사용)
}

// 플레이어의 이름을 반환하기 위한 함수
string Player::getName() {
    return name; // return을 사용해 플레이어의 이름 반환
}

// GamblingGame 객체가 생성 될 때 실행되는 GamblingGame의 생성자
GamblingGame::GamblingGame() {
    p = new Player[2]; // 두 명의 플레이어를 생성하기 위해 동적으로 배열 할당
    srand((unsigned)time(0)); // 랜덤 번호 생성을 위한 시드 설정
    cout << "**** 갬블링 게임을 시작합니다. ****" << endl; // 게임이 시작되었을때 출력되는 메시지
}

// GamblingGame 객체가 소멸 될 때 실행되는 GamblingGame의 소멸자
GamblingGame::~GamblingGame() {
    delete[] p; // 동적으로 할당된 플레이어 배열 메모리 해제하기 위해 delete[] 포인터변수 사용
    // new 연산자를 사용해 동적으로 할당된 배열이기 때문에 []가 들어가야한다.
}

// 플레이어 이름을 입력받기 위한 함수
void GamblingGame::setPlayer() {
    cout << "첫번째 선수 이름>>";
    cin >> name; // 사용자가 첫 번째 플레이어 이름 입력
    p[0].setName(name); // 사용자가 입력한 첫 번째 플레이어 이름 설정
    cout << "두번째 선수 이름>>";
    cin >> name; // 사용자가 두 번째 플레이어 이름 입력
    p[1].setName(name); // 사용자가 입력한 두 번째 플레이어 이름 설정
}

// 0~2까지의 랜덤 숫자를 생성하고 승리 여부를 판단하는 함수
string GamblingGame::rand_num(string n) {
    int r[3]; // 랜덤 숫자를 저장할 크기가 3인 배열
    cout << "\t\t";
    for (int i = 0; i < 3; i++) {
        r[i] = rand() % 3; // 0, 1, 2 중 랜덤 숫자 생성
        cout << r[i] << '\t'; // 생성된 랜덤 숫자 출력
    }
    // 모든 숫자가 동일한 경우 승리 메시지 반환하기 위한 조건문
    if (r[0] == r[1] && r[0] == r[2]) {
        n += "님 승리!!"; // 승리 메시지 추가
        return n; // return을 사용해 승리 메시지를 반환
    }
    else
        return "아쉽군요!"; // return을 사용해 패배 메시지를 반환
}

// 게임을 시작하기 위한 함수
void GamblingGame::game_start() {
    string n; // 플레이어가 입력한 값을 저장할 문자열 변수 n을 선언합니다.
    int i = 0; // 현재 플레이어의 인덱스를 저장할 정수 변수 i를 선언하고 0으로 초기화합니다. 
    // 초기화 하는 이유는 첫 번째 플레이어부터 시작하기 위해서 입니다.
    while (true) { // 무한 루프를 돌려 게임 승리를 할 때까지 계속 반복하게 됩니다.
        string m; // 현재 플레이어의 이름을 저장할 문자열 변수 m을 선언합니다.
        cout << p[i % 2].getName() << ":\n"; // 2의 나머지 값이 0이면 첫번째 플레이어,
        // 1이면 두번째 플레이어의 이름 출력
        getline(cin, n); // 표준 입력에서 한 줄을 읽어 변수 n에 저장합니다. 
        // 이때 cin을 사용하여 사용자 입력을 받습니다.
        m = p[i % 2].getName(); // 현재 플레이어의 이름을 다시 가져와서 변수 m에 저장합니다.
        // 이는 나중에 승리 메시지를 출력할 때 사용됩니다.
        n = rand_num(n); // rand_num 함수를 호출하여 0~2의 랜덤 숫자를 생성하고 승리 여부를 판단합니다.
        // 결과는 변수 n에 저장됩니다.
        // 승리한 경우 메시지 출력 후 게임 종료
        if (n == "님 승리!!") { // 만약 n의 값이 승리한 경우
            cout << m + n; // 승리한 플레이어의 이름과 승리 메시지를 출력합니다.
            break; // break를 사용하여 무한 루프를 벗어나게 합니다.
        }
        else // n의 값이 승리하지 않은 경우.
            cout << n << endl; // 패배 메시지 출력
        i++; // 다음 플레이어로 변경
    }
}
