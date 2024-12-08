#include<stdio.h>
#include<stdlib.h>

int main() {

     printf("Now for Malloc : \n\n ");
    int *x = (int*)malloc(5 * sizeof(int)); 
    // Allocating memory for 5 integers
  
    
    int size = 5 * sizeof(int); 
    // Calculating total size of allocated memory
    printf("Size is: %d bytes\n", size);

     *x = 5;
  // Storing value in the first integer of the allocated memory
    printf("Value of x0 is: %d\n", *x); 
    //koe value nhi denge to garbage value ayegi
   *(x+3) = 10; 
    printf("Value of x1 is: %d\n", *(x+1)); //garbage value ayegi
    printf("Value of x2 is: %d\n", *(x+2)); //garbage value ayegi
    printf("Value of x3 is: %d\n\n", *(x+3)); 


   printf("Now for Calloc : \n\n ");

    int* y=calloc(5,sizeof(int));
    int size2 = 5 * sizeof(int);
    printf("Size is: %d bytes\n", size2);
    *y=10;
    printf("Value of y0 is: %d\n", *y);
    //koe value nhi denge to zerovalue ayegi

     *(y+3) = 20; 
    printf("Value of y1 is: %d\n", *(y+1));//zero ayega 
    printf("Value of y2 is: %d\n", *(y+2));//zero ayega 
     printf("Value of y3 is: %d\n", *(y+3)); 
     printf("Value of y7is: %d\n", *(y+7)); //7 nhi h 
  
    y = realloc(y, 8 * sizeof(int));
    //realloc krke size 5 se 8 krdi
    *(y+7) = 200; 
    printf("Value of y7is: %d\n\n", *(y+7)); 

    printf("After FREE :\n\n");

     free(x);
      printf("Value of x1 is: %d\n", *(x+1)); 
     printf("Value of x2 is: %d\n", *(x+2)); 
     printf("Value of x3 is: %d\n\n", *(x+3)); 

    free(y);
    printf("Value of y2 is: %d\n", *(y+2));//zero ayega 
     printf("Value of y3 is: %d\n", *(y+3)); 
     
   return 0;
}

