# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc


robots.out:	main.c robot.o schneids14.o robot.h schneids14.h schmedak15.h schmedak15.o
	$(CC) -o robots.out main.c robot.o schneids14.o schmedak15.o

schneids14.o:	schneids14.c schneids14.h
	$(CC) -c schneids14.c

robot.o:	robot.c robot.h
	$(CC) -c robot.c

schmedak15.o: schmedak15.h schmedak15.c
	$(CC) -c schmedak15.c
