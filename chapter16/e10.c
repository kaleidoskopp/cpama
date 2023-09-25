#include <stdio.h>
#include <stdbool.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

int calculate_area(struct rectangle r);
struct point calculate_center(struct rectangle r);
struct rectangle move_rectangle(struct rectangle r, int x, int y);
bool in_rectangle(struct rectangle r, struct point p);

int main(void)
{
    struct rectangle r = {{0, 0}, {50, 60}};
    printf("Area: %d\n", calculate_area(r));
    struct point p = calculate_center(r);
    printf("Center: x: %d, y: %d\n", p.x, p.y);
    struct rectangle r2 = move_rectangle(r, 10, 10);
    printf("--------------------------\n");
    printf("Moved:\nupper left x: %d\nupper left y: %d\nlower right x: %d\nlower right y: %d\n", r2.upper_left.x, r2.upper_left.y, r2.lower_right.x, r2.lower_right.y);
    printf("--------------------------\n");
    struct point p2 = {20,10};
    printf("Inside: %d\n", in_rectangle(r,p2));
    return 0;
}

int calculate_area(struct rectangle r)
{
    // base * height
    return (r.lower_right.x - r.upper_left.x) * (r.lower_right.y - r.upper_left.y);
}

struct point calculate_center(struct rectangle r)
{
    struct point p = {
        (r.lower_right.x - r.upper_left.x) / 2,
        (r.lower_right.y - r.upper_left.y) / 2
    };

    return p;
}

struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
    r.upper_left.x += x;
    r.lower_right.x += x;

    r.upper_left.y += y;
    r.lower_right.y += y;

    return r;
}

bool in_rectangle(struct rectangle r, struct point p)
{
    if (p.x >= r.upper_left.x &&
        p.x <= r.lower_right.x &&
        p.y >= r.upper_left.y &&
        p.y <= r.lower_right.y){
            return true;
        }
    return false;
}
