#include <iostream>
#include <string>
using namespace std;

// PrintMachine 클래스 선언
class PrintMachine {
    string model, manuf; // 모델명과 제조사를 저장하는 String 문자열 변수 선언
    int pcount, avlcount; // 인쇄 매수와 남은 용지 수를 저장하는 int 정수형 변수 선언
protected: // 외부 클래스에서는 접근 불가하고 상속받은 파생 클래스에서만 접근가능하게 함
    PrintMachine(string model, string manuf, int avlcount); // PrintMachine 생성자
    bool print(int pages); // 지정 매수만큼 인쇄 가능 여부 확인 함수
    string get_model();    // 모델명 반환 함수
    string get_manuf();    // 제조사명 반환 함수
    int get_avlcount();    // 남은 용지 수 반환
};

// PrintMachine 클래스를 상속받는 PrintInkJet 파생 클래스 선언
class PrintInkJet : public PrintMachine { // public 상속 접근 지정
    int avlink; // 남은 잉크 수량을 저장하는 int 정수형 변수 선언
public:
    PrintInkJet(string model, string manuf, int avlcount, int avlink); // PrintInkJet 생성자
    bool printInkJet(int pages); // 잉크젯 프린터용 인쇄 함수
    void show();                 // 잉크젯 프린터 상태 표시 함수
};

// PrintMachine 클래스를 상속받는 PrintLaser 파생 클래스 선언
class PrintLaser : public PrintMachine {
    int avltoner; // 남은 토너 수량을 저장하는 int 정수형 변수 선언
public:
    PrintLaser(string model, string manuf, int avlcount, int avltoner); // 생성자
    bool printLaser(int pages); // 레이저 프린터용 인쇄 함수
    void show();                // 레이저 프린터 상태 표시 함수
};
