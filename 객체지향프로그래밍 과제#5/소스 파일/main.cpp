#include "GraphicEditor.h"  // GraphicEditor Ŭ������ ��� ������ ����

int main() {
    // GraphicEditor ��ü�� �������� ����
    GraphicEditor* g_editor = new GraphicEditor;

    // g_editor ��ü�� run() �޼��带 ȣ���Ͽ� ���α׷��� �ֿ� ����� ����
    // ����ڰ� �޴��� �����ϰ� ������ ����/����/���� ���� �۾��� �� �� ����
    g_editor->run();

    // ���α׷��� ����Ǹ� �������� �Ҵ�� GraphicEditor ��ü�� ����
    delete g_editor;

}
