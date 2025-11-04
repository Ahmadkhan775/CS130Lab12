#include <iostream>
#include <memory>

#define SIZE 5

using namespace std;

int main(){
    int num = 100;
    unique_ptr<int> ptr1;
    ptr1 = make_unique<int>(100);

    unique_ptr<int> ptr2;
    ptr2 = move(ptr1);
    cout << *ptr2 << endl;

    cout << ptr2.get() << endl;
    int *rawptr = ptr2.get();
    cout << *rawptr << endl;

    unique_ptr<int []> p3 = make_unique<int []>(5);
    p3[0] = 100;
    p3[1] = 200;
    p3[2] = 300;
    cout << p3[0] << endl;
    cout << p3[1] << endl;
    cout << p3[2] << endl;


}