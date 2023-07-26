#include <iostream>

int main() {
    using namespace std;
    uint8_t x, y;

    x = 10;
    y = 12;

    cout << (unsigned int)(x & y) << endl;
    cout << (unsigned int)(x | y) << endl;
    cout << (unsigned int)(x ^ y) << endl;
    cout << (unsigned int)(~x) << endl;
    y = ~x;
    cout << (unsigned int)(y) << endl;

    return 0;
}