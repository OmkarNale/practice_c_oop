#include <stdio.h>

int main()
{
    printf("------------check number is prime or not-----------\n");

    int i,j,num,count;
    scanf("\n%d",&num);
    printf("\n Enter the number :");
  
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(i==num)
    {
        printf("\n Prime number !");
    }
    else
    {
        printf("\n Not Prime number !");
    }
  /*
    while(i<=100)
      {
        count = 0;
        j = 2;
            while(j <= i/2)
            {
              if(i%j == 0)
              {
                count++;
        	    break;
              }
              j++;	
            }	
        if(count == 0 && i!= 1 )
        {
    	printf(" %d ",i);
        }
        i++; 
      }
  */
    
  /* 
   for(i=1;i<=num;i++)
        {
            int count=0;
            for (j=2;j<=i-1;j++)
            {
                  	if(i%j==0)
                  	{
                      count++;
                  	  break;
                	}
            }
            if(count==0&&i!=1)
            {
                    printf("\n%d",i);
            }  
        }
    */
    /*
    #include<stdio.h>

int main()
{
    int x,i,j,count;
    
    x=11;
    
    for(i=1;i<=x;i++)
    {
        count=0;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && x!=1)
        {
            printf("\n number is :%d",i);
        }
    }
    if(count==0)
    {
        printf("\n nummber is prime");
    }
    else
    {
        printf("\n number is not prime !");
    }
    
    return 0;
}
    */
    return 0;
}