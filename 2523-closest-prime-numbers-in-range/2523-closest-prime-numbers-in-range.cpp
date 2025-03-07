class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> primeList;
        while (left <= right) {
            if (isPrime(left)) {
                primeList.push_back(left);
            }
            left++;
        }
        if (primeList.size() < 2) {
            return {-1, -1};
        }
        int gap = INT_MAX;
        vector<int> ans = {-1, -1};
        for (int i = 0; i < primeList.size() - 1; i++) {
            cout << primeList[i] << endl;
            int num1 = primeList[i];
            int num2 = primeList[i + 1];
            if (num2 - num1 < gap) {
                gap = num2 - num1;
                ans = {num1, num2};
            }
        }
        return ans;
    }
};