#include <stdio.h>

typedef struct{
        double real;
        double imaginary;
    } Complex;

Complex make_complex(double real, double imaginary);
Complex add_complex(Complex c1, Complex c2);

int main(void)
{
    
    Complex c1, c2, c3;

    c1 = make_complex(1.0, 2.0);

    //printf("real: %.1f, imaginary: %.1f", c1.real, c1.imaginary);

    c2 = make_complex(1.0,3.0);

    c3 = add_complex(c1, c2);
    
    printf("real: %.1f, imaginary: %.1f", c3.real, c3.imaginary);


    return 0;
}

Complex make_complex(double real, double imaginary)
{
    Complex c;
    c.real = real;
    c.imaginary = imaginary;
    return c;
}

Complex add_complex(Complex c1, Complex c2)
{
    Complex c_final;
    c_final.real = c1.real + c2.real;
    c_final.imaginary = c1.imaginary + c2.imaginary;

    return c_final;
}
