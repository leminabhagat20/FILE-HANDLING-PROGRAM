# FILE-HANDLING-PROGRAM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: LEMINA BHAGAT

*INTERN ID*: CT04WE100

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

#DESCRIPTION:This C program demonstrates how to perform basic file operations such as creating a file, writing data into it, appending new data, and reading the contents of the file. The program uses the standard input/output library <stdio.h>, which provides functions like fopen, fprintf, fgets, and fclose—all essential tools for file management in C. The goal of this program is to show how a text file, named notes.txt, can be manipulated through different stages of file handling, which is a vital part of many software applications that require saving data permanently.

The program starts by opening a file in "write" mode using the fopen function. This mode is denoted by "w" and is used to create a new file or overwrite an existing one. If the file doesn't exist, it will be created automatically. If it does exist, all previous contents will be erased. The file pointer file is used to access and manipulate the file. After opening the file, two lines of text are written to it using the fprintf function. These lines include "This is line 1 (created)." and "This is line 2 (written)." The fprintf function works just like printf, except it directs the output into a file instead of the console. Once the data is written, the file is closed using fclose to ensure all changes are properly saved and to free system resources.

The second part of the program reopens the same file, but this time in "append" mode, which is represented by "a". This mode allows the user to add new content to the end of the existing file without deleting any of the current content. Again, fprintf is used to write two more lines: "This is line 3 (appended)." and "This is line 4 (appended)." This demonstrates how existing data in files can be preserved while adding new information—something commonly seen in applications like logs, notes, and other text-processing programs. Once the new data is appended, the file is closed again using fclose.

In the final stage of the program, the file is opened in "read" mode ("r") to display its contents to the user. The program uses a loop along with the fgets function to read each line from the file into a character array called line. The fgets function reads the file line by line until the end is reached, and each line is printed to the console using printf. This allows the user to see the final contents of the file, which includes both the original written lines and the appended ones. After reading the file, it is closed one final time.

This program clearly demonstrates the fundamental operations that are often needed when dealing with files: creating, writing, appending, and reading. Understanding these operations is crucial for developing applications that involve data storage, configuration settings, logs, or user input. It also teaches important programming habits such as checking for successful file access, closing files properly, and using appropriate file modes. Overall, this program provides a simple yet powerful introduction to file handling in C, and serves as a practical foundation for more advanced file-based projects in the future.

#OUTPUT:

