#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>

struct Point {
    int x, y;
};

double distance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double totalDistance(std::vector<Point>& points, std::vector<int>& tour) {
    double totalDist = 0.0;
    for (int i = 0; i < tour.size() - 1; ++i) {
        totalDist += distance(points[tour[i]], points[tour[i + 1]]);
    }
    totalDist += distance(points[tour.back()], points[tour[0]]);
    return totalDist;
}

void generatePermutations(std::vector<Point>& points, std::vector<int>& tour, std::vector<int>& minTour, double& minDist, int start = 0) {
    if (start == tour.size() - 1) {
        double dist = totalDistance(points, tour);
        if (dist < minDist) {
            minDist = dist;
            minTour = tour;
        }
    } else {
        for (int i = start; i < tour.size(); ++i) {
            std::swap(tour[start], tour[i]);
            generatePermutations(points, tour, minTour, minDist, start + 1);
            std::swap(tour[start], tour[i]); // backtrack
        }
    }
}

int main() {
    std::vector<Point> points = {{0, 0}, {1, 2}, {3, 4}, {5, 1}, {2, 3}};
    std::vector<int> tour(points.size());
    std::iota(tour.begin(), tour.end(), 0); // Initialize tour as 0, 1, 2, ..., n-1

    std::vector<int> minTour;
    double minDist = std::numeric_limits<double>::max();

    generatePermutations(points, tour, minTour, minDist);

    std::cout << "The optimal tour using brute force approach is: ";
    for (int city : minTour) {
        std::cout << city << " ";
    }
    std::cout << std::endl;

    return 0;
}
