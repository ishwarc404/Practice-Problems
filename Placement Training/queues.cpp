#include <iostream>
using namespace std;

//implementation of queues using linked list

struct Node
{
    int info;
    Node *next;
};

//NODE FOR HEAR AND REAR WE DO NOT NEED TO ALLOCATE ANY SPACE AND HENCE DO NOT USE NEW

Node *push()
{
    cout << "Enter the element you want to store:\n";
    int ele;
    cin >> ele;
    Node *element = NULL;
    element = new Node();
    element->next = NULL;
    element->info = ele;
    return element;
}

void display(Node *head)
{
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->info;
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *rear = NULL;

    int selection;

    while (1)
    {
        cout << "Please select one option:\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cin >> selection;
        switch (selection)
        {
        case 1:
            if (head == rear)
            { //first case
                head = push();
            }
            else if (rear == NULL)
            { //if only 1 element exists
                rear = push();
                head->next = rear;
            }
            else if (rear != NULL)
            { //if more than 1 element exist
                Node *temp = push();
                rear->next = temp;
                rear = temp;
            }
            break;

        case 2:
            if (head != NULL)
            {
                head = head->next; //popping the first
            }
            else
            {
                cout << "Underflow!";
            }

            break;

        case 3:
            display(head);
            break;

        default:
            exit(1);
            break;
        }
    }
    return 0;
}