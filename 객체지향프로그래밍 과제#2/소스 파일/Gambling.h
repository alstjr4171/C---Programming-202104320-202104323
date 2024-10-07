#include <string>
using namespace std;

// 게임에 참여하는 플레이어를 나타내는 Player 클래스의 선언부
class Player {
    string name; // 플레이어의 이름
public:
    Player(); // Player 객체가 생성되면 실행되는 생성자
    ~Player(); // Player 객체가 사라질때 실행되는 소멸자
    void setName(string name); // 플레이어 이름을 설정하기 위한 함수
    string getName(); // 플레이어 이름을 반환하기 위한 함수
};

// 갬블링 게임을 관리하는 GamblingGame 클래스의 선언부 
class GamblingGame {
    Player* p; // 플레이어를 가리키는 포인터 (동적 메모리 할당)
    string name; // 플레이어의 이름을 저장할 변수
public:
    GamblingGame(); // GamblingGame 객체가 생성되면 실행되는 생성자
    ~GamblingGame(); // GamblingGame의 객체가 사라질때 실행되는 소멸자
    void setPlayer(); // 플레이어 이름을 입력받기 위한 함수
    string rand_num(string n); // 0~2까지의 랜덤 숫자를 생성하고 승리 여부를 판단하는 함수
    void game_start(); // 게임을 시작하기 위한 함수
};
