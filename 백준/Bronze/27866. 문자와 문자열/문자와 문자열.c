#include <stdio.h>
#include <string.h>

int main() {
    char str[1001], *ptr;
    int p;
    scanf("%s", str);
    scanf("%d", &p);
    
    ptr = str;
    for (int i=0; i<strlen(str); i++) {
        if (i+1 == p) {
            printf("%c", *ptr);
        }
        ptr++;
    }

    return 0;
}