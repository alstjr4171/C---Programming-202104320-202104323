#include "UI.h"

// ����ڿ��� �޴��� �����ϵ��� ��û 1: ����, 2: ����, 3: ��� ����, 4: ����
int UI::seleteMenu() {
    int n;
    cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
    cin >> n; // ����ڿ��� �Է¹���
    return n;
}

// ����ڿ��� ������ ������ ������ �����ϵ��� ��û 1: ��, 2: ��, 3: �簢��
int UI::seleteShape() {
    int n;
    cout << "��:1, ��:2, �簢��:3 >> ";
    cin >> n; // ����ڿ��� �Է¹���
    return n;
}

// ����ڿ��� ������ ������ �ε����� �����ϵ��� ��û
int UI::seleteDelIndex() {
    int n;
    cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
    cin >> n; // ����ڿ��� �Է¹���
    return n;
}

// ����� ��� ������ ��� ������ ��� ���Ҹ� ��ȸ�ϸ� �� ������ paint() �Լ� ȣ��
void UI::showAll(vector<Shape*>& v, vector<Shape*>::iterator& it) {
    int i = 0;
    for (it = v.begin(); it != v.end(); it++, i++) { // ������ ��� ���� Ž��
        cout << i << ": ";  // �ε��� ���
        v.at(i)->paint();   // �ش� ���� ���
    }
}
