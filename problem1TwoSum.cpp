#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum( std::vector<int>& nums, int target ) {
        for ( int i = 0 ; i < nums.size() ; i++ ) {
            for ( int j = i + 1 ; j < nums.size() ; j++ ) {
                if ( ( nums[i] + nums[j] ) == target ) {
                    return { i, j };
                }
            }
        }
        return {};
    }
};

int main ( void ) {
    Solution sol;
    std::vector<int> nums = { 3, 3 };
    std::vector<int> answer = sol.twoSum( nums, 6 );
    for ( auto x: answer ) {
        std::cout << x << " ";
    }
    return 0;
}