#include <stdio.h>

#define RECTANGLE 1
#define CIRCLE 2

const double PI = 3.141592;

struct point { int x, y; };

struct shape
{
    int shape_kind;      /* RECTANGLE or CIRCLE */
    struct point center; /* coordinates of center */
    union
    {
        struct
        {
            int height, width;
        } rectangle;
        struct
        {
            int radius;
        } circle;
    } u;
} s;

double compute_area(struct shape s);
struct shape move_shape(struct shape s, int x, int y);
struct shape scale_shape(struct shape s, double c);

int main()
{
    struct point p = {
        .x = 50,
        .y = 50
    };

    struct shape s = {
        .shape_kind = CIRCLE,
        .center = p,
        .u.circle.radius = 12,
    };

    printf("Area: %.2f", compute_area(s));
    return 0;
}

double compute_area(struct shape s)
{
    if(s.shape_kind == RECTANGLE){
        return s.u.rectangle.height * s.u.rectangle.width;
    }
    if(s.shape_kind == CIRCLE){
        return PI * (s.u.circle.radius * s.u.circle.radius);
    }

    return -1;
}

struct shape move_shape(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;
    return s;
}

struct shape scale_shape(struct shape s, double c)
{
    if(s.shape_kind == RECTANGLE)
    {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    }
    else if(s.shape_kind == RECTANGLE){
        s.u.circle.radius *= c;
    }
    return s;
}
