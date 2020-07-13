#include <iostream>
using namespace std;

int push(int *arr, int *tos)
{
    int top = *tos;
    //when it is full
    if (*tos >= 5)
    {
        cout << "Array is full, cannot push!\n";
        return 0;
    }
    int ele;
    cout << "Please enter the element to be pushed:\n";
    cin >> ele;
    arr[++top] = ele;
    *tos = top;
    return 1;
}

int pop(int *arr, int *tos)
{
    if (*tos > 0)
    {
        *tos = --*tos;
        return 1;
    }
    cout << "Nothing to pop!";
    *tos = 0;
}

void display(int *arr, int *tos)
{

    for (int i = 0; i <= *tos; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "\n";
}

int main()
{
    int arr[6];
    int tos = -1;

    while (1)
    {
        cout << "What do you want to do?\n1. Push \n2. Pop \n3. Display\n4.Exit\n";
        int input;
        cin >> input;
        switch (input)
        {
        case 1:
            push(arr, &tos);
            break;

        case 2:
            pop(arr, &tos);
            break;

        case 3:
            display(arr, &tos);
            break;

        default:
            exit(1);
            break;
        }
    }
}