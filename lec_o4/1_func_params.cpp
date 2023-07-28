/* Аргументы в функцию передаются по значению, т.е.
 * при вызове функции для хранения фактических переданных значений
 * создаются временные переменные - ячейки памяти на сегменте STACK.
 * После выхода из функции эти переменные уничтожаются. 
 * */

#include <iostream>

void increment(int a){
    std::cout << a << '\n';
    a = a + 1
    std::cout << a << '\n';
}

int main(){
    using namespace std;
    int b = 3;

    increment(b);
    cout << b  << endl;

    return 0;
}
