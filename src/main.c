#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[] = "Hola Mundo";
    char *subS = s;

    int length = strlen(s);
    printf("largo de s : %d\n", length);

    strncpy(subS, &s[0], 4);
    subS[4] = '\0';
    printf("substring = %s\n", subS);
    return 0;
}
