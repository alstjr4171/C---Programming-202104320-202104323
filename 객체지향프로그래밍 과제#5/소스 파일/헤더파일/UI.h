#ifndef UI_H
#define UI_H

#include <iostream>

// UI Ŭ������ ����� �������̽��� ó���ϴ� Ŭ����
class UI {
public:
    // �޴��� ȭ�鿡 ����ϰ� ������� ������ �޾ƿ�
    static int show_menu();

    // ����ڰ� ���� ������ ������ �� �ֵ��� ������Ʈ�� ���
    static int input_shape();

    // ����ڰ� �����ϰ��� �ϴ� ������ �ε����� �Է�
    static int del_index();
};

#endif
