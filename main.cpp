#include <iostream>
#include "TaskManger.h"

using namespace std;

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();
    AddTask();
    DeleteTask();

    EditTasks();

    return 0;
}