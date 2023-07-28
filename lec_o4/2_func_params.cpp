#include <iostream>

void increment(int* a){
    *a = *a + 1;
}

int main(){
    using namespace std;
    int b = 3;

    increment(&b);
    cout << b << endl;

    return 0;
}
