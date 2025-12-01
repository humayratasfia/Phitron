#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i=0;
    int j=n-1;
    while(i<j) //TWO POINTERS TECHNIQUE
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}





// MY ATTEMPT TO TRY:
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
    
//     if(n%2!=0)
//     {
//         for(int i=0;i<=(n-1)/2;i++)
//         {
//             int temp;
//             temp = a[i];
//             a[i] = a[n-1];
//             a[n-1] = temp;
//             n--;
//         }
//     }
//     else if(n%2==0)
//     {
//         for(int i=0;i<=(n/2)-1;i++)
//         {
//             int temp;
//             temp = a[i];
//             a[i] = a[n-1];
//             a[n-1] = temp;
//             n--;
//         }
//     }
//     return 0;
// }