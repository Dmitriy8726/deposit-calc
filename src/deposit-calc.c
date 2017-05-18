#include <stdlib.h>
#include <stdio.h>
#include "deposit.h"

int main()
{
    int time = 0;
    float deposit = 0;

    printf("Amount of deposits: ");
    scanf("%f", &deposit);

    printf("Term: ");
    scanf("%d", &time);

    if (chek(time, deposit) == 0) {
        return 0;
    } else {
         printf("%.2f\n", chekdata(time, deposit));
    }
    return 0;
}
