#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<iostream>
using namespace std;

long double add(long double a, long double b);
long double subtract(long double a , long double b );
long double multiply(long double a, long double b);
long double divide(long double a , long double b);
long long factorial_mod_INF(long long a); //Limits the output to avoid long long overflow
long long gcd(long long a, long long b);
long long lcm(long long a, long long b);
long long RNG(long long a , long long b);

#endif // CALCULATOR_H