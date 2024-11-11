#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tasks;

void showMenu()
{
    cout << " To-Do List Menu : " << endl;
    cout << " 1. View tasks " << endl;
    cout << " 2. Add a task " << endl;
    cout << " 3. Delete a task " << endl;
    cout << " 4. Exit \n" << endl;
}

void viewTasks()
{
    if (tasks.empty())
    {
        cout << " No tasks in the to-do list " << endl;
    }
    else
    {
        cout << " To Do List : " << endl;
        for (size_t i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void addTask()
{
    string taskName;
    cout << "\n Enter the task name: ";
    cin.ignore();
    getline(cin, taskName);
    tasks.push_back(taskName);
    cout << " Task " << taskName << " added to the list " << endl;
}

void deleteTask()
{
    viewTasks();
    if (tasks.empty())
    {
        return;
    }

    int taskNumber;
    cout << "\n Enter the task number to delete: " << endl;
    cin >> taskNumber;

    if (taskNumber > 0 && taskNumber <= tasks.size())
    {
        cout << " Task " << tasks[taskNumber - 1] << " delete from the list " << endl;
        tasks.erase(tasks.begin() + taskNumber - 1);
    }
    else
    {
        cout << " Invalid task number " << endl;
    }
}

int main()
{
    while (true)
    {
        showMenu();
        int choice;
        cout << "\n Enter your choice(1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            viewTasks();
            break;

        case 2:
            addTask();
            break;
        case 3:
            deleteTask();
            break;

            cout << " Exiting the to-do list application .\n";
            cout << "Goodbye" << endl;
            return 0;
        default:
            cout << " Invalid choice. Please choose a number between 1 & 4." << endl;
            break;
        }
    }
    return 0;
}