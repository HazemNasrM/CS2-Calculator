#include"calculator.h"
#include<iostream>
#include<algorithm>
using namespace std;

const long long INF = 1e18;

long double add(long double a, long double b) {
    return a + b;
}

long double subtract(long double a , long double b ) {
    return (a-b);
}

long double multiply(long double a, long double b) {
    return a * b;
}

long double divide(long double a , long double b ){
    return (a/b);
}

long long factorial_mod_INF(long long a) {
    long long fact = 1;
    while (a--) {
        fact = ((fact%INF)*(a%INF))%INF;
    }

    return fact;
}

long long gcd (long long a , long long b ){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a*b)/gcd(a,b);
}

long long RNG(long long a , long long b ){
    if ( b < a) {
        int temp = a ;
        a = b ;
        b = temp ;  
    }

    return ( a + rand() % (b-a+1));
}