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

double tsp(std::vector<Point>& points, std::vector<std::vector<double>>& memo, int pos, int mask) {
    int n = points.size();
    if (mask == (1 << n) - 1) {
        return distance(points[pos], points[0]);
    }
    if (memo[pos][mask] != -1) {
        return memo[pos][mask];
    }

    double minDist = std::numeric_limits<double>::max();
    for (int next = 0; next < n; ++next) {
        if (!(mask & (1 << next))) {
            double dist = distance(points[pos], points[next]) + tsp(points, memo, next, mask | (1 << next));
            minDist = std::min(minDist, dist);
        }
    }
    return memo[pos][mask] = minDist;
}

std::vector<int> findOptimalTour(std::vector<Point>& points) {
    int n = points.size();
    std::vector<std::vector<double>> memo(n, std::vector<double>(1 << n, -1));
    tsp(points, memo, 0, 1);

    std::vector<int> tour;
    tour.push_back(0);

    int pos = 0, mask = 1;
    for (int i = 0; i < n - 1; ++i) {
        for (int next = 0; next < n; ++next) {
            if (!(mask & (1 << next))) {
                double dist = distance(points[pos], points[next]) + memo[next][mask | (1 << next)];
                if (std::abs(memo[pos][mask] - dist) < 1e-9) {
                    tour.push_back(next);
                    pos = next;
                    mask |= (1 << next);
                    break;
                }
            }
        }
    }
    return tour;
}

int main() {
    std::vector<Point> points = {{0, 0}, {1, 2}, {3, 4}, {5, 1}, {2, 3}};
    std::vector<int> tour = findOptimalTour(points);

    std::cout << "The optimal tour using dynamic programming approach is: ";
    for (int city : tour) {
        std::cout << city << " ";
    }
    std::cout << std::endl;

    return 0;
}
