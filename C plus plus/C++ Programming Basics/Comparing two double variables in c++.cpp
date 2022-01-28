// Comparing two double variables in c++.cpp
/*
NOTE:
Comparing floating point values using the == operator is very error prone;
two values that should be equal may not be due to arithmetic rounding errors.
The common way to compare these is to use an epsilon(here, EPS):
*/


#include <cstdio>
#include <cmath>
const double EPS = 1e-9;




int main()
{
    double a, b, var;
    scanf("%lf%lf", &a, &b);

    if(fabs(a - b) < EPS)
        printf("a and b is equal.\n");
    else if(fabs(a - b) > EPS)
        printf("a and b is not equal.\n");
    else if(a > b + EPS)
        printf("a is greater than b.\n");
    else if(a + EPS < b)
        printf("a is less than b.\n");


	scanf("%lf", &var);
	printf("%0.9lf", var + EPS);    // Rounds the floating point number

	return 0;
}
