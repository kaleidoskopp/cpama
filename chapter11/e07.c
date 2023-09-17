#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//int months[12] = {31, 3, 2, 2, 2, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int day_of_year, year, month, day;
    
    year = 2023;
    day_of_year = 256;

    split_date(day_of_year, year, &month, &day);

    printf("year: %d\nday: %d\nmonth: %d\n", year, day, month);

}

void split_date(int day_of_year, int year, int *month, int *day)
{
    
    int is_leap_year = 0;

    if (year % 400 == 0)
        is_leap_year = 1;
  
    // Else If a year is multiple of 100,
    // then it is not a leap year
    else if (year % 100 == 0)
        is_leap_year = 0;
  
    // Else If a year is multiple of 4,
    // then it is a leap year
    else if (year % 4 == 0)
        is_leap_year = 1;
    

    if(is_leap_year == 1){
        printf("Hello\n");
        months[1] = 29;
    }

    for(int i = 0; i < 12; i++){
        if(day_of_year >= months[i]){
            day_of_year -= months[i];
        }else{
            *month = i+1;
            *day = day_of_year;
            break;
        }
    }
}
