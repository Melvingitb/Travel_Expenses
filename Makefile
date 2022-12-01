CC = gcc
program: main.c PublicTransitFees.c display.c getAllowable.c header.h livingExpense.c time.c transport.c 
    $(CC) -Iinclude src/*.c -o expense