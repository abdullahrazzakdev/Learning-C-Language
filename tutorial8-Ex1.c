#include <stdio.h>

int main() {
    int n;

    // Step 1: User se number lena
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &n);

    // Step 2: Heading print karna
    printf("\nTable of %d\n\n", n);

    // Step 3: Har line manually print karna
    printf("%d x 1 = %d\n", n, n * 1);
    printf("%d x 2 = %d\n", n, n * 2);
    printf("%d x 3 = %d\n", n, n * 3);
    printf("%d x 4 = %d\n", n, n * 4);
    printf("%d x 5 = %d\n", n, n * 5);
    printf("%d x 6 = %d\n", n, n * 6);
    printf("%d x 7 = %d\n", n, n * 7);
    printf("%d x 8 = %d\n", n, n * 8);
    printf("%d x 9 = %d\n", n, n * 9);
    printf("%d x 10 = %d\n", n, n * 10);

    return 0;
}
