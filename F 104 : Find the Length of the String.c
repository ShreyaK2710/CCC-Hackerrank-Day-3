#include <stdio.h>
int main() {
    char s[100];
    gets(s);
    printf("%d", strlen(s));
    return 0;
}
