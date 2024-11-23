#include "GraphicEditor.h"

// GraphicEditor Ŭ������ ������ �ʱ� �޽��� ��� �� ���� ���� ����
GraphicEditor::GraphicEditor() {
    cout << "�׷��� �������Դϴ�.\n";
    start();
}

// �׷��� ������ ���� ���� ������� �Է¿� ���� ����, ����, ��� ����, ���� ������ ����
void GraphicEditor::start() {
    while (true) {
        int n;
        n = UI::seleteMenu();  // �޴� ����
        switch (n) {
        case 1: // ����
            n = UI::seleteShape();  // ������ ���� ����
            switch (n) {
            case 1: // �� ����
                v.push_back(new Line());
                break;
            case 2: // �� ����
                v.push_back(new Circle());
                break;
            case 3: // �簢�� ����
                v.push_back(new Rect());
                break;
            default:
                // �߸��� �Է� ó��
                cout << "�߸� �����ϼ̽��ϴ�.\n";
                break;
            }
            break;

        case 2: { // ����
            n = UI::seleteDelIndex();  // ������ �ε��� �Է�
            if (n >= v.size() || n < 0) { // ��ȿ���� ���� �ε��� ó��
                cout << "���� �ε��� �Դϴ�.\n";
                break;
            }
            it = v.begin();            // �ݺ��� �ʱ�ȭ
            Shape* tmp = *(it + n);    // ������ ��ü �ӽ� ����
            v.erase(it + n);          // ���Ϳ��� �ش� ��ü ����
            delete tmp;               // �޸� ����
            break;
        }

        case 3: // ��� ����
            UI::showAll(v, it);        // ����� ��� ���� ���
            break;

        case 4: // ����
            return;                    // ���α׷� ����

        default:
            // �߸��� �޴� �Է� ó��
            cout << "�߸� �Է��ϼ̽��ϴ�.\n";
            break;
        }
    }
}
