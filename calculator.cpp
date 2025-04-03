<<<<<<< HEAD
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
=======
#include <iostream>
#include "calculator.h"
using namespace std;

double subtract(int a , int b ) {
    return (a-b);
}

double division(int a , int b ){
    return (a/b);
}

int gcd (int a , int b ){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int RNG(int a , int b ){

    if ( b < a) {
        int temp = a ;
        a = b ;
        b = temp ;  
    }

    return ( a + rand() % (b-a+1));

    return ()
>>>>>>> 965c54e (Initial commit)
}