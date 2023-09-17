#include <string>

using namespace std;

class Solution
{
public:
    int romanToInt( string s )
    {
        int count = 0;

        for ( size_t i = 0; i < s.size(); i++ ) {
            if ( i != s.size() - 1 ) {
                switch ( s.at( i ) ) {
                    case'I':
                    if ( s.at( i + 1 ) == 'V' || s.at( i + 1 ) == 'X' )
                        count -= 1;
                    else
                        count += 1;
                    break;
                    case'V':
                    count += 5;
                    break;
                    case'X':
                    if ( i != s.size() - 1 && s.at( i + 1 ) == 'L' || s.at( i + 1 ) == 'C' )
                        count -= 10;
                    else
                        count += 10;
                    break;
                    case'L':
                    count += 50;
                    break;
                    case'C':
                    if ( i != s.size() - 1 && s.at( i + 1 ) == 'D' || s.at( i + 1 ) == 'M' )
                        count -= 100;
                    else
                        count += 100;
                    break;
                    case'D':
                    count += 500;
                    break;
                    case'M':
                    count += 1000;
                    break;
                }
            }
            else {
                switch ( s.at( i ) ) {
                    case'I':
                    count += 1;
                    break;
                    case'V':
                    count += 5;
                    break;
                    case'X':
                    count += 10;
                    break;
                    case'L':
                    count += 50;
                    break;
                    case'C':
                    count += 100;
                    break;
                    case'D':
                    count += 500;
                    break;
                    case'M':
                    count += 1000;
                    break;
                }
            }
        }

        return count;
    }
};
