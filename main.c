/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include "schneids14.h"
#include "schmedak15.h"

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  // Check the command line arguments.
  if(argc != 1 && argc != 2) {
    printf("usage: %s <number> or %s \n", argv[0], argv[0]);
    return -1;
  }

  robPrintAscii();

  if  (argc == 2) {

    // Convert the command-line argument to a number.
    int num = atoi(argv[1]);

    robPrintMessage(num);

    schneids14();

    schmedak15();
  }

  return 0;
}
