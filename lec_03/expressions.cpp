#include <iostream>
#include <math.h>

double f(double);

int main(){
    using namespace std;
    double x;
    cin >> x;
    cout << f(x) << endl;

    double s = 0;
    double factor;

    for(int n = 0; n < 10; n++) {
        s += pow(-1, n) * pow(x, 2 * n + 1) / factor;
        factor *= n * 2 * (2 * n + 1);
    }

    cout << s <<  endl;

    return 0;
}

double f(double x){
    return 2 * sin(x);
}