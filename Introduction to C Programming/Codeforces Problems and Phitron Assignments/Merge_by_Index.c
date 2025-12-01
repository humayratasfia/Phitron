#include <stdio.h>
#include <string.h>

int main(){
    char s1[1001], s2[1001];
    scanf("%s %s",s1 ,s2);

    int start, end;
    scanf("%d %d",&start ,&end);

    int len = strlen(s1);

    int j=0;
    for(int i=start;i<=end && s2[i]!='\0';i++)
    {
        s1[len+j] = s2[i];

        j++;
    }

    s1[len+j] = '\0';

    printf("%s",s1);

    return 0;
}



//RHIDI'S CODE


// #include <stdio.h>
// #include <string.h>

// int main() {

//     char s1[1001]  ;
//     char s2[1001];

// scanf("%s",s1);
// scanf("%s",s2);

//     int n,p;
//     scanf("%d %d",&n,&p);


//     int ch=p-n+1;
//     strncat(s1,s2+n,ch);


//     printf("%s\n",s1); 

// return 0;
// }