#include <stdio.h>

int main(){
    int n;
    //Asks for total number of index in an array
    scanf("%d",&n);
    int a[n+1];
    int idx, value;

    //Inserting values in array
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    /*Insert desired index in which 
    you want to put your value */
    scanf("%d %d",&idx,&value);

    /*Shifting values to next indexes 
      to make the desired index empty*/
    for(int i=n;i>=idx+1;i--)
    {
        a[i] = a[i-1];
    }

    //Puts the value in the desired index
    a[idx] = value;

    //Print the new values after shifting and inserting
    for (int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}