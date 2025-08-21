#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr1[] = {0,1,2,3,5,4};

   int i,n,p;

   n = sizeof(arr1)/sizeof(arr1[0]);

   printf("ENTER THE POSITION : ");
   scanf("%d",&p);


   if(p>0)
   {

   for(i=p-1 ; i<=n ; i++)
   {
       arr1[i] = arr1[i+1];
   }
   }


   else
   {
       for(i=p-1 ; i<=n ; i++)
   {
       arr1[i] = arr1[i+1];
   }
   }


   n--;



   for(i=0;i<n;i++)
   {
       printf("%d",arr1[i]);
   }

}


