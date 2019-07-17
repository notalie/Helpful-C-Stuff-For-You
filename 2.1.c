/*
    This File exists to teach people about for loops. 
    I mean you've done 1001/2010 so surely you don't need this one.

(*・∀・*)人(*・∀・*)
    "I literally can't believe I'm doing this hahahaa help"
*/

#include <stdio.h>

int main(int argc, char** argv) {
    //Don't worry about the data structure char* for now
    char list[3] = "abc";

    printf("For Loop Demonstration\n");
    /* For loops can be used to iterate (fancy word for read/process each element) 
        through different structures
        （☉∀☉）
        The structure of a for loop:
        For loops are structured the following way
        for(Setup; Test; Update) {}
        - Setup is the initial value you set e.g. i=0
        - Test is what is tested before each execution of the 
            for loop e.g. is i < 5?
        - Update will update the setup value before or after each execution
            of the for loop
    */
    //We can see these for loops in action here!
    for(int i = 0; i < 3; i++) {
        printf("%3d", i);
    }
    printf("\n");
    //To access arrays we can use for loops to access each element in an array
    for(int i = 0; i < 3; i++) {
        //print the char value in the list at i value
        printf("%3c", list[i]);
    }
    printf("\n-------------------\n");
    printf("For Loop Demonstration\n");
    return 0;
}