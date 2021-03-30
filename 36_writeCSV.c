//PROGRAM TO WRITE .csv FILES.
// Written by -- ANCHAL BHAGAT
//30-03-2021

#include <stdio.h> //Pre-Process Directive to Include standard input output header files.
#include <stdlib.h>//Pre-Process Directive to Include standard library header files.
#include <string.h>//re-Process Directive to Include string header files. 

int main() //Main function body starting
{ 
    FILE* fp = fopen("C:\\cprograms\\AnchalBhagat_C_Program_Repository\\36_writeCSV.c "a+"); //File path.

    char name[50]; 
    int rollno, marks; 

    if (!fp) { 
        // Error in file opening 
        printf("Can't open file\n"); 
        return 0; 
    }

    //Taking input from the user for the new record to be added.   
    printf("\nEnter Student Name\n"); 
    scanf("%s", &name); 

    printf("\nEnter Roll Number\n"); 
    scanf("%d", &rollno); 

    printf("\nEnter Attendance\n"); 
    scanf("%d", &marks); 


    // Saving data in file 
    fprintf(fp, "%s, %d, %d\n", name, 
            rollno, marks); 

    printf("\nNew student deatils added."); 

    fclose(fp); 
    return 0; 

} //main function body ends