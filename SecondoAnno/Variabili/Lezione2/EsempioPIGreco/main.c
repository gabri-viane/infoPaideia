#include <math.h>
#include <stdio.h>

int main(void)
{
    long double pi_greco = 3.141592653589793238462643383279;
    double pi_greco_double = (double)pi_greco;
    float pi_greco_float = (float)pi_greco;

    printf("Valore come float: %.30f\nValore come double: %.50lf", pi_greco_float, pi_greco_double);
}