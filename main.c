//
//  main.c
//  LearningC
//
//  Created by Adam Ryman on 10/4/13.
//  Copyright (c) 2013 Adam Ryman. All rights reserved.
//

#include <stdio.h>

//Method stubs
void array_test();
void pointer_test();
void string_test();
void pointer_increment_test();
int my_strcpy_test();
void int_copy_test();

char strlen();
char strcat();
char strchr();

int main(int argc, const char * argv[])
{
    printf("Hello, World!\n");
    
    pointer_test();
    array_test();
    string_test();
    my_strcpy_test();
    pointer_increment_test();
    int_copy_test();
    
    return 0;
}

void pointer_test(){
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
}

void array_test()
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
}

void string_test()
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
}

void pointer_increment_test() {
    printf("Pointer Increment Test\n");
    
    char strE[80] = "BlueBlueBlue";
    char *i = strE;
    char *j = strE;
    char *k = strE;
    char *m = strE;
    
    printf("Orginal | %s\n", strE);

    *i++;
    printf("*p++ | %s\n", i);
    
    j++;
    printf("p++ | %s\n", j);
    
    (*k)++;
    printf("(*p)++ | %s\n", k);
    
    (m)++;
    printf("(m)++ | %s\n", m);

    
    
    printf("\n");
}

void int_copy(int *destination, int *source, int nbr){
    for (int i = 0; i < nbr; i++){
        *destination++ = *source++;
    }
}

void int_copy_test(){
    printf("Int Copy Test\n");
    
    int int_arrayA[6] = {1,23,17,4,-5,100};
    int int_arrayB[6];
    int_copy(int_arrayB, int_arrayA, 6);
    
    for (int i = 0; i < 6; i++)
    {
        printf("my_array[%d] = %d \n",i,int_arrayB[i]);
    }
    
    printf("\n");
}

char *my_strcpy_array(char dest[], char source[]) {
    int i = 0;
    while (source[i] != '\0')
    {
        dest[i] = source[i];
        i++; }
    dest[i] = '\0';
    return dest;
}
