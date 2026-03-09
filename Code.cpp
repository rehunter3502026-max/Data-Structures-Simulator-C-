#include <iostream>
#include <vector>
using namespace std;

class StackSim
{
private:
    vector<int> data;

public:
    void push()
    {
        int value;
        cout << "Enter value to push: ";
        cin >> value;
        data.push_back(value);
    }

    void pop()
    {
        if (data.empty())
            cout << "Stack is empty\n";
        else
        {
            cout << "Popped: " << data.back() << endl;
            data.pop_back();
        }
    }

    void display()
    {
        cout << "Stack: ";
        for (int i = data.size() - 1; i >= 0; i--)
            cout << data[i] << " ";
        cout << endl;
    }
};

class QueueSim
{
private:
    vector<int> data;

public:
    void enqueue()
    {
        int value;
        cout << "Enter value to enqueue: ";
        cin >> value;
        data.push_back(value);
    }

    void dequeue()
    {
        if (data.empty())
            cout << "Queue is empty\n";
        else
        {
            cout << "Dequeued: " << data.front() << endl;
            data.erase(data.begin());
        }
    }

    void display()
    {
        cout << "Queue: ";
        for (int i = 0; i < data.size(); i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

class Simulator
{
public:
    void sortingDemo()
    {
        vector<int> arr;
        int n, value;

        cout << "How many numbers? ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> value;
            arr.push_back(value);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }

        cout << "Sorted: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    StackSim stack;
    QueueSim queue;
    Simulator sim;

    int choice;

    do
    {
        cout << "\nData Structures Simulator\n";
        cout << "1. Stack\n";
        cout << "2. Queue\n";
        cout << "3. Sorting Demo\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int op;
            cout << "1 Push  2 Pop  3 Display\n";
            cin >> op;

            if (op == 1) stack.push();
            else if (op == 2) stack.pop();
            else if (op == 3) stack.display();
        }
        else if (choice == 2)
        {
            int op;
            cout << "1 Enqueue  2 Dequeue  3 Display\n";
            cin >> op;

            if (op == 1) queue.enqueue();
            else if (op == 2) queue.dequeue();
            else if (op == 3) queue.display();
        }
        else if (choice == 3)
        {
            sim.sortingDemo();
        }

    } while (choice != 4);

    return 0;
}

