#include <iostream>

int main() {
    using namespace std;
    bool flag;
    flag = false;
    uint32_t x;
    cin >> x;
    while (x != 0) {
        flag = (x % 10 == 7) || flag;
        x = x / 10;
    }
    cout << flag << endl;

    return 0;
}