#include"calculator.h"
#include<algorithm>
using namespace std;

const long long INF = 1e18;

long double add(long double a, long double b) {
    return a + b;
}

long double multiply(long double a, long double b) {
    return a * b;
}

long long factorial_mod_INF(long long a) {
    long long fact = 1;
    while (a--) {
        fact = ((fact%INF)*(a%INF))%INF;
    }

    return fact;
}

long long lcm(long long a, long long b) {
    return (a*b)/__gcd(a,b);
}