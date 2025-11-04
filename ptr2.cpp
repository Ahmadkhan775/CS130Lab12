#include <iostream>
using namespace std;

int *myfn()
{
    int num = 100;
    // int *ptr = &num;

    int *ptr = new int;
    *ptr = 100;
    cout << "in the function" << *ptr << endl;
    return ptr;
}

int main()
{
    int *ptr;
    ptr = myfn();
    cout << "In main : " << *ptr << endl;
}