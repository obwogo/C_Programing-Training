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
        
        double sum = (array[0])(x,y);
        printf("sum is %f\n", sum);
        
        double subtration = (array[1])(x,y);
        printf("subtration is %f\n", subtration);
        
        double division = (array[3])(x,y);
        printf("answer u get after dividing is %f", division);

}
