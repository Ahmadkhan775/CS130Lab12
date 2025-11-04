#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1 = make_unique<int>(100);

    shared_ptr<int> ptr2;
    ptr2 = ptr1;
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout<< "Reference count " << ptr1.use_count() << endl;

    int *ptr;
    ptr = new int;
}