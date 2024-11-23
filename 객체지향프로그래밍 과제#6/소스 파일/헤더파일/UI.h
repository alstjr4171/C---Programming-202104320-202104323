#ifndef UI_H
#define UI_H

#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;

// UI Ŭ���� ����ڿ� ���α׷� ���� ��ȣ�ۿ��� ���
class UI {
public:
    // �޴� ���� ����, ����, ��� ����, ���� �� �ϳ� ���� ����� �Է��� �޾� �ش� �޴��� ��ȣ�� ��ȯ
    static int seleteMenu();

    // ������ ���� ������ ���� ��, ��, �簢�� �� �ϳ� ���� ����� �Է��� �޾� ���� ������ ��ȣ�� ��ȯ
    static int seleteShape();

    // ������ ������ �ε��� ���� ����� �Է��� �޾� ������ �ε����� ��ȯ
    static int seleteDelIndex();

    // ����� ��� ������ ��� ���Ϳ� �ݺ��ڸ� �Ű������� �޾� ���������� �� ������ ���
    static void showAll(vector<Shape*>& v, vector<Shape*>::iterator& it);
};

#endif
