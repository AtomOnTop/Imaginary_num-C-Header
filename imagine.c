#include "imagine.h"
#include <math.h>

img add_img(img a, img b)
{
    img P= {(a.real_part+b.real_part),(a.imaginary_part+b.imaginary_part)};
    return P;
}

img multiply_img(img a, img b)
{
    double a1= a.real_part;
    double a2= a.imaginary_part;

    double b1= b.real_part;
    double b2= b.imaginary_part;

    img P= {(a1*b1 - a2*b2),(a1*b2 + a2*b1)};
    return P;
}

double modulus(img a)
{
   double P= sqrt((a.real_part * a.real_part) + (a.imaginary_part * a.imaginary_part));
   return P;
}

img divide(img z1, img z2)
{
    double a=z1.real_part; double b=z1.imaginary_part;
    double c=z2.real_part; double d=z2.imaginary_part;

    double real = (a*c + b*d)/(c*c + d*d);
    double unreal = (b*c - a*d)/(c*c + d*d);

    img P={real,unreal};
    return P;
}

double arg(img a)
{
    double P = atan2(a.imaginary_part, a.real_part);
    return P;
}

img comp(img a)
{
    img P = {a.real_part, -1*(a.imaginary_part)};
    return P;
}

int quadrant(img a)
{
    double x= a.real_part;
    double y= a.imaginary_part;

    if((int)x != 0 && (int)y != 0)
    {
        if(y>0)
        {
            if(x>0) return 1;
            else return 2;
        }
        else
        {
            if(x>0) return 4;
            else return 3;
        }
    }
    else
    {
        if((int)x == 0 && (int)y == 0)
            return 0;
        else
            return -1;
    }
}
