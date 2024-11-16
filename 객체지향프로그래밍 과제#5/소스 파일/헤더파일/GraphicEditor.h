#ifndef GRAPHIC_EDITOR_H
#define GRAPHIC_EDITOR_H

#include "UI.h"      // UI Ŭ������ �����Ͽ� ����� �������̽��� ó��
#include "Line.h"    // Line Ŭ������ �����Ͽ� �� ������ ���
#include "Circle.h"  // Circle Ŭ������ �����Ͽ� �� ������ ���
#include "Rect.h"    // Rect Ŭ������ �����Ͽ� �簢�� ������ ���

class GraphicEditor {
    int node_size;     // ������ ������ �����ϴ� ����
    Shape* pStart;     // ���� ����Ʈ�� ������ ����Ű�� ������
    Shape* pLast;      // ���� ����Ʈ�� �������� ����Ű�� ������
public:
    // �׷��� ������ ��ü�� �ʱ�ȭ
    GraphicEditor();

    // �޴� ���ÿ� ���� ���� ����, ����, ��ü ����, ���� ���� �۾��� ó��
    int run();

    // ����ڰ� ������ ������ ����Ʈ�� �߰�
    void input_new(int n);

    // ������ �ε���(n)�� ������ ����
    bool del(int n);

    // ���� ���� ����Ʈ�� ��� ������ ���
    void show();
};

#endif
