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

    if ((d >= 10000) && (g <= 365) && (g >= 0)) {
        if (g <= 30) {
             d = d - d / 100 * 10;
        } else if (g <= 120) {
                    if (d < 100000) {
                        d = d + d / 100 * 2;
                    } else {
                        d = d + d / 100 * 3;
                    }
                } else if (g <= 240) {
                            if (d < 100000) {
                                d = d + d / 100 * 6;
                             } else {
                                d = d + d / 100 * 8;
                             }
                        } else if (g <= 365 ) {
                                    if (d < 100000) {
                                        d = d + d / 100 * 12;
                                    } else {
                                       d = d + d / 100 * 15;
                                    }
                                 }

    return 0;
}
