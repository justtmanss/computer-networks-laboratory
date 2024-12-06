#include <stdio.h>
#include <string.h>

void main() {
    int i, k = 0, n, j = 6;
    char s[100], res[200] = "", a[100] = "";
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  
    strcpy(res, "dlestx"); 
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'd' && s[i + 1] == 'l' && s[i + 2] == 'e') {
            strcat(res, "dle");  
        }
        strncat(res, &s[i], 1);  
    }
    strcat(res, "dleetx");  
    printf("Stuffed character: %s\n", res);
    n = strlen(res);
    for (i = 6; i < n - 6; i++) {  
        if (res[i] == 'd' && res[i + 1] == 'l' && res[i + 2] == 'e') {
            i += 2;  
        } else {
            a[k++] = res[i];  
        }
    }
    a[k] = '\0';  
    printf("Unstuffed character: %s\n", a);
}
