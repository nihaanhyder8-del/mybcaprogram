#include <stdio.h>

int main() {
    int n, category;
    int regular = 0, premium = 0, recliner = 0;
    int total = 0;
    float discount = 0, finalAmount;

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter category for ticket %d (1/2/3): ", i);
        scanf("%d", &category);

        if (category == 1) {
            total += 150;
            regular++;
        }
        else if (category == 2) {
            total += 250;
            premium++;
        }
        else if (category == 3) {
            total += 400;
            recliner++;
        }
    }

    if (n >= 5) {
        discount = total * 0.10;
    }

    finalAmount = total - discount;

    printf("\n--- Final Bill ---\n");
    printf("Regular tickets: %d\n", regular);
    printf("Premium tickets: %d\n", premium);
    printf("Recliner tickets: %d\n", recliner);
    printf("Total (before discount): %d\n", total);

    if (n >= 5) {
        printf("Discount applied: Yes (10%%)\n");
    }
    else {
        printf("Discount applied: No\n");
    }

    printf("Final Amount: %.0f\n", finalAmount);

    return 0;
}
