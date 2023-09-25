#include <stdio.h>
#include <stdbool.h>

struct color
{
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);


const struct color MAGENTA = {.red = 255, .blue = 255};

int main(void)
{
    struct color c1 = {255, 255, 255};
    struct color c2 = {100, 150, 200};

    printf("Equal? %d", equal_color(c1, c2));

    struct color c3 = brighter(c2);
    printf("\nBrighter\nred: %d\ngreen: %d\nblue: %d\n", c3.red, c3.green, c3.blue);

    c3 = darker(c2);
    printf("\nDarker\nred: %d\ngreen: %d\nblue: %d\n", c3.red, c3.green, c3.blue);

    return 0;
}

struct color make_color(int red, int green, int blue)
{
    if(red < 0) red = 0;
    if(green < 0) green = 0;
    if(blue < 0) blue = 0;

    if(red > 255) red = 255;
    if(green > 255) green = 255;
    if(blue > 255) blue = 255;

    struct color c = {red, green, blue};
    return c;
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    if (color1.red == color2.red &&
        color1.green == color2.green &&
        color1.blue == color2.blue)

        return true;

    return false;
}

struct color brighter(struct color c)
{
    if (c.red == 0 &&
        c.green == 0 &&
        c.blue ==  0)
    {
        c.red == 3;
        c.green == 3;
        c.blue == 3;
        return c;
    }

    if (c.red > 0 && c.red < 3) c.red = 3;
    if (c.green > 0 && c.green < 3) c.green = 3;
    if (c.blue > 0 && c.blue < 3) c.blue = 3;

    c.red /= 0.7;
    c.green /= 0.7;
    c.blue /= 0.7;

    if (c.red > 255) c.red = 255;
    if (c.green > 255) c.green = 255;
    if (c.blue > 255) c.blue = 255;
    
    return c;
}

struct color darker(struct color c)
{
    c.red *= 0.7;
    c.green *= 0.7;
    c.blue *= 0.7;

    return c;
}
