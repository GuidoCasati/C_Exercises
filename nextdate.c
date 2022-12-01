
#include <stdio.h>

const int thirty[5] = {3, 5, 6, 7, 10};
const char * mon[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

typedef enum month{
 jan,
 feb, //
 mar,
 apr, //
 may,
 jun, //
 jul, //
 aug, //
 sep, oct,
 nov, //
 dec
} month;

typedef struct date
{
    month m;
    int d;
} date;

int is_eom(date dat) {
    for (int i = 0; i < 5; i++){
        if ((dat.m == thirty[i]) && dat.d == 30)
        {
            return 1;
        }
    }

    if ((dat.m == 1 && dat.d == 28) || dat.d == 31)
    {
        return 1;
    }

    return 0;

}

void printdate(date date)
{
    printf("%d - %s \n", date.d, mon[date.m]);
}

void nextday(date dat)
{
    printf("Input date is ");
    printdate(dat);

    date nextdate;

    if (is_eom(dat))
    {
        nextdate.d = 1;
        nextdate.m = (dat.m == 11) ? 0 : (dat.m + 1);
    }
    else
    {
        nextdate.d = dat.d + 1;
        nextdate.m = dat.m;
    }

    printf("Next date is ");
    printdate(nextdate);

}

int main()
{

    date d1 = {1, 28};
    date d2 = {2, 14};
    date d3 = {9, 31};
    date d4 = {11, 31};

    nextday(d1);
    nextday(d2);
    nextday(d3);
    nextday(d4);

    return 0;
}
