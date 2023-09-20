#include <stdio.h>

#define LEN 10

int main(void)
{
    char *months[] = {"January", "February", "March", "April",
                      "May", "June", "July", "August",
                      "September", "October", "November", "December"};
    char date[LEN+1];
    int day;
    int month;
    int year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%s %d, %d", months[month-1], day, year);

    return 0;
}