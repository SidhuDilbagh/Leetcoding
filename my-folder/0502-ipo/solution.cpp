struct Project {
    int profit;
    int capital;
    Project(int p, int c) : profit(p), capital(c) {}
};

class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>& Capital) {
        auto compareC = [](const Project& a, const Project& b) { return a.capital > b.capital; };
        auto compareP = [](const Project& a, const Project& b) { return a.profit < b.profit; };
        
        priority_queue<Project, vector<Project>, decltype(compareC)> minCapitalHeap(compareC);
        priority_queue<Project, vector<Project>, decltype(compareP)> maxProfitHeap(compareP);

        // Initialize the min-heap with all projects
        for (int i = 0; i < Profits.size(); ++i)
            minCapitalHeap.emplace(Profits[i], Capital[i]);

        // Execute up to k projects
        for (int i = 0; i < k; ++i) {
            // Transfer all projects that can be started with current capital to the max-heap
            while (!minCapitalHeap.empty() && minCapitalHeap.top().capital <= W) {
                maxProfitHeap.push(minCapitalHeap.top());
                minCapitalHeap.pop();
            }

            // If no projects can be started, break
            if (maxProfitHeap.empty()) break;

            // Start the project with the highest profit
            W += maxProfitHeap.top().profit;
            maxProfitHeap.pop();
        }

        return W;
    }
};

