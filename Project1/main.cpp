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
        cout << "\n=== ToDo List Меню ===\n";
        cout << "1. Добавить задачу\n";
        cout << "2. Показать все задачи\n";
        cout << "3. Отметить задачу как выполненную\n";
        cout << "4. Редактировать задачу\n";
        cout << "5. Удалить задачу\n";
        cout << "6. Загрузить задачи из файла\n";
        cout << "7. Выход\n";
        cout << "Выберите действие: ";

        int choice;
        cin >> choice;
        cin.ignore(); // Очистка буфера после ввода числа

        switch (choice) {
        case 1: // Добавление задачи
            add_ToDo(todolist, file_todo);
            break;

        case 2: // Показать все задачи
            displaytask(todolist);
            break;

        case 3: // Отметить как выполненную
            markTaskCompleted(todolist, file_todo);
            break;

        case 4: // Редактировать задачу
            edittodo(todolist, file_todo);
            break;

        case 5: // Удалить задачу
            delete_ToDo(todolist, file_todo);
            break;

        case 6: // Загрузить из файла
            loadtasksFile(todolist, file_todo);
            break;

        case 7: // Выход
            return 0; // Завершение программы

        default: // Неверный ввод
            cout << "Неверный выбор. Попробуйте снова.\n";
        }
    }
}