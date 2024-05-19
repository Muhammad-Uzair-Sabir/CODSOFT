#include <iostream>
#include <string>
#define MAX_TASKS 100

using namespace std;

struct Task {
    string description;
    bool completed;
};

class TaskManager {
	
    Task tasks[MAX_TASKS];
    int task_Count;

public:
    TaskManager() : task_Count(0) {}

    void addTask(const string& description) {
        if (task_Count < MAX_TASKS) {
            tasks[task_Count].description = description;
            tasks[task_Count].completed = false;
            task_Count++;
            cout << "Task has beeen added successfully!" << endl;
        } 
		else {
            cout << "Sorry, Task list is full!" << endl;
        }
    }

    void viewTasks() const {
        if (task_Count == 0) {
            cout << "No tasks available!" << endl;
            return;
        }

        for (int i = 0; i < task_Count; ++i) {
            cout << i + 1 << ". " << tasks[i].description << " ["
                 << (tasks[i].completed ? "Completed" : "Pending") << "]" << endl;
        }
    }

    void markTaskAsCompleted(int index) {
        if (index < 1 || index > task_Count) {
            cout << "Invalid task number!" << endl;
            return;
        }

        tasks[index - 1].completed = true;
        cout << "Task marked as completed." << endl;
    }

    void removeTask(int index) {
        if (index < 1 || index > task_Count) {
            cout << "Invalid task number!" << endl;
            return;
        }

        for (int i = index; i < task_Count; ++i) {
            tasks[i - 1] = tasks[i];
        }
        task_Count--;
        cout << "Task removed successfully." << endl;
    }
};

int main() {
    TaskManager manager;
    int choice;
    string description;
    int index;

    do {
        cout << "\nTask Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                getline(cin, description);
                manager.addTask(description);
                break;
            case 2:
                manager.viewTasks();
                break;
            case 3:
                cout << "Enter task number to mark as completed: ";
                cin >> index;
                manager.markTaskAsCompleted(index);
                break;
            case 4:
                cout << "Enter task number to remove: ";
                cin >> index;
                manager.removeTask(index);
                break;
            case 5:
                cout << "Exiting!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } 
	while (choice != 5);

    return 0;
}

