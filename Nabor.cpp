#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

struct Point {
    int x, y;
};

double distance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

std::vector<int> nearestNeighbor(std::vector<Point>& points) {
    int n = points.size();
    std::vector<int> tour;
    tour.push_back(0); // Start from the first point

    std::vector<bool> visited(n, false);
    visited[0] = true;

    for (int i = 0; i < n - 1; ++i) {
        int current = tour.back();
        double minDist = std::numeric_limits<double>::max();
        int nearest;

        for (int j = 0; j < n; ++j) {
            if (!visited[j]) {
                double dist = distance(points[current], points[j]);
                if (dist < minDist) {
                    minDist = dist;
                    nearest = j;
                }
            }
        }

        tour.push_back(nearest);
        visited[nearest] = true;
    }

    return tour;
}

int main() {
    std::vector<Point> points = {{0, 0}, {1, 2}, {3, 4}, {5, 1}, {2, 3}};
    std::vector<int> tour = nearestNeighbor(points);

    std::cout << "The shortest tour using nearest neighbor algorithm is: ";
    for (int city : tour) {
        std::cout << city << " ";
    }
    std::cout << std::endl;

    return 0;
}
