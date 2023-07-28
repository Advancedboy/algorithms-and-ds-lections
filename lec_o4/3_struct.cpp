#include<iostream>

using namespace std;

struct t_Pair {
    int a;
    int b;
};

t_Pair return_pair(int x)
{
    t_Pair result; // создаю локальный экземпляр структуры t_Pair
    
    result.a = x * x;
    result.b = x * x * x;

   return result; // Возврашаю его как результат 
}

int main()
{
    int x;
    cin >> x;
    t_Pair y = return_pair(x);
    cout << y.a << ' ' << y.b << '\n';

    return 0;
}

