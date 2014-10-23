/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw, Nathan Schmedake
 * @since August 2013
 *
 */

#include "robot.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;

  printf("Seth Schneider and Nathan Schmedake ");

  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("loves robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(int num)
{
  int i;
  char * start;
  char * blank = "          ";
  for(i = 0; i < num; i++){
    if((start = malloc(strlen(blank)) + 1) != NULL){
      strcat(start,blank);
    }
    printf("%s the space in start \n", start);
    printf("%s    i_i    \n"
	   "%s   [X_&]   \n"
	   "%s  /|___|\\ \n"
	   "%s   d   b   \n",start, start, start, start);

    blank = blank -10;
  }

}
