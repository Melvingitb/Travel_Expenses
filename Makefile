CC = gcc
program: PublicTransitFees.c display.c getAllowable.c header.h livingExpense.c main.c time.c transport.c 
	$(CC) -o expense PublicTransitFees.c display.c getAllowable.c header.h livingExpense.c main.c time.c transport.c 