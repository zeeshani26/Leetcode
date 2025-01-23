class RecentCounter {
public:
    queue<int> requests; // Queue to store timestamps of requests
    
    RecentCounter() {
    }
    
    int ping(int t) {
        // Add the current timestamp to the queue
        requests.push(t);
        
        // Remove timestamps that are outside the range [t - 3000, t]
        while (!requests.empty() && requests.front() < t - 3000) {
            requests.pop();
        }
        
        return requests.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */