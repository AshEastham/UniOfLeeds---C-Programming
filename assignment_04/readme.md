*****************
**DOCUMENTATION**
*****************

Procedural Programming Assignment 04 - Modular Programming - Units and Functions
Author: Ash Eastham 

Libraries used: stdio.h, "print.h"

File(s):
Name(s):  myhexdump, -c, hexdump.o, input.txt, makefile, print.c, print.h, print.o
Type(s):  Program (application/x-executable), Program (application/x-executable), Document (application/x-object),  Text (text/plain), Text (text/x-makefile), Text (text/x-csrc), Text (text/x-chdr), Document (application/x-object).
Size(s):  13.9 kB, 8.6 kB, (variable), 188 B, 2.9 kB, 616 B, 2.4 kB
Modified: Fri 11 Nov 2016

****************
**INSTRUCTIONS**
****************

To run the program simply open a terminal window and navigate to the directory
where the folder has been downloaded.  You can do this by using the cd command.

cd <folder path>

To ensure the utility is compiled and ready for us firstly:
-Once you have changed directory, to the assignment_04 directory in the terminal window simply enter, make and press the return key on your keyboard.  This will compile the myhexdump executable.  Then please type make and press enter again, you should see an on screen message in the terminal window saying "make: 'myhexdump' is up to date."

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Once you've entered the make command, and have seen the up to date message, simply enter one of three options:

Hexadecimal:
./myhexdump [required_file] **(In our case we will be using the input.txt file for this.  You can change the text in the input.txt file if you'd like, or you could analyse a different file of your choosing.)**

Decimal:
./myhexdump -d [required_file] **

Formatted Characters:
./myhexdump -c [required_fille] ** (INCOMPLETE)

Once you've typed in the required command, specifying the correct file, it will print out the file in hexadecimal, decimal or formatted characters as chosen.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------