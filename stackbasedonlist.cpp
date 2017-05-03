#include <stackbasedonlist.h>
#include <iostream>
#include <cstdlib>


using namespace std;


StackBasedOnList::StackBasedOnList()
{
    head = nullptr;
    tail = nullptr;
}

 void StackBasedOnList::push(int i)
{
    Node *temp = new Node;
    temp->next = nullptr;
    temp->x = i;

    if (head == nullptr)
    {
        temp->prev = nullptr;
        head = temp;
        tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void StackBasedOnList::pop()
{
    Node *temp = head;
    head = temp->next;
    head->next = temp->next->next;
}

void StackBasedOnList::show()
{
    Node *temp = head;
    while(temp)
    {
       cout << temp->x <<" ";
       temp = temp->next;
    }
    cout <<'\n';
}

int StackBasedOnList::size()
{
    int size;
    size = 0;
    Node *temp = head;
    while(temp)
    {
        size++;
        temp = temp->next;
    }
    cout << "Size of the stack equals to " << size << "." << endl;
}

StackBasedOnList::~StackBasedOnList()
{
    while(head)
    {
        tail = head->next;
        delete head;
        head = tail;
    }
}
