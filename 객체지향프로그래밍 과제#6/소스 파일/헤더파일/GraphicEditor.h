#ifndef GRAPHIC_EDITOR_H
#define GRAPHIC_EDITOR_H

#include <vector>
#include "Shape.h"
#include "UI.h"

// GraphicEditor Ŭ���� �׷��� �������� ��ü ������ ����
class GraphicEditor {
    vector<Shape*> v;                  // ���� ��ü�� �����ϴ� ����
    vector<Shape*>::iterator it;      // ���͸� Ž���ϱ� ���� �ݺ���
public:
    // ������ ���α׷� �ʱ�ȭ �� ����
    GraphicEditor();
    // �׷��� ������ ���� ������ ����
    void start();
};

#endif