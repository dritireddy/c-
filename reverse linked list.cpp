#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* reverse(node* head)
{
    node* prev = NULL;
    node* next = NULL;

    for(node* current = head; current != NULL;current = next )
    {
        next = current->next;
        current->next = prev;
        prev = current;
        
    }

    head = prev;
    return head;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    cout << "Original List: ";
    display(head);

    head = reverse(head);

    cout << "\nReversed List: ";
    display(head);

    return 0;
}
