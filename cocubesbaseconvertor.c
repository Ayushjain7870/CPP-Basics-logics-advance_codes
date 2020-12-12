#include <stdio.h>

char* dec (int num, int divisor)
{
  int remain=1,charac,i=0,loop,quot,arr[100];

  while (remain != 0)
    {
        quot=(num/divisor);
        remain = (num % divisor);
        num=quot;
        if (remain > 9)
        	{
	             remain+= 55;
	             arr[i]=remain;
	             i++;
        	}
        else
        	{
        	      arr[i]=remain;
        	      i++;
	        }   
    }
	for(loop=i-2;loop>-1;loop--)
	    {
	        if(arr[loop]>9)
	        { 
	            charac=arr[loop];
	            printf("%c",charac);     
	        }
	        else
	        {
	        	printf("%d",arr[loop]);
	        }
	    }
}

int main ()
{
  int a, b;
 scanf ("%d%d", &a, &b);
  dec (a, b);
  return 0;
}

