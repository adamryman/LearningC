//
//  main.c
//  LearningC
//
//  Created by Adam Ryman on 10/4/13.
//  Copyright (c) 2013 Adam Ryman. All rights reserved.
//

#include <stdio.h>

//Method stubs
int array_test();
int pointer_test();
int string_test();
char *my_strcpy();
int my_strcpy_test();

int main(int argc, const char * argv[])
{
    printf("Hello, World!\n");
    
    pointer_test();
    array_test();
    string_test();
    my_strcpy_test();
    
    return 0;
}

int pointer_test(){
    printf("Pointer Test\n");
    
    int j, k;
    int *ptr;
    
    j = 1;
    k = 2;
    ptr = &k;
    
    printf("j has the value %d and is stored at %p\n", j, (void *)&j);
    printf("k has the value %d and is stored at %p\n", k, (void *)&k);
    printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);
    
    printf("\n");
    return 0;
}

int array_test()
{
    printf("Array Test\n");
    
    int *ptr;
    int my_array[] = {1,23,17,4,-5,100};
    
    int i;
    //ptr = &my_array[0];/* point our pointer to the first element of the array */
    ptr = my_array;
    for (i = 0; i < 6; i++)
    {
        printf("my_array[%d] = %d |",i,my_array[i]);
        
        //Different ways of adding to pointers
        //printf("ptr + %d = %d\n",i, *(ptr + i));
        printf("ptr + %d = %d\n",i, *ptr++);
        //The one below adds before the lookup and so it is always one ahead
        //printf("ptr + %d = %d\n",i, *(++ptr));
    }
    
    printf("\n");
    return 0;
}

int string_test()
{
    printf("String Test\n");
    
    char strA[80] = "A string to be used for demonstration purposes";
    char strB[80] = "12345678901234567890123456789012345678901234567890";
    
    char *pA; /* a pointer to type character */
    char *pB; /* another pointer to type character */
    puts(strA); /* show string A */
    pA = strA; /* point pA at string A */
    puts(pA); /* show what pA is pointing to */
    pB = strB; /* point pB at string B */
    putchar('\n'); /* move down one line on the screen */
    while(*pA != '\0') /* line A (see text) */
    {
        *pB++ = *pA++; /* line B (see text) */
        
        //Or | I should learn how the order is parsed
        
        //*pB = *pA;
        //pB++;
        //pA++;
    }
    *pB = '\0'; /* line C (see text) */
    puts(strB); /* show strB on screen */
    
    printf("\n");
    return 0;
}

char *my_strcpy(char *destination, const char *source) {
    //*source = 'X'; This will fail because of the const on *source
    char *p = destination;
    while (*source != '\0')
    {
        *p++ = *source++;
        
        //Or
        
        //*p = *source
        //p++
        //source++;
    }
    *p = '\0';
    return destination;
}

int my_strcpy_test() {
    printf("String Copy Test\n");
    
    char strC[80] = "A string to be used for demonstration purposes";
    char strD[80] = "12345678901234567890123456789012345678901234567890";
    
    *my_strcpy(strD, strC);
    puts(strD);
    
    printf("\n");
    return 0;
}

int pointer_increment_test() {
    
}