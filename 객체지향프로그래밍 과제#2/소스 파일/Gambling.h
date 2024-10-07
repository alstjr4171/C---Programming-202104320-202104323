#include <string>
using namespace std;

// ���ӿ� �����ϴ� �÷��̾ ��Ÿ���� Player Ŭ������ �����
class Player {
    string name; // �÷��̾��� �̸�
public:
    Player(); // Player ��ü�� �����Ǹ� ����Ǵ� ������
    ~Player(); // Player ��ü�� ������� ����Ǵ� �Ҹ���
    void setName(string name); // �÷��̾� �̸��� �����ϱ� ���� �Լ�
    string getName(); // �÷��̾� �̸��� ��ȯ�ϱ� ���� �Լ�
};

// ���� ������ �����ϴ� GamblingGame Ŭ������ ����� 
class GamblingGame {
    Player* p; // �÷��̾ ����Ű�� ������ (���� �޸� �Ҵ�)
    string name; // �÷��̾��� �̸��� ������ ����
public:
    GamblingGame(); // GamblingGame ��ü�� �����Ǹ� ����Ǵ� ������
    ~GamblingGame(); // GamblingGame�� ��ü�� ������� ����Ǵ� �Ҹ���
    void setPlayer(); // �÷��̾� �̸��� �Է¹ޱ� ���� �Լ�
    string rand_num(string n); // 0~2������ ���� ���ڸ� �����ϰ� �¸� ���θ� �Ǵ��ϴ� �Լ�
    void game_start(); // ������ �����ϱ� ���� �Լ�
};
