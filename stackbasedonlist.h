#ifndef STACKBASEDONLIST_H
#define STACKBASEDONLIST_H


struct Node
{
    int x;
    Node *next, *prev;
};


class StackBasedOnList
{
private:
    Node *head;
    Node *tail;
public:
    StackBasedOnList();
    void push(int i);
    void pop();
    void show();
    int size();
    ~StackBasedOnList();
};

#endif // STACKBASEDONLIST_H
