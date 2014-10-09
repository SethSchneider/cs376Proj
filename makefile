# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h schmedak15.h
	$(CC) -o robots.out main.c robot.o schmedak15.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c
schmedak15.o: schmedak15.h schmedak15.c
	$(CC) -c schmedak15.c
