/*define a data structure and data type
 * to hold the imaginary numbers*/

#ifndef Imaginary_H
#define Imaginary_H

typedef struct ImaginaryNumber
{
    double real_part;
    double imaginary_part;
} img;

img add_img(img a, img b); //Add

img multiply_img(img a, img b); //Multiply

double modulus(img a); //Modulus

img divide(img a, img b); 

double arg(img a);

img comp(img a);

int quadrant(img a);

#endif
