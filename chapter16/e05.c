#include <stdio.h>

struct date{
    int month;
    int day;
    int year;
};

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{

    struct date d1 = {9, 25, 2024};
    struct date d2 = {9, 25, 2024};

    int doy = day_of_year(d1);

    printf("day of year: %d\n", doy);

    int compared = compare_dates(d1, d2);

    printf("comparison: %d\n", compared);


    return 0;
}

int day_of_year(struct date d)
{
    /*
    *   Fix the leap year
    */
    int is_leap_year = 0;

    if (d.year % 400 == 0)
        is_leap_year = 1;
  
    // Else If a year is multiple of 100,
    // then it is not a leap year
    else if (d.year % 100 == 0)
        is_leap_year = 0;
  
    // Else If a year is multiple of 4,
    // then it is a leap year
    else if (d.year % 4 == 0)
        is_leap_year = 1;
    

    if(is_leap_year == 1){
        months[1] = 29;
    }else{
        months[1] = 28;
    }

    /*
    * Calculate the day of year by adding months until you have to add the day of the month
    */

    int day = 0;

    for(int i = 0; i < d.month; i++){
        if(i != d.month-1){
            day += months[i];
        }else{
            day += d.day;
        }
    }

    return day;
}

/*
* Returns –1 if d1 is an earlier date than d2, +1 if d1 is a later date than d2, and 0 if d1 and
* d2 are the same.
*/
int compare_dates(struct date d1, struct date d2)
{
    /*
    * If a year is greater than the other, return already
    */
    if(d1.year < d2.year) return -1;
    else if(d1.year > d2.year) return 1;

    /*
    * If it's the same year, compare the months
    */
    if(d1.month < d2.month) return -1;
    else if(d1.month > d2.month) return 1;

    /*
    * If it's the same month, compare the days
    */
    if(d1.day < d2.day) return -1;
    else if(d1.day > d2.day) return 1;

    return 0;
    /*
    int days1 = day_of_year(d1);
    int days2 = day_of_year(d2);

    if(days1 < days2) return -1;
    else if(days1 > days2) return 1;
    return 0;
    */
}

