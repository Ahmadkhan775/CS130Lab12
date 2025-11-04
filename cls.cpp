#include <iostream>
#include <memory>

class MyClass{
    int size;
    std::shared_ptr<int []> numbers;
public:
    MyClass(int s): size(s) {
        numbers = std::make_unique<int []>(5);
        for (int i = 0; i < size; i++) {
            numbers[i] = i;
        }
    }

    void printout() {
        for (int i = 0; i < size; i++) {
            std::cout << numbers[i] << "\t";
        }
        std::cout << std::endl;
    }
};

int main()
{
    MyClass c1(5);
    c1.printout();

    MyClass c2(c1);
    std::cout << "-----COPY-----" << std::endl;
    c2.printout();
}