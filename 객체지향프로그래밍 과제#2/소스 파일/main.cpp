#include "Gambling.h" // Gambling.h 헤더 파일을 불러옴

int main() {
    GamblingGame game; // GamblingGame에 game 객체를 생성
    game.setPlayer(); // 플레이어의 이름을 입력하기 위한 setPlayer 함수 호출
    game.game_start(); // 게임 시작하기 위한 game_start 함수 호출
}
