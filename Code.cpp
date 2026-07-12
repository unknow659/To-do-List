#include <iostream>
#include <vector>
using namespace std;

vector<string> task;
vector<bool> done;

void addTask() {
    string name;
    cin.ignore();
    cout << "Enter Task: ";
    getline(cin, name);
    task.push_back(name);
    done.push_back(false);
}

void showTask() {
    if (task.empty()) {
        cout << "No Tasks!\n";
        return;
    }

    for (int i = 0; i < task.size(); i++) {
        cout << i + 1 << ". " << task[i] << " - "
             << (done[i] ? "Completed" : "Pending") << endl;
    }
}

void completeTask() {
    int n;
    cout << "Enter Task Number: ";
    cin >> n;

    if (n >= 1 && n <= task.size())
        done[n - 1] = true;
    else
        cout << "Invalid Task Number\n";
}

void deleteTask() {
    int n;
    cout << "Enter Task Number: ";
    cin >> n;

    if (n >= 1 && n <= task.size()) {
        task.erase(task.begin() + n - 1);
        done.erase(done.begin() + n - 1);
    } else {
        cout << "Invalid Task Number\n";
    }
}

int main() {
    int choice;
cout<<"-------------To do list Menu---------------"<<endl;
    do {
        cout << "\n1. Add Task";
        cout << "\n2. Show Tasks";
        cout << "\n3. Complete Task";
        cout << "\n4. Delete Task";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addTask(); 
            break;
            case 2: showTask(); 
            break;
            case 3: completeTask(); 
            break;
            case 4: deleteTask();
             break;
            case 5: cout << "Goodbye!\n"; 
            break;
            default: cout << "Invalid Choice\n";
        }
        
        cout<<"-------------------------------------"<<endl;

    } while (choice != 5);

    return 0;
}