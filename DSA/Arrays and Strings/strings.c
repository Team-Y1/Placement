// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int main(){
//     char s[] = "saiganesh";
//     int n = strlen(s);

//     for(int i=0;i<=n;i++)
//     {
//         s[i]=toupper(s[i]);
//     }
//     printf("%s\n",s);
// }

#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "Saiganesh Raju";

    char *ptr = strstr(s, "Raju");

    if(ptr != NULL)
    {
        printf("Found at index %ld",ptr-s);
    }
}