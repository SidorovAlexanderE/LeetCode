#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum( vector<int>& nums, int target )
    {
        vector<int> rez;
        rez.resize( 2 );

        for ( int i = 0; i < nums.size(); i++ ) {
            for ( int j = i + 1; j < nums.size(); j++ ) {
                if ( nums[i] + nums[j] == target ) {
                    rez[0] = i;
                    rez[1] = j;
                    return rez;
                }
            }
        }
        return rez;
    }
};
