#include <stdlib.h>
#include <stdio.h>

int main()
{
    int g = 0;
    float d = 0;

    printf("Amount of deposits: ");
    scanf("%d", &d);

    printf("Term: ");
    scanf("%d", &g);

    if ((d >= 10000) && (g <= 365) && (g > 0)) {
        if (g <= 30) {
             d = d - d / 100 * 10;
        }

    return 0;
}
