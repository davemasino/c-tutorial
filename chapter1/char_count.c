#include <stdio.h>

/* count chars in input; v2 */
int main ()
{
    double nc;
    for (nc = 0; getchar() != EOF ; ++nc)
        ;

    printf("%0.f\n", nc);
}