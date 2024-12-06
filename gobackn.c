#include <stdio.h>

int main() {
    int w, i, f, frame[50];
    printf("Enter the window size: ");
    scanf("%d", &w);
    printf("Enter the number of frames: ");
    scanf("%d", &f);
    printf("Enter the frames: ");
    for (i = 0; i < f; i++) {
        scanf("%d", &frame[i]);
    }
    printf("\nWith Sliding Window Protocol:\n");
    for (i = 0; i < f; i++) {
        printf("Sending frame %d\n", frame[i]);
        if ((i + 1) % w == 0 || i == f - 1) {
            printf("Acknowledgment received for frames up to %d\n", frame[i]);
        }
    }
    return 0;
}
