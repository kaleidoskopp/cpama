#include <stdio.h>

int powr(int num, int power);
float volume(int radius);

int main(void)
{
    int sphere_radius = 10;
    printf("Volume: %.2f", volume(sphere_radius));
    return 0;
}

int powr(int num, int power)
{
    int res = 1.0f;
    for(int i = 0 ; i < power ; i++){
        res = num*res;
    }
    return res;
}

float volume(int radius)
{
    float vol;
    vol = 4.0f / 3.0f * 3.1416f * powr(radius, 3);
    return vol;
}
