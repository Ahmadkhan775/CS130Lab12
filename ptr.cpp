#include <iostream>
using namespace std;
int main(){
    int *ptr;
    int num = 100;
    ptr = &num;
    cout << *ptr << endl;
    num = 200;
    int *ptr2;
    ptr2 = ptr;
    delete ptr;
    cout << *ptr2 << endl;
    cout << *ptr << endl;
}