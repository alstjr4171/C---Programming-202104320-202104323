#include "PrintMachine.h" // PrintMachine 클래스와 관련된 헤더 파일 포함

int main() {
    int pnum, pages; // 사용자가 선택한 프린터 번호와 인쇄할 페이지 수
    char yon; // 계속 인쇄 여부를 확인하는 변수
    // PrintInkJet 및 PrintLaser 객체를 동적 할당으로 생성
    PrintInkJet* inkjet = new PrintInkJet("Officejet V40", "Hp", 5, 10); // 모델명, 제조사명, 남은 종이, 남은 잉크를 매개변수로 받아옴
    PrintLaser* laser = new PrintLaser("SCX-6x45", "삼성전자", 3, 20); // 모델명, 제조사명, 남은 종이, 남은 잉크를 매개변수로 받아옴

    // 현재 작동 중인 프린터 정보 출력
    cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
    cout << "잉크젯 : ";
    inkjet->show(); // inkjet 객체의 상태를 출력하는 메소드
    cout << "레이저 : ";
    laser->show(); // laser 객체의 상태를 출력하는 메소드
    cout << endl;

    // 인쇄 작업 무한 루프 시작
    while (true) {
        // 사용자로부터 프린터 종류(1 또는 2)와 인쇄할 페이지 수 입력
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> pnum >> pages;

        // 선택한 프린터에 따라 인쇄 작업 수행
        if (pnum == 1) { // 1번 잉크젯 프린터 선택 시
            if (inkjet->printInkJet(pages)) // 인쇄 가능 여부 확인하는 printInkJet 함수 호출
                cout << "프린트 하였습니다.\n"; // 인쇄 완료 메시지
        }
        else if (pnum == 2) { // 2번 레이저 프린터 선택 시
            if (laser->printLaser(pages)) // 인쇄 가능 여부 확인하는 printLaser 함수 호출
                cout << "프린트 하였습니다.\n"; // 인쇄 완료 메시지
        }
        else { // 잘못된 프린터 선택 시
            cout << "프린터를 잘못 선택하셨습니다.\n"; // 오류 메시지 출력
        }

        // 프린터 상태 출력
        inkjet->show();
        laser->show();

        // 추가 인쇄 여부 확인 루프
        while (true) {
            cout << "계속 프린트 하시겠습니까(y/n)>>"; // 계속 여부 입력
            cin >> yon;
            cout << endl;
            if (yon == 'n') { // 'n' 입력 시
                delete inkjet; // 잉크젯 프린터 동적 객체 해제
                delete laser;  // 레이저 프린터 동적 객체 해제
                return 0;      // 프로그램 종료
            }
            else if (yon == 'y') { // 'y' 입력 시
                break; // 외부 인쇄 루프로 돌아가서 다음 인쇄 수행
            }
            else { // 잘못된 입력 처리
                cout << "잘못 입력하셨습니다.\n"; // 오류 메시지 출력
            }
        }
    }
}
