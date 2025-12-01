#include <stdio.h>
int count = 0;

int count_before_one(int a[], int n)
{ 
    for(int i=0;i<n;i++)
    {
        if(a[i]!=1)
        {
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    count = count_before_one(a,n);

    printf("%d\n",count);
    
    return 0;
}




//What's the number before 1 - I misunderstood the question
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int a[n];
//     int *p = NULL; //very important part
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);

//         if(a[i]==1)
//         {
//             p = &a[i];
//         }
//     }

//     if(p==NULL)
//     {
//         printf("0\n");
//     }
//     else if(p == &a[0])
//     {
//         printf("0\n");
//     }
//     else
//     {
//         printf("%d",*(p-1));
//     }
    
//     return 0;
// }