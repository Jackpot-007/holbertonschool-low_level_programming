#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("%d ", n);
    if (n > 0)
        printf("es positivo\n");
    else if (n == 0)
        printf("es cero\n");
    else
        printf("es negativo\n");

    return (0);
}
