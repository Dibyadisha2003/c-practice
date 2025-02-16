//Add n distances given in inch feet system using structures
#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
struct Distance addDistances(struct Distance dist[], int n) {
    struct Distance sum = {0, 0}; 
    for (int i = 0; i < n; i++) {
        sum.feet += dist[i].feet;
        sum.inches += dist[i].inches;
        while (sum.inches >= 12) {
            sum.feet++;
            sum.inches -= 12;
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of distances: ");
    scanf("%d", &n);
    struct Distance dist[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter distance %d (feet inches): ", i + 1);
        scanf("%d %d", &dist[i].feet, &dist[i].inches);
    }
    struct Distance total = addDistances(dist, n);
    printf("\nTotal Distance: %d feet %d inches\n", total.feet, total.inches);
    return 0;
}