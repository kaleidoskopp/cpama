#include <stdio.h>

struct time{
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
    long seconds = 123456;


    struct time t = split_time(seconds);
    printf("seconds: %d\nminutes: %d\nhours: %d\n", t.seconds, t.minutes, t.hours);
    return 0;
}

struct time split_time(long total_seconds)
{
    struct time t;
    t.seconds = total_seconds % 60;
    t.minutes = total_seconds / 60 % 60;
    t.hours = total_seconds / 3600;
    return t;
}

