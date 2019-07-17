/*
    This File exists to teach people about do while loops
            .-"""-.
           '       \
          |,.  ,-.  |
          |()L( ()| |
          |,'  `".| |
          |.___.',| `
         .j `--"' `  `.
        / '        '   \
       / /          `   `.
      / /            `    .
     / /              l   |
    . ,               |   |
    ,"`.             .|   |
 _.'   ``.          | `..-'l
|       `.`,        |      `.
|         `.    __.j         )
|__        |--""___|      ,-'
   `"--...,+""""   `._,.-' 
    "Linux Penguin is a qt"
*/

#include <stdio.h>

/*
    Do while loops are basically for loops but with one more execution on them as it does the loop 
    before checking the Test
    do while loop structure
    do { 

    } while();
*/

int main(int argc, char** argv) {
    printf("Do While Example\n");

    int i = 0;
    do {
        printf("%2d", i);
        i++;
    //In a normal while loop the i would print only to 3, but since the Test happens 
    //after the execution rather than in between, it allows for an extra execution to happen
    } while(i < 4);
    
    printf("\n");
    return 0;
}