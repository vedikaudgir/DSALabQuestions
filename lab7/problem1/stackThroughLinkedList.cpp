#include <iostream>
#define MAX 10
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

class StackThroughLinkedList
{
private:
    Node node[MAX];
    int top;
    int nextIndex;

public:
    void push(int value)
    {
        if (nextIndex == -1)
        {
            cout << "\nStack Overflow!";
            return;
        }
        int newIndex = nextIndex;
        nextIndex = node[nextIndex].next;
        node[newIndex].data = value;
        node[newIndex].next = top;
        top = newIndex;

        cout << "\nPushed to stack";
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "\nStack Underflow!";
            return;
        }

        int poppedIndex = top;
        top = nodes[top].next;
        nodes[poppedIndex].next = freeIndex;
        nextIndex = poppedIndex;

        cout << "\npopped from stack.";
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i != -1; i++)
        {
            cout << node[i].data << " ";
        }
        cout << endl;
    }

    StackThroughLinkedList()
    {
        top = -1;
        nextIndex = 0;
        for (int i = 0; i < MAX; i++)
        {
            node[i].next = i + 1;
            node[MAX].next = -1;
        }
    }

    ~StackThroughLinkedList() {}
};

int main()
{
    StackThroughLinkedList s;
    s.push(10);
    s.push(20);
    s.push(69);
    s.display();
    s.pop();
    s.display();
}
