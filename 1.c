/*
    Hello welcome to the first one of these files, I'm very bored lol.
          _,     _   _     ,_
      .-'` /     \'-'/     \ `'-.
     /    |      |   |      |    \
    ;      \_  _/     \_  _/      ;
   |         ``         ``         |
   |                               |
    ;    .-.   .-.   .-.   .-.    ;
     \  (   '.'   \ /   '.'   )  /
      '-.;         V         ;.-'
          `                 `
    
*/

#include <stdio.h>
#include <stdint.h>

//In this file we will cover different variable types

int main(int argc, char** argv) {
    /* Integers
        - integers (int) are full numbers meaning 
            that they cannot be converted to a float/decimal number
        Floats
        - if you want a integer with a decimal place, 
            you can define a variable to be type float
    */
    printf("Example integer\n");
    int x = 9;
    printf("%d -> Note the lack of decimal place\n", x/2);
    
    printf("Example float\n");
    float y = 9;
    printf("%f -> Note the decimal place!\n", y/2);

    /* Char
        - char, short for character is a single character
            and can be used to create strings since strings
            are basically just arrays of char values
    */
    printf("Example char\n");
    char c = 'a';
    printf("%c\n", c);

    /* Unsigned values (2010 STUFF)
        - unsigned values are positive numbers that 
            depending on the bit size will go back to zero/max size 
            when overflowing or going 'negative'
    */
    printf("Example unsigned values\n");
    uint8_t a = 0;
    uint8_t b = 255;
    printf("A: %d B: %d\n", a, b);
    b++;
    //Add 1 to b to overflow
    a--;
    //Subtract 1 from a to see what happens
    printf("A: %d B: %d\n", a, b);
    return 0;
}