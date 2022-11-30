CC = gcc
program: PulicTransitFees.c display.c getAllowable.c header.h livingExpense.c main.c time.c transport.c 
    $(CC) o expense PulicTransitFees.c display.c getAllowable.c header.h livingExpense.c main.c time.c transport.c 