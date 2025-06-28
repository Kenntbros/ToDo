#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "functions.h"

using namespace std;
const string file_todo = "todo_list.txt";

int main() {
	vector<ToDo> todolist;
    while (true) {
        cout << "\n=== ToDo List ���� ===\n";
        cout << "1. �������� ������\n";
        cout << "2. �������� ��� ������\n";
        cout << "3. �������� ������ ��� �����������\n";
        cout << "4. ������������� ������\n";
        cout << "5. ������� ������\n";
        cout << "6. ��������� ������ �� �����\n";
        cout << "7. �����\n";
        cout << "�������� ��������: ";

        int choice;
        cin >> choice;
        cin.ignore(); // ������� ������ ����� ����� �����

        switch (choice) {
        case 1: // ���������� ������
            add_ToDo(todolist, file_todo);
            break;

        case 2: // �������� ��� ������
            displaytask(todolist);
            break;

        case 3: // �������� ��� �����������
            markTaskCompleted(todolist, file_todo);
            break;

        case 4: // ������������� ������
            edittodo(todolist, file_todo);
            break;

        case 5: // ������� ������
            delete_ToDo(todolist, file_todo);
            break;

        case 6: // ��������� �� �����
            loadtasksFile(todolist, file_todo);
            break;

        case 7: // �����
            return 0; // ���������� ���������

        default: // �������� ����
            cout << "�������� �����. ���������� �����.\n";
        }
    }
}