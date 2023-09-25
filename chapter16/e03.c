#include <stdio.h>

struct complex{
        double real;
        double imaginary;
    };

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex c1, struct complex c2);

int main(void)
{
    
    struct complex c1, c2, c3;

    c1 = make_complex(1.0, 2.0);

    //printf("real: %.1f, imaginary: %.1f", c1.real, c1.imaginary);

    c2 = make_complex(1.0,3.0);

    c3 = add_complex(c1, c2);
    
    printf("real: %.1f, imaginary: %.1f", c3.real, c3.imaginary);


    return 0;
}

struct complex make_complex(double real, double imaginary)
{
    struct complex c;
    c.real = real;
    c.imaginary = imaginary;
    return c;
}

struct complex add_complex(struct complex c1, struct complex c2)
{
    struct complex c_final;
    c_final.real = c1.real + c2.real;
    c_final.imaginary = c1.imaginary + c2.imaginary;

    return c_final;
}
