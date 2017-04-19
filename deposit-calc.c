#include <stdlib.h>
#include <stdio.h>

int main()
{
    int time = 0;
    float deposit = 0;

    printf("Amount of deposits: ");
    scanf("%f", &deposit);

    printf("Term: ");
    scanf("%d", &time);

    if ((deposit >= 10000) && (time <= 365) && (time >= 0)) {
        if (time <= 30) {
             deposit = deposit - deposit / 100 * 10;
        } else if (time <= 120) {
            if (deposit < 100000) {
                deposit = deposit + deposit / 100 * 2;
            } else {
                deposit = deposit + deposit / 100 * 3;
            }
        } else if (time <= 240) {
            if (deposit < 100000) {
                deposit = deposit + deposit / 100 * 6;
            } else {
                deposit = deposit + deposit / 100 * 8;
            }
        } else if (time <= 365 ) {
            if (deposit < 100000) {
                deposit = deposit + deposit / 100 * 12;
			} else {
				deposit = deposit + deposit / 100 * 15;
			}
        }
    } else {
        return 0;
    }

    printf("%.2f\n", deposit); 

    return 0;
}
