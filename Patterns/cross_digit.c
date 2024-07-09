/*
1                   1 
  2               2   
    3           3     
      4       4
        5   5
          6
        5   5
      4       4
    3           3
  2               2
1                   1  */

#include<stdio.h>
int main()
{
    for(int i=1; i<=11; i++)
    { 
        if(i < 7)
        {   for(int j=1; j<=11; j++)
            {   
                if(i==j || i+j==12) 
                {
                    printf("%d ",i);
                }
                else printf("  ");
            }    
            printf("\n");
        }  
        else 
        {   
            for(int j=1; j<=11; j++)
            {   
                if(i==j || i+j==12) 
                {
                    printf("%d ",12-i);
                }
                else printf("  ");
            }    
            printf("\n");  
        }    
    }
    return 0;
}