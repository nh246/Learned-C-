#include <iostream>
#include <stack>
#include <vector>

class TowerOfHanoi {
private:
    std::vector<std::stack<int>> pegs;
    int num_disks;

public:
    TowerOfHanoi(int n) : num_disks(n) {
        
        for (int i = 0; i < 3; ++i) {
            std::stack<int> s;
            pegs.push_back(s);
        }

    
        for (int i = num_disks; i >= 1; --i) {
            pegs[0].push(i);
        }
    }

    void moveDisks(int n, int source, int auxiliary, int destination) {
        if (n > 0) {
            moveDisks(n - 1, source, destination, auxiliary);
            int disk = pegs[source].top();
            pegs[source].pop();
            pegs[destination].push(disk);
            std::cout << "Move disk " << disk << " from Peg " << source + 1 << " to Peg " << destination + 1 << std::endl;
            moveDisks(n - 1, auxiliary, source, destination);
        }
    }

    void solve() {
        moveDisks(num_disks, 0, 1, 2);
    }
};

int main() {
    int num_disks = 3; // Change the number of disks here
    TowerOfHanoi tower(num_disks);
    tower.solve();
    return 0;
}
