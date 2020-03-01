/*
       __
    o-''|\_____/)
    \_/|_)     )
        \  __  /
        (_/ (_/  
    Cute little doggo I found
    This file is an introduction to S T R U C T S
*/
#include <stdio.h>
#include <stdlib.h>

/* Struct????
    A struct is a data type that contains different types inside of it.
    Pretty simply put, they're classes. Let's see some examples!
*/
int main(int argc, char** argv) {
    //Let's define a struct
    struct Person {
        char* name;
        int age;
    };

    //We now want to create the struct, we do this via big scary MALLOC
    //stdlib.h is required in order to call malloc! Avoid warnings this way.
    //Creating a struct is just like instantiating an object in python or java, it is now on the heap
    struct Person* p = malloc(sizeof(struct Person));
    
    //now we can edit the associated values of the struct!
    p->age = 4;
    char* name = "Hamish";
    p->name = name;

    printf("%d, %s\n", p->age, p->name);

}
