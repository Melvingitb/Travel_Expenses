CC = gcc
program: main.c header.h PublicTransitFees.c display.c getAllowable.c livingExpense.c time.c transport.c 
    $(CC) -Iinclude src/*.c -o expense