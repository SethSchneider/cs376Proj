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
void robPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  for(i = 0; i < 3; i++){
   
    printf("%s    i_i    \n"
	   "%s   [X_&]   \n"
	   "%s  /|___|\\ \n"
	   "%s   d   b   \n",blank, blank, blank, blank);

    blank = blank -10;
  }

}
