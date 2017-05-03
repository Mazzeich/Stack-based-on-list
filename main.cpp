#include <iostream>
#include <cstdlib>
#include <stackbasedonlist.h>

int main()
{
    StackBasedOnList stlist;

    stlist.push(1);
    stlist.push(3);
    stlist.push(3);
    stlist.push(-2);
    stlist.push(3);
    stlist.show();
    stlist.size();
    stlist.pop();
    stlist.show();
    stlist.size();
}
