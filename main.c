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

int pointerTest();

int main(int argc, const char * argv[])
{
    printf("Hello, World!\n");
    pointerTest();
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

