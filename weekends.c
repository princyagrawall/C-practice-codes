//Use enum for weekdays and print one.
#include <stdio.h>

enum Days
{
    monday,
    tuesday,
    wednesday,
    thrusday,
    friday
};
int main(void)
{
    int d;
    enum Days;
    printf("enter weekday: ");
    scanf("%e",&d);
    printf("today is %e\n",d);
    return 0;
}
