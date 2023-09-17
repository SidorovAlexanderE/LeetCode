#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix( vector<string>& strs )
    {
        if ( strs.empty() )
            return "";

        char cur;
        int count = 0;
        bool fl = true;

        for ( size_t i = 0; i < strs[0].size(); i++ ) {
            if ( !fl )
                break;
            cur = strs[0][i];

            for ( size_t k = 0; k < strs.size(); k++ ) {
                if ( k == 0 )
                    continue;
                if ( cur == strs[k][i] ) {
                    fl = true;
                }
                else {
                    fl = false;
                    break;
                }
            }

            if ( fl )
                count++;
        }

        if ( count == 0 ) {
            return "";
        }
        else {
            string s = { strs[0].begin(), strs[0].begin() + count };
            return s;
        }
    }
};
