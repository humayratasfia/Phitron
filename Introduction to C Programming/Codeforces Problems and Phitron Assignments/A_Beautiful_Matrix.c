#include <stdio.h>

int main(){
    int v, step;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&v);

            if(v==1)
            {
                step = abs(j-3) + abs(3-i); // learned something new
            }
        }
    }

    printf("%d",step);

    return 0;
}




// #include <stdio.h>

// int main(){
//     int a[5][5];
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     int step = 0;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             if(a[i][j]==1 && i<2 && j<2)
//             {
//                 step++;

//                 int temp = a[i][j];
//                 a[i][j] = a[i][j+1];
//                 a[i][j+1] = temp;
//             }
//             else if(a[i][j]==1 && i<2 && j>2)
//             {
//                 step++;

//                 int temp = a[i][j];
//                 a[i][j] = a[i][j-1];
//                 a[i][j-1] = temp;
//             }
//             else if(a[i][j]==1 && i>2 && j<2)
//             {
//                 step++;

//                 int temp = a[i][j];
//                 a[i][j] = a[i][j+1];
//                 a[i][j+1] = temp;
//             }
//             else if(a[i][j]==1 && i>2 && j>2)
//             {
//                 step++;

//                 int temp = a[i][j];
//                 a[i][j] = a[i][j-1];
//                 a[i][j-1] = temp;
//             }
//             else if(a[i][j]==1 && i==2 && j<2)
//             {
//                 step++;

//                 int temp = a[i][j];
//                 a[i][j] = a[i][j+1];
//                 a[i][j+1] = temp;
//             }
//             else if(a[i][j]==1 && i==2 && j>2)
//             {
//                 step++;

//                 int temp = a[i][j];
//                 a[i][j] = a[i][j-1];
//                 a[i][j-1] = temp;
//             }
//             else if(a[i][j]==1 && i<2 && j==2)
//             {
//                 step++;

//                 int temp = a[i][j];
//                 a[i][j] = a[i+1][j];
//                 a[i+1][j] = temp;
//             }
//             else if(a[i][j]==1 && i>2 && j==2)
//             {
//                 step++;

//                 int temp = a[i][j];
//                 a[i][j] = a[i-1][j];
//                 a[i-1][j] = temp;
//             }
//             else if(a[i][j]==1 && i==2 && j==2)
//             {
//                 break;
//             }

//         }
//     }

//     printf("%d",step);
//     return 0;
// }