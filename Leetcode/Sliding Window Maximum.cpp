// Contributed by:
Name: Abhijai Rajawat
University: VIT, Vellore
Language used: C++
Github: www.github.com/Severus25
Description: You are given an array of integers nums, there is a sliding window of size k which is moving 
from the very left of the array to the very right. You can only see the k numbers in the window. Each time 
the sliding window moves right by one position. Return the max sliding window.

// Problem Solution:
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
int n = nums.size();
        if (n == 0) 
            return {};
        if (k == 1) 
            return nums;

        vector<int> ans;
        deque<int> deq;

        for (int i = 0; i < n; i++) {
            while (!deq.empty() && deq.front() < i - k + 1) {
                deq.pop_front();
            }

            
            while (!deq.empty() && nums[deq.back()] < nums[i]) {
                deq.pop_back();
            }

            deq.push_back(i);

            if (i >= k - 1) {
                ans.push_back(nums[deq.front()]);
            }
        }

        return ans;
    }
};
