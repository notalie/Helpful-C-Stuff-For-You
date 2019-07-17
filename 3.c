/*
                \||/
                |  @___oo
      /\  /\   / (__,,,,|
     ) /^\) ^\/ _)
     )   /^\/   _)
     )   _ /  / _)
 /\  )/\/ ||  | )_)
<  >      |(,,) )__)
 ||      /    \)___)\
 | \____(      )___) )___
  \______(_______;;; __;;;
    "I'm so tired"
    The purpose of this code is to show how pointers work and how they can 
    be used to change variables without the need to return them
*/

#include <stdio.h>

//Swaps the two values using pass by copy/value
void swap1(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//Swaps the two values using pass by reference/pointer
void swap2(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char** argv) {
    int a = 1;
    int b = 2;
    printf("Initial Values:\t A: %d\t B: %d\n", a, b);
    swap1(a, b);
    //Notice how how they don't change after being swapped even though swap1 
    //should swap them
    printf("After Swap 1:\t A: %d\t B: %d\n", a, b);
    swap2(&a, &b);
    //After this swap the numbers will change because we passed in a pointer 
    //to the values
    printf("After Swap 2:\t A: %d\t B: %d\n", a, b);
    return 0;
}