/*******************************************************************************************************************************************************************\
*																																								    *
*  COMP 1711 Assignment 4 (20%) Modular Programming - Use units and functions to replicate the core functionality of the hex dump utility.						   	*
*  By Ash Eastham.																																				    *
*                                                                                                                                                                   *
\*******************************************************************************************************************************************************************/

//Include standard libraries
#include <stdio.h>
#include "print.h"

// routine to print out in hexadecimal format
void printHexadecimal(int nBytes, unsigned char *data) {
  int i;
  int gap = 7; //creates a gap every 8 pairs of hex
  int lineBreak = 15; //creates a line break after 16 pairs of hex
  int offset = 0; 

  for (i = 0; i < nBytes; i++, *data++){ //increments through a given file's individual characters and prints out it's hex value.
 	if (i == offset) {
		printf("%06x   ", i); //shows the position of the bits before the hex value
		offset = offset + 16; //takes the offset variable and adds 16.
	}
    printf("%x ", *data); //displays the hex value

	//creates a new line after 16 pairs of hex.
    if (i == lineBreak) {
    	printf("\n");
    	lineBreak = lineBreak + 16;
    }

    //creates a space every 8 pairs of hex.
	if (i == gap) {
		printf(" ");
		gap = gap + 16;
	}
  }
  printf("\n"); //linebreak to force terminal prompt below hex.
 }

// routine to print out in decimal format
void printDecimal(int nBytes, unsigned char *data) {

	unsigned short *datashort = (unsigned short*) data; //convert char into unsigned short so we can display the decimal value

	int i;
	int lineBreak = 7; //variable to force data onto a new line.
	int offset = 0; //variable for the offset

	for (i = 0; i < nBytes/2; i++) {
		if (i == offset) {
			printf("%06x ", i); //tracks and prints out the position in bits of the file i.e 000008
			offset = offset + 8; //takes the offset and adds 8 to it.
		}

		printf("%05d ", *datashort); //prints the decimall in 5 digit blocks after the first, 6 digit counter.
		*datashort++; //increments data short.

		//moves the data to a new line every 8 blocks of digits.
		if (i == lineBreak) { 
			printf("\n");
			lineBreak = lineBreak + 8; //takes the value of the lineBreak variable and adds eight.
		}
	}
	printf("\n"); //linebreak to force terminal prompt below hex.
}

// routine to print out in the formatted character output.
void printCharacter(int nBytes, unsigned char *data) {
	//loop that loops through all characters in input.txt file and converts/outputs in character format.

}