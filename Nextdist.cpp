#include <iostream>
#include <vector>
#include <algorithm>
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

std::vector<int> bruteForce(std::vector<Point>& points) {
    int n = points.size();
    std::vector<int> tour(n);
    for (int i = 0; i < n; ++i) {
        tour[i] = i;
    }

    double minDist = std::numeric_limits<double>::max();
    std::vector<int> minTour;

    do {
        double dist = totalDistance(points, tour);
        if (dist < minDist) {
            minDist = dist;
            minTour = tour;
        }
    } while (std::next_permutation(tour.begin() + 1, tour.end()));

    return minTour;
}

int main() {
    std::vector<Point> points = {{0, 0}, {1, 2}, {3, 4}, {5, 1}, {2, 3}};
    std::vector<int> tour = bruteForce(points);

    std::cout << "The optimal tour using brute force approach is: ";
    for (int city : tour) {
        std::cout << city << " ";
    }
    std::cout << std::endl;

    return 0;
}
