#include <stdlib.h>
#include <stdio.h>

int chek (int time,float deposit)
{
    if ((deposit >= 10000) && (time <= 365) && (time >= 0)) {
        return 1;
    } else {
        return 0;
    }
}

float chekdata (int time,float deposit)
{		
    float k = 0;
    if (time <= 30) {
        k = deposit - deposit / 100 * 10;
    } else if (time <= 120) {
        if (deposit < 100000) {
            k = deposit + deposit / 100 * 2;
        } else {
            k = deposit + deposit / 100 * 3;
        }
    } else if (time <= 240) {
          if (deposit < 100000) {
            k = deposit + deposit / 100 * 6;
         } else {
            k = deposit + deposit / 100 * 8;
         }
    } else if (time <= 365 ) {
          if (deposit < 100000) {
             k = deposit + deposit / 100 * 12;
		 } else {
			 k = deposit + deposit / 100 * 15;
		 }
    }
    return k;
}

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
