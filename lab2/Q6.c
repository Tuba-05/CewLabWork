// 6. Write a C program to add two distances in inch-feet system using structures.
#include <stdio.h>

// Structure to represent a distance in inch-feet system
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances and return the result
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance sum;

    // Add the inches
    sum.inches = d1.inches + d2.inches;

    // Carry over any extra inches to feet
    sum.feet = d1.feet + d2.feet + (sum.inches / 12);

    // Update the inches to be in the range [0, 11]
    sum.inches = sum.inches % 12;

    return sum;
}

int main() {
    struct Distance dist1, dist2, sum;

    // Input the first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &dist1.feet);
    printf("Inches: ");
    scanf("%d", &dist1.inches);

    // Input the second distance
    printf("Enter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &dist2.feet);
    printf("Inches: ");
    scanf("%d", &dist2.inches);

    // Add the distances
    sum = addDistances(dist1, dist2);

    // Display the result
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}