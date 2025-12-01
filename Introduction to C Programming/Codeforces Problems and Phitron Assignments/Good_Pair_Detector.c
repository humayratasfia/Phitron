#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int good=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]%2!=0 && a[j]%2==0) || (a[i]%2==0 && a[j]%2!=0))
            {
                good++;
            }
        }
    }

    printf("%d",good);

    return 0;
}

// RHIDI'S CODE:
// int main() {

// int n;
// scanf("%d",&n);

// int a[n];

// for(int i=0;i<n;i++){

//     scanf("%d",&a[i]);
// }

// int odd=0;
// int even =0;

// for(int i=0;i<n;i++){

//     if(a[i]%2==0){
//         even++;
//     }
//     else{
//         odd++;
//     }
// }




// int pair=odd * even;

// printf("%d\n",pair);



// return 0;
// }