#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

struct Point {
    int x, y;
};

double distance(struct Point a, struct Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double totalDistance(struct Point *points, int *tour, int n) {
    double totalDist = 0.0;
    for (int i = 0; i < n - 1; ++i) {
        totalDist += distance(points[tour[i]], points[tour[i + 1]]);
    }
    totalDist += distance(points[tour[n - 1]], points[tour[0]]);
    return totalDist;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void generatePermutations(struct Point *points, int *tour, int start, int n, double *minDist, int *minTour) {
    if (start == n - 1) {
        double dist = totalDistance(points, tour, n);
        if (dist < *minDist) {
            *minDist = dist;
            for (int i = 0; i < n; ++i) {
                minTour[i] = tour[i];
            }
        }
    } else {
        for (int i = start; i < n; ++i) {
            swap(&tour[start], &tour[i]);
            generatePermutations(points, tour, start + 1, n, minDist, minTour);
            swap(&tour[start], &tour[i]); // backtrack
        }
    }
}

int main() {
    struct Point points[] = {{0, 0}, {1, 2}, {3, 4}, {5, 1}, {2, 3}};
    int n = sizeof(points) / sizeof(points[0]);

    int *tour = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        tour[i] = i;
    }

    double minDist = INFINITY;
    int *minTour = malloc(n * sizeof(int));

    generatePermutations(points, tour, 0, n, &minDist, minTour);

    printf("The optimal tour using brute force approach is: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", minTour[i]);
    }
    printf("\n");

    free(tour);
    free(minTour);

    return 0;
}
