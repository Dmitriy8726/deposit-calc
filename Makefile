bin/deposit:build/deposit.o build/deposit-calc.o
    -gcc -Wall -Werror -MP -MMD -c build/deposit.o build/deposit-calc.o -o deposit
build/deposit.o: deposit.h deposit.c
    -gcc -Wall -Werror -MP -MMD -c src/deposit.c -o deposit.o
    
