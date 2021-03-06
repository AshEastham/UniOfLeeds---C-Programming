/*
COMP 1711 Assignment 1 (5%) Timetable assignment to get used to the edit-compile-execute cycle at the Unix command-line.  
By Ash Eastham.
*/

// Include standard I/O libary
#include <stdio.h>

// main routine
int main (int argc, char **argv)
  { // main start
	    
  		//Timetable

	    printf("[_____________________________________________________________________________________________________________________]\n");	
		printf("[	    TIME				MON 				TUES 				WED 			  THURS 				FRI       ]\n");
		printf("[_____________________________________________________________________________________________________________________]\n");
		printf("[------------------][------------------][-----------------][------------------][------------------][------------------]\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||     COMP1421     |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||    Tutorial 1    |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||  WEEKS 1-5,7-11  |\n");
		printf("|       09:00      ||                  ||                 ||                  ||                  || EC STONER ACTIVE |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||   LEARNING LAB   |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||     (9.30A)      |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("[------------------][------------------][-----------------][------------------][------------------]|                  |\n");
		printf("[------------------][------------------][-----------------][------------------][------------------]|                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||   COMP Welcome   ||                 ||   COMP TUTORIAL  ||     COMP1911     ||     COMP1911     |\n");
		printf("|                  ||      Meeting     ||                 ||    Tutorial 1    ||     Lecture 1    ||     Lecture 2    |\n");
		printf("|                  ||        NEW       ||                 ||  WEEKS 1-5,7-11  ||  WEEKS 1-5,7-11  ||  WEEKS 1-5,7-11  |\n");
		printf("|       10:00      ||  UNDERGRADUATES  ||                 ||     LONG ROOM    ||  CHEMISTRY WEST  || ROGER STEVENS LT |\n");
		printf("|                  ||                  ||                 ||  DR MCEVOY ROOM  ||    BLOCK LT F    ||     17 (7.17)    |\n");
		printf("|                  ||      MEETING     ||                 ||                  ||      (G.74)      ||                  |\n");
		printf("|                  ||      WEEKS 0     ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||  ROGER STEVENS   ||                 ||                  ||                  ||                  |\n");
		printf("[------------------]|   LT 17(7.17)    |[-----------------]|                  ||                  ||                  |\n");
		printf("[------------------]|                  |[-----------------]|                  ||                  ||                  |\n");
		printf("|                  ||     COMP1711     ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||     Lecture 1    ||     COMP1421    ||                  ||                  ||     COMP1211     |\n");
		printf("|                  ||  WEEKS 1-5,7-11  ||     Lecture 1   ||                  ||                  ||     Lecture 2    |\n");
		printf("|                  ||  CHEMISTRY LT B  ||  WEEKS 1-5,7-11 ||                  ||                  ||  WEEKS 1-5,7-11  |\n");
		printf("|       11:00      ||      (2.17)      ||  ROGER STEVENS  ||                  ||                  || ROGER STEVENS LT |\n");
		printf("|                  ||                  ||   LT 25(12.25)  ||                  ||                  ||     17 (7.17)    |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("[------------------][------------------]|                 |[------------------][------------------]|                  |\n");
		printf("[------------------][------------------]|                 |[------------------][------------------]|                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||     COMPLVL1     |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||  EMPLOYABILITY   |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||     Lecture      |\n");
		printf("|       12:00      ||                  ||                 ||                  ||                  ||   WEEKS 4,7,9    |\n");
		printf("|                  ||                  ||                 ||                  ||                  || ROGER STEVENS LT |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||     18 (8.18)    |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("[------------------][------------------][-----------------][------------------][------------------]|                  |\n");
		printf("[------------------][------------------][-----------------][------------------][------------------]|                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||     COMP1711    ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||     Lecture 2   ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||  WEEKS 1-5,7-11 ||                  ||                  ||                  |\n");
		printf("|       13:00      ||                  ||     CHEMISTRY   ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||    WEST BLOCK   ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||    LT F(G.74)   ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("[------------------][------------------]|                 ||------------------][------------------][------------------]\n");
		printf("[------------------][------------------]|                 ||------------------][------------------][------------------]\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||     COMP1421     ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||     Lecture 2    ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||  WEEKS 1-5,7-11  ||                  |\n");
		printf("|       14:00      ||                  ||                 ||                  ||  CHEMISTRY LT B  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||      (2.17)      ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("[------------------][------------------][-----------------][------------------]|                  |[------------------]\n");
		printf("[------------------][------------------][-----------------][------------------]|                  |[------------------]\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||     COMP1011    ||     COMP1711     ||                  ||                  |\n");
		printf("|                  ||                  ||   Lab Class 1   ||   Lab Class 1    ||                  ||                  |\n");
		printf("|                  ||                  ||  WEEKS 1-5,7-11 ||  WEEKS 1-5,7-11  ||                  ||                  |\n");
		printf("|       15:00      ||                  ||   IRENE MANTON  ||    EC STONER     ||                  ||                  |\n");
		printf("|                  ||                  ||  NORTH CLUSTER  ||    DEC-10 LAB    ||                  ||                  |\n");
		printf("|                  ||                  ||      (7.96)     ||  (10.39) A & B   ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("[------------------][------------------||                 ||                  |[------------------][------------------]\n");
		printf("[------------------][------------------||                 ||                  |[------------------][------------------]\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||     COMP1211     ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||     Lecture 1    ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||  WEEKS 1-5,7-11  ||                  |\n");
		printf("|       16:00      ||                  ||                 ||                  || ROGER STEVENS LT ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||     17 (7.17)    ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("[------------------][------------------]|                 ||                  ||                  |[------------------]\n");
		printf("[------------------][------------------]|                 ||                  ||                  |[------------------]\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|       17:00      ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("|                  ||                  ||                 ||                  ||                  ||                  |\n");
		printf("[------------------][------------------][-----------------][------------------][------------------][------------------]\n");

		//Timetable end
	
    // return code
    return 0;
  } // main end
