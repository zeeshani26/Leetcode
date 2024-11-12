class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
    std::sort(items.begin(), items.end());
    std::vector<std::pair<int, int>> sortedQueries;
    for (int i = 0; i < queries.size(); i++) {
        sortedQueries.emplace_back(queries[i], i);
    }
    std::sort(sortedQueries.begin(), sortedQueries.end());

    std::vector<int> answer(queries.size());
    int maxBeautySoFar = 0;
    int i = 0;
    for (const auto& [query, index] : sortedQueries) {
        
        while (i < items.size() && items[i][0] <= query) {
            maxBeautySoFar = std::max(maxBeautySoFar, items[i][1]);
            i++;
        }
        answer[index] = maxBeautySoFar;
    }

    return answer;
    }
};