// int   2 or 4 bytes  // store whore number
// float  4 bytes   //store 6 decimal digits
//double    8 bytes // store 15 decimal digits
// char     1 bytes // store a single charater single quote


// if you want to print or scan you have to use format specifier
// %d or %i for integer
// %f for float
//%lf for double
//%c for character

#include <stdio.h>
int main (){
    int a = 123;
    float b = 0.23213321312321; // only print 6 decimal
    double c = 1.23231231231231231; 
    char d = 'd';
    printf("%i\n",a); //or %d
    printf("%f\n",b);
    printf("%lf\n",c);
    printf("%c",d);
    return 0;
}
