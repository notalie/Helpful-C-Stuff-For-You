/*
    This File exists to teach people about while loops. 
 __       __          .--.
(  ""--__(  ""-_    ,' .-.\        *
 "-_ __  ""--__ "-_(  (^_^))      /
    (  """--___""--__" )-'(      /
     "-__      ""---/ ,(., )__o-/,  
         """----___(.'.   /--"--'
                   ("-_"/(    /
                    \   \ \
                     `.  \ |
                       \  \/
                       ||  \
                     ,-'/`. \
                     ) /   ) \  
                     |/    `-.\
                              `\
    "That other one took a >WHILE< to do oops (haha pun funny funny), also this bitch naked"
*/

#include <stdio.h>

int main(int argc, char** argv) {
    /*
        A WHILE loop is similar to a FOR loop 
        RECALL: for(Setup; Test; Update) {} - For loop structure
        With a while loop instead of having an Update or Setup we 
        instead only have a Test variable making it possible to create our own 
        Updates and conditions to be a while loop. 
        NOTE: Variables that will change must be defined OUTSIDE the while loop otherwise 
            they will continuously be redefined each while loop, see While Loop 0
    */
    printf("Example While Loop 0\n");
    int x = 0;
    while(x < 5) {
        int a = 0;
        printf("%2d", a);
        // Notice how the a value does not change because it's being
        // redefined as a = 0 each execution of the while loop
        a++;
        x++;
    }

    printf("\nExample While Loop 1\n");
    //I am going to recreate For Loop 1 from 2.1.c
    int i = 0;
    //Test of i < 3, checked after each execution of the while loop
    while(i < 3) {
        //Print 
        printf("%2d", i);
        //Increase i by 1 after printing i
        i++;
    } //Execution has finished, check Test

    printf("\nExample While Loop 2\n");
    //This while loop will demonstrate that it is possble to create our Updates
    int a = 0,b = 0;
    //Like While Loop 1, the Test is a < 5 but this time a and b both exist
    while(a < 5) {
        printf("A: %2d B: %2d\n", a, b);
        a++;
        b += 5;
    }

    printf("Example While Loop 3\n");
    //Sometimes you might want to have an infinite while loop that will only break on a certain condition, 
    //to do this we will utilise the break; statement
    int list[5] = {1,2,3,4,5};
    int y = 0;
    //Test will always be true if > 0 so 1 will always be true
    while(1) {
        if(list[y] == 4) {
            printf("This is the line before the while loop breaks, the Y value is %d and the list item is %d\n", 
                y, list[y]);
            break;
            //exit the while loop
        }
        y++;
    }
    return 0;
}