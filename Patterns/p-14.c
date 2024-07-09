/*
     *       *
       *   *  
         * 
       *   *  
     *       *   */

#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(i==j || i+j==6) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        if(i==1 || i==5)
        {   for(int j=1; j<=5; j++)
            {   if(j==1 || j==5)
                {    printf("* ");  }
                else
                    { printf("  ");  }    
            }
            printf("\n");
        }
        else if(i==2 || i==4)
        {   for(int j=1; j<=5; j++)
            {   if(j==2 || j==4)
                { printf("* "); }
                else
                    { printf("  ");  }
            }
            printf("\n");
        } 
        else 
        {   for(int j=1; j<=5; j++)
            {   if(j==3)
                {  printf("* "); }
                else
                    { printf("  ");  }
            }
            printf("\n");  
        }
    }
    return 0;
}*/


