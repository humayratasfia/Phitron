#include <stdio.h>
#include <string.h>

int main(){
    char a[11], b[11];
    scanf("%s",a);
    scanf("%s",b);

    printf("%d %d\n",strlen(a),strlen(b));

    printf("%s%s\n",a,b);
    
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s",a,b);
    
    return 0;
}



// #include <stdio.h>
// #include <string.h>

// int main(){
//     char a[11], b[11];
//     scanf("%s",a);
//     scanf("%s",b);
//     //Print length of the arrays
//     printf("%d ",strlen(a));
//     printf("%d\n",strlen(b));
//     //Coppy paste in another array
//     char c[21];
//     for(int i=0;i<strlen(a);i++)
//     {
//         c[i] = a[i];
//     }
//     for(int i=0;i<strlen(b);i++)
//     {
//         c[i+strlen(a)] = b[i];
//     }
//     c[strlen(a) + strlen(b)] = '\0';
//     printf("%s\n",c);
//     //Insert space
//     for(int i=strlen(c);i>=strlen(a)+1;i--)
//     {
//         c[i] = c[i-1];
//     }
//     c[strlen(a)] = ' ';
//     //Swap
//     int length = strlen(c);
//     char temp = c[0];
//     c[0] = c[length-2];
//     c[length-2] = temp;
//     printf("%s",c);
    
//     return 0;
// }