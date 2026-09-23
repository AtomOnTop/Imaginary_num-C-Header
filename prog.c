#include <stdio.h>
#include "imagine.h"
int main()
{
    img a={3,5};
    img b={1,2};

    img sum= add_img(a,b);
    img mul= multiply_img(a,b);
    double mod = modulus(a);
    img quotient = divide(a,b);
    
    img c= {3,-4};
    double argument = arg(c);

    img o= {0,0};
    int quad= quadrant(o);

    printf("sum: %lf + %lfi\n",sum.real_part,sum.imaginary_part);
    printf("product: %lf + %lfi\n",mul.real_part,mul.imaginary_part);
    printf("modulus: %lf\n",mod);
    printf("quotient: %lf + %lfi\n",quotient.real_part,quotient.imaginary_part);
    printf("argument: %lf\n",argument);
    printf("quadrant: %d\n",quad);

    return 0;
}
