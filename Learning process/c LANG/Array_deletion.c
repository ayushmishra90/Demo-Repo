/* program to remove the specific elements from an array in C. */  
#include <stdio.h>    
  
void main ()  
{  
    // declaration of the int type variable  
    int arr[]={2,34,1,78,23, 78, 56};  
    int pos, i, count=7; // declare int type variable  
    
      
    // enter the position of the element to be deleted  
    printf( " Define the position of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);  
      
    // check whether the deletion is possible or not  
    if (pos >= count+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        // use for loop to delete the element and update the index  
        for (i = pos - 1; i < count -1; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
          
        printf (" \n The resultant array is: \n");  
          
        // display the final array  
        for (i = 0; i< count - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }   
}
