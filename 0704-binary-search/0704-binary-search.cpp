class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return 0;
            } else {
                return -1;
            }
        }
        int left = 0;
        int right = nums.size() - 1;
        cout<<right<<endl;
        while (left <= right) {
            int mid = floor((left + right) / 2);
            cout << "Position: " << mid << ", Value: " << nums[mid] << endl;
            cout<<"Left: "<<left<<endl;
            cout<<"Right: "<<right<<endl;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
   
        return -1;
    }
};