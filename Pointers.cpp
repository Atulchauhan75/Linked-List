#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int* x = &a;  // x points to the memory location of variable a
    int* y = x;   // y points to the same memory location as x

    cout << "Value of a: " << a << std::endl;
    cout << "Value pointed by x: " << *x << std::endl;
    cout << "Value pointed by y: " << *y << std::endl;

    return 0;
}
