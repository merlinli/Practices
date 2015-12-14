/**
 * if i don't use google , the best algorithm i can think of.
 *
 * Descrition:
 *
 *
 */


#include <stdio.h>

int getMaxNum(int a[],int len)
{
   int Max=a[0];
   int i;
   int maxId =0;
   for(i =0;i<len;i++)
     if(Max<a[i])
     { 
       Max = a[i];
       maxId = i;
     }

   return maxId;
   
}
int* majorityElement(int a[],int len)
{
	if( a==NULL )
	    return NULL;
       
        printf("the arrary size is %d \n",len);
	
	int values[100] = {0}; //sotre the unique value
        int times[100]  ={0};  //times[i] store the number of times of values[i] appears.
        int valueTail = 0;    // indicate how many unique value.
        int i= 0;
        for( i=0;i< len;i++)
	{   
            int j=0;
	    for(j=0; j<valueTail;j++)
            {
		if(a[i]==values[j])
  		{
		   times[j]++;
		   break;
                }
            }
	    if(j==valueTail)
            {
            	values[valueTail]=a[i];
                times[valueTail++]++;
            }
	}
        for(i=0; i<valueTail;i++)
        {
           printf("the times arrary values is %d, times[%d]= %d \n",values[i],i,times[i]);
        }
       int max = getMaxNum(times,valueTail);
       printf("the majority num is %d \n ", values[max]);

	
}

int main(void)
{
	int a[] = {4,4,4,5,5,3,3,2,4,3,5,5,5,51,2,5,5};
        majorityElement(a,sizeof(a)/sizeof(a[0])); 
	return 0;
}
