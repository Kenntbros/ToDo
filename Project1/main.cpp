#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "functions.h"

using namespace std;
const string file_todo = "todo_list.txt";

int main() {
	setlocale(LC_ALL, "ru");
   	SetConsoleCP(1251);
	SetConsoleOutputCP(1251)
	vector<ToDo> todolist;
    while (true) {
        cout << "\n=== ToDo List Ìåíþ ===\n";
        cout << "1. Äîáàâèòü çàäà÷ó\n";
        cout << "2. Ïîêàçàòü âñå çàäà÷è\n";
        cout << "3. Îòìåòèòü çàäà÷ó êàê âûïîëíåííóþ\n";
        cout << "4. Ðåäàêòèðîâàòü çàäà÷ó\n";
        cout << "5. Óäàëèòü çàäà÷ó\n";
        cout << "6. Çàãðóçèòü çàäà÷è èç ôàéëà\n";
        cout << "7. Âûõîä\n";
        cout << "Âûáåðèòå äåéñòâèå: ";

        int choice;
        cin >> choice;
        cin.ignore(); // Î÷èñòêà áóôåðà ïîñëå ââîäà ÷èñëà

        switch (choice) {
        case 1: // Äîáàâëåíèå çàäà÷è
            add_ToDo(todolist, file_todo);
            break;

        case 2: // Ïîêàçàòü âñå çàäà÷è
            displaytask(todolist);
            break;

        case 3: // Îòìåòèòü êàê âûïîëíåííóþ
            markTaskCompleted(todolist, file_todo);
            break;

        case 4: // Ðåäàêòèðîâàòü çàäà÷ó
            edittodo(todolist, file_todo);
            break;

        case 5: // Óäàëèòü çàäà÷ó
            delete_ToDo(todolist, file_todo);
            break;

        case 6: // Çàãðóçèòü èç ôàéëà
            loadtasksFile(todolist, file_todo);
            break;

        case 7: // Âûõîä
            return 0; // Çàâåðøåíèå ïðîãðàììû

        default: // Íåâåðíûé ââîä
            cout << "Íåâåðíûé âûáîð. Ïîïðîáóéòå ñíîâà.\n";
        }
    }
}
