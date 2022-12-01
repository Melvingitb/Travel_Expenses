CC = gcc
program: src/main.c include/header.h src/PublicTransitFees.c src/display.c src/getAllowable.c src/livingExpense.c src/time.c src/transport.c
    $(CC) -Iinclude src/*.c -o expense