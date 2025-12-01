// #include <stdio.h>

// int main(){
//     int n, f, l;
//     scanf("%d",&n);
    
//     l = n%10;
//     f = (n-l)/10;
    
    
//     if(l==0 || f==0)
//     {
//         printf("NO");
//     }
//     else if(f%l==0 || l%f==0)
//     {
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int l = n % 10;
    int f = n / 10;

    if ((l == 0 || l % f == 0) || (f == 0 || f % l == 0))
        printf("YES");
    else
        printf("NO");

    return 0;
}