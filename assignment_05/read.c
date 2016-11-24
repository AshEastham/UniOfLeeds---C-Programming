/*******************************************************************************************************************************************************************\
*																																								    *
*  COMP 1711 Assignment 5 (20%) File I/O and Processing - A simple decryption task to decrypt 3 text files, which are encrypted using the Caesar cipher.			*
*  By Ash Eastham.																																				    *
*                                                                                                                                                                   *
\*******************************************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

char *charBuffer = (char *) malloc(fileSize); //assumes we know the file size
float *floatBuffer = (float *) malloc(fileSize); //if floating numbers are used

int main(int argc, const char* *argv) { //main start
	//Reads in the required input file, to be entered on the command line.
	FILE *file;
	file = fopen(argv[1], "r"); //reads in the name of the file

	printf(argv[1]); //prints out the file name of the inputed file.
	printf("\n"); //forces file output to a new line.

	//ERROR HANDLERS HERE
	if (argc < 2) {
		printf("Please add a file name to the %s program", argv[0]);
	}

	else if (argc > 2) {
		printf("Too many parameters entered\n");
	}

	else {
		fseek(aFile, 0, SEEK_END); //move to end of file

		long fileSize = ftell(aFile); //finds the filesize
		rewind(aFile); //rewinds the file

		float *floatBuffer = (float *) malloc(fileSize); //allocates memory for a set of floats

		//reads floats in from disk, casts the buffer to void *
		long nRead = fread((void *) floatBuffer, 1, fileSize, aFile);

		//cross-check that it read in the right number
		if (nRead != fileSize) {
			printf("Couldn't read file\n"); //read failed
			return 0;
		}		
	}

	printf("\n"); //prints newline

	return 0;
}// main end