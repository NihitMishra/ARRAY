/*
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr1[] = {1,2,3,4,5};
    int i,n;

    n = sizeof(arr1) / sizeof(arr1[0]) ;

    for(i = n ; i>=0 ; i--)
    {
        arr1[i] = arr1[i-1];

    }

    arr1[0] = 0 ;
    n++;

    for(i = 0 ; i<n ; i++)
        printf("%d",arr1[i]);

    return 0;

}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr2[] = {1,2,3,4,5};
    int i,n;

    n = sizeof(arr2) / sizeof(arr2[0]) ;

    arr2[n] = 6;
    n++;

    for(i = 0 ; i<n ; i++)
        printf("%d",arr2[i]);

    return 0;
}

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr3[] = {1,2,3,4,5};
    int i,n,p;

    printf("ENTER THE POSITION\n");
    scanf("%d",&p);

    n = sizeof(arr3) / sizeof(arr3[0]) ;


    for( i = n ; i > p ; i--)
    {
        arr3[i] = arr3[i-1];
    }

    arr3[p] = 9;
    n++;


    for(i = 0 ; i<n ; i++)
        printf("%d",arr3[i]);

    return 0;
}

