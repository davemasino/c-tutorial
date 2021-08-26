#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temp table */
    upper = 110;    /* upper limit */
    step = 5;      /* step size */

    printf("%s\t  %s", "CEL", "FAHR\n") ;
    celsius = lower;
    while (celsius <= upper) {
        fahr= (9.0/5.0 * celsius) + 32.0;
        printf("%3.0f\t%3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}