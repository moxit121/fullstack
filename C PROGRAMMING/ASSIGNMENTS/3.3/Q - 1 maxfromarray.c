//Write a program to find out the max number from given array using function

#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int i,arr[5]; // = {25, 11, 7, 75, 56};      
    
    for(i=0;i<5;i++)
    {
	    printf("Array at index of [%d] =  ", i);
	    scanf("\n%d", &arr[i]);	
	}
        
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Initialize max with first element of array.    
    int max = arr[0];    
        
    //Loop through the array    
    for (int i = 0; i < length; i++) {     
        //Compare elements of array with max    
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    return 0;    
}   