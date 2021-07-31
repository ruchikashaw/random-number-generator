#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    
    int n,i;
    
    srand(time(0));
    printf("Enter the number of random numbers you want:");
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        printf(" %d ", rand());
    }
    return 0;
}


   
// Input format: n number of random numbers the user requires
// output n random numbers
