#include <iostream>

int euclid_gcd(int a, int b) {
    loop_begin:
    if (a == b) goto loop_end;
    if (!(a > b)) goto else_action;
        a -= b;
    goto after_if;
        else_action:
        b -= a;
        after_if:
    goto loop_begin;
        loop_end:
    return a;
}