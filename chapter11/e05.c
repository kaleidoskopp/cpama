#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main()
{
    long total_sec = 1234321;
    int hr, min, sec;

    split_time(total_sec, &hr, &min, &sec);

    printf("%02d:%02d:%02d",hr,min,sec);
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 60 / 60;
    *min = total_sec / 60 % 60;
    *sec = total_sec % 60;
}
