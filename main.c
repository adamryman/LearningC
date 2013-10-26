//
//  main.c
//  LearningC
//
//  Created by Adam Ryman on 10/4/13.
//  Copyright (c) 2013 Adam Ryman. All rights reserved.
//

#include <stdio.h>

int j, k;
int *ptr;
int my_array[] = {1,23,17,4,-5,100};

int arrayTest();
int pointerTest();

int main(int argc, const char * argv[])
{
    printf("Hello, World!\n");
    pointerTest();
    arrayTest();
    return 0;
}

int pointerTest(){
    j = 1;
    k = 2;
    ptr = &k;
    printf("\n");
    printf("j has the value %d and is stored at %p\n", j, (void *)&j);
    printf("k has the value %d and is stored at %p\n", k, (void *)&k);
    printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);
    return 0;
}

#include <stdio.h>

int arrayTest()
{
    int i;
    //ptr = &my_array[0];/* point our pointer to the first element of the array */
    ptr = my_array;
    printf("\n\n");
    for (i = 0; i < 6; i++)
    {
        printf("my_array[%d] = %d |",i,my_array[i]);
        
        //Different ways of adding to pointers
        //printf("ptr + %d = %d\n",i, *(ptr + i));
        printf("ptr + %d = %d\n",i, *ptr++);
        //The one below adds before the lookup and so it is always one ahead
        //printf("ptr + %d = %d\n",i, *(++ptr));
    }
    return 0;
}