# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o schneids14.o robot.h schneids14.h
	$(CC) -o robots.out main.c robot.o schneids14.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

schneids14.o:	schneids14.c schneids14.h
	$(CC) -c schneids14.c
