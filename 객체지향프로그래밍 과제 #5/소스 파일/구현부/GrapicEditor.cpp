#include "GraphicEditor.h"
#include <iostream>
#include <cstdlib> 

// �׷��� ������ ��ü�� �ʱ�ȭ
GraphicEditor::GraphicEditor() {
    pStart = nullptr;  // ���� ��带 nullptr�� �ʱ�ȭ
    pLast = nullptr;   // ������ ��带 nullptr�� �ʱ�ȭ
    node_size = 0;     // ������ ������ 0���� �ʱ�ȭ
}

// �޴��� ����ϰ� ����� �Է¿� ���� �۾��� ����
int GraphicEditor::run() {
    std::cout << "�׷��� �������Դϴ�.\n";
    while (true) {
        int num;
        num = UI::show_menu();  // �޴��� ����ϰ� ����� ������ ����
        switch (num) {
        case 1:
            num = UI::input_shape();  // ������ ���� ����
            input_new(num);           // ���õ� ������ ����Ʈ�� �߰�
            break;
        case 2:
            if (pStart == nullptr) {  // ���� ����Ʈ�� ��������� ������ �� ����
                std::cout << "List Empty\n";
                break;
            }
            num = UI::del_index();   // ������ ������ �ε����� �Է¹���
            del(num);                 // �ش� ������ ����
            break;
        case 3:
            show();  // ���� ����Ʈ�� ����� �������� ���
            break;
        case 4:
            std::exit(0);  // ���α׷� ����
        default:
            std::cout << "�޴��� �߸� �����ϼ̽��ϴ�.\n";
        }
    }
}

// ���ο� ������ ����Ʈ�� ����
void GraphicEditor::input_new(int n) {
    Shape* newShape = nullptr;
    switch (n) {
    case 1: newShape = new Line(); break;  // �� ���� ����
    case 2: newShape = new Circle(); break;  // �� ���� ����
    case 3: newShape = new Rect(); break;  // �簢�� ���� ����
    default:
        std::cout << "�޴��� �߸� �����ϼ̽��ϴ�.\n";
        return;
    }

    // ����Ʈ�� ������� ��, ���ο� ������ ù ��° ���� �߰�
    if (node_size == 0) {
        pStart = newShape;
        pLast = pStart;
    }
    else {
        // ����Ʈ�� �������� �� ������ �߰�
        pLast = pLast->add(newShape);
    }
    node_size++;  // ���� �� ����
}

// �־��� �ε����� �ش��ϴ� ������ ����
bool GraphicEditor::del(int n) {
    if (pStart == nullptr) {  // ���� ����Ʈ�� ��������� ������ �� ����
        std::cout << "List Empty\n";
        return false;
    }

    int k = 0;
    Shape* target_node = pStart;
    Shape* priv_node = nullptr;  // ���� ��� ������

    // ������ ������ ù ��° ������ ���
    if (n == 0) {
        pStart = pStart->getNext();  // ù ��° ��带 �� ��° ���� ����
        delete target_node;  // ù ��° ��� ����
    }
    else {
        // ������ ������ ã�� ���� ����Ʈ�� ���������� Ž��
        while (target_node != nullptr && k < n) {
            priv_node = target_node;  // ���� ��带 ����
            target_node = target_node->getNext();  // ���� ��带 ����
            k++;
        }

        // ��ȿ���� ���� �ε����� �Է��� ���
        if (target_node == nullptr) {
            std::cout << "���� ����Դϴ�.\n";
            return false;
        }
        else {
            // ���� ����� next�� ������ ����� next�� ����
            priv_node->setNext(target_node);
            // ������ ��尡 ������ ��忴�ٸ� pLast�� ����
            if (target_node == pLast) {
                pLast = priv_node;
            }
            delete target_node;  // ��� ����
        }
    }

    node_size--;  // ���� �� ����
    return true;
}

// ����Ʈ�� ����� �������� ���
void GraphicEditor::show() {
    Shape* p = pStart;
    int i = 0;
    if (p == nullptr) {  // ����Ʈ�� ����ִ� ���
        std::cout << "List Empty\n";
    }
    else {
        // ����Ʈ�� ��� ������ ���������� ���
        while (p != nullptr) {
            std::cout << i << ": ";
            p->paint();  // �� ������ paint �޼��带 ȣ���Ͽ� ���
            p = p->getNext();  // ���� �������� �̵�
            i++;
        }
    }
}
