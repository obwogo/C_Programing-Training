#include <stdio.h>

double add ( double x, double y)
{
        return x+y;
}
double subtract ( double x, double y)
{
        return x-y;
}
double multiply (double x, double y)
{
        return x * y;
}
double division ( double x, double y)
{
        return x / y;
}

int main ()
{
        double (* array[])(double, double) ={add, subtract, multiply, division};

        double x = 50;
        double y = 10;

       double product = (array[2])(x,y);

        printf("product is %f\n", product);
        return product;

}
