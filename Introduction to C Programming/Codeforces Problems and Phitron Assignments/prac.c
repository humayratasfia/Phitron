#include <stdio.h>

int main(){
    char a[50];
    scanf("%s",a);

    int count = 0;
    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }

    printf("%d\n",count);
    return 0;
}
// #include <stdio.h>

// int main(){
//     int t;
//     scanf("%d",&t);

//     int price;
//     int student = 0;
//     for(int i=1;i<=t;i++)
//     {
//         scanf("%d",&price);

//         if(price>250)
//         {
//             student++
//         }

//         printf("%d",student);
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int age[5] = {21, 22, 23, 24, 25};

//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",age[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     for(int i=1;i<=10;i++)
//     {
//         printf("%d\n",i);
//         if(i>5)
//         {
//             break;
//         }

//     }
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int fac = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fac = fac * i;
//     }
//     printf("%d ", fac);

//     return 0;
// }

// #include <stdio.h>
 
// int main() {
//     int n;
//     scanf("%d",&n);
//     int sum = 0;
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//           sum = sum + i;  
//         }
//     }

//     printf("%d",sum);

//     return 0;
// }