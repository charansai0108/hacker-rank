
#include <stdio.h>

int main()
{
    int num1, num2, num3, temp;
    
    scanf("%d %d %d" , &num1 , &num2 , &num3);
   
   if(num1>num2)
     {
         temp=num1;
     }    
    else
    {
        temp=num2;
    }
    
    if(num3>temp)
    {
       temp=num3;
    }
    
    
    printf("The largest number is : %d", temp);
    

    return 0;
}
