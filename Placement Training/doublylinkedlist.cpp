#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
    Node *before;
};

Node* insert()
{

    cout<<"Enter element to be inserted:";
    int element;
    cin>>element;
    Node *newnode;
    newnode = new Node();
    newnode->next = NULL;
    newnode->info = element;
    return newnode;

}

void display(Node *head, Node *rear){
    Node *temp;
    temp  = rear;
    while(temp!=NULL)
    {
        cout<<temp->info<<" ";
        temp = temp->before;
    }
}
int main()
{
    Node *head;
    head = NULL;
    Node *rear;
    rear = NULL;

    while (1)
    {
        cout << "Enter your choice of operation: 1.Add 2.Display in reverse";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            Node *temp ;
            temp = insert();
            if(head == NULL)
            {
                head = temp;
                head->before = NULL;
                rear = temp;
            }    
            else
            {
                 rear->next = temp;
                 temp->before = rear;
                 rear = temp;
            } 
            break;
        case 2:
            display(head , rear);
            break;
        default:
            exit(1);
            break;
        }
    }
    return 0;
}