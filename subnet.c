#include <stdio.h>

int main() {
    int i, j, n, r;
    int a[10][10];
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter connectivity of node %d to node %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the root node (0 to %d): ", n - 1);
    scanf("%d", &r);
    printf("\nAdjacent nodes of %d: ", r);
    for (j = 0; j < n; j++) {
        if (a[r][j] == 1 && j != r) {
            printf("%d ", j);
        }
    }
    printf("\nNon-adjacent nodes of %d: ", r);
    for (j = 0; j < n; j++) {
        if (a[r][j] == 0 && j != r) {
            printf("%d ", j);
        }
    }
    printf("\n");
    return 0;
}
