#include <stdio.h>
#include <string.h>

void main() {
    char a[30], fs[50] = "", t[2], sd, ed;
    int i, len;

    printf("Enter a string: ");
    scanf("%s", a);

    printf("Enter a character that represents the starting delimiter: ");
    scanf(" %c", &sd);

    printf("Enter a character that represents the ending delimiter: ");
    scanf(" %c", &ed);

    len = strlen(a);

    // Add the starting delimiter to the stuffed string
    strncat(fs, &sd, 1);

    for (i = 0; i < len; i++) {
        t[0] = a[i];
        t[1] = '\0';

        if (a[i] == sd) {
            // Append starting delimiter
            strncat(fs, &sd, 1);
        } else if (a[i] == ed) {
            // Append ending delimiter
            strncat(fs, &ed, 1);
        }

        // Append current character
        strcat(fs, t);
    }

    // Add the ending delimiter to the stuffed string
    strncat(fs, &ed, 1);

    printf("\nAfter Stuffing: %s\n", fs);
}
