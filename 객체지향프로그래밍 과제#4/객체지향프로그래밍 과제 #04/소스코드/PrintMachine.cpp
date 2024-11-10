#include "PrintMachine.h" // PrintMachine ��� ����

// PrintMachine Ŭ���� ������ �𵨸�, ������, �ʱ� ���� ������ ����
PrintMachine::PrintMachine(string model, string manuf, int avlcount) {
    this->model = model;       // �𵨸� ����
    this->manuf = manuf;       // ������ ����
    this->avlcount = avlcount; // �ʱ� ���� ���� ����
}

// PrintMachine Ŭ������ print �Լ�
bool PrintMachine::print(int pages) {
    // ��û�� ������ ����ŭ ������ �ִ��� Ȯ��
    if (avlcount < pages) { // ������ ������ ���
        cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�.\n"; // ���� �޽��� ���
        return false; // �μ� ����
    }
    avlcount -= pages; // ����� ������ ������, ���� ���� �� ����
    return true;       // �μ� ����
}

// �𵨸� ��ȯ �޼ҵ�
string PrintMachine::get_model() { return model; }

// ������� ��ȯ �޼ҵ�
string PrintMachine::get_manuf() { return manuf; }

// ���� ���� �� ��ȯ �޼ҵ�
int PrintMachine::get_avlcount() { return avlcount; }

// PrintInkJet Ŭ���� ������ �𵨸�, ������, �ʱ� ���� ����, �ʱ� ��ũ ������ ����
PrintInkJet::PrintInkJet(string model, string manuf, int avlcount, int avlink)
    : PrintMachine(model, manuf, avlcount) { // �⺻ ������ Ŭ���� �ʱ�ȭ
    this->avlink = avlink; // �ʱ� ��ũ ���� ����
}

// PirntInkJet Ŭ������ printInkJet �Լ�
bool PrintInkJet::printInkJet(int pages) {
    // ������ ������� Ȯ��
    if (!print(pages)) return false; // ������ �����ϸ� false ��ȯ
    // ��ũ ���� Ȯ��
    if (avlink < pages) { // ��ũ�� ������ ���
        cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n"; // ���� �޽��� ���
        return false; // �μ� ����
    }
    avlink -= pages; // ����� ��ũ�� ������, ���� ��ũ �� ����
    return true;     // �μ� ����
}

// PrintInkJet Ŭ������ ���¸� ����ϴ� �Լ�
void PrintInkJet::show() {
    // �𵨸�, ������, ���� ������ ��ũ ���� ���
    cout << get_model() << "\t," << get_manuf() << "\t,���� ���� "
        << get_avlcount() << "��\t,���� ��ũ " << avlink << endl;
}

// PrintLaser Ŭ���� ������ �𵨸�, ������, �ʱ� ���� ����, �ʱ� ��� ������ ����
PrintLaser::PrintLaser(string model, string manuf, int avlcount, int avltoner)
    : PrintMachine(model, manuf, avlcount) { // �⺻ ������ Ŭ���� �ʱ�ȭ
    this->avltoner = avltoner; // �ʱ� ��� ���� ����
}

// PrintLaser Ŭ������ printLaser �Լ�
bool PrintLaser::printLaser(int pages) {
    // ������ ������� Ȯ��
    if (!print(pages)) return false; // ������ �����ϸ� false ��ȯ
    // ��� ���� Ȯ��
    if (avltoner < pages) { // ��ʰ� ������ ���
        cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n"; // ���� �޽��� ���
        return false; // �μ� ����
    }
    avltoner -= pages; // ����� ��ʰ� ������, ���� ��� �� ����
    return true;       // �μ� ����
}

// PrintLaser Ŭ������ ���¸� ����ϴ� �޼ҵ�
void PrintLaser::show() {
    // �𵨸�, ������, ���� ������ ��� ���� ���
    cout << get_model() << " ," << get_manuf() << "\t,���� ���� "
        << get_avlcount() << "��\t,���� ��� " << avltoner << endl;
}
