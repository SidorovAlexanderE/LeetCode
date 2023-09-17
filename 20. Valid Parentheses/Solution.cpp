class Solution {
public:
    bool isValid(string s) {
         if ( s.size() < 2 )
            return false;

        stack<char> stk;

        for ( size_t i = 0; i < s.size(); i++ ) {
            if ( stk.empty() ) {
                stk.push( s[i] );
                continue;
            }

            if ( s[i] == '(' ) {
                stk.push( s[i] );
            }
            else if ( s[i] == '{' ) {
                stk.push( s[i] );
            }
            else if ( s[i] == '[' ) {
                stk.push( s[i] );
            }
            else if ( s[i] == ')' ) {
                if ( stk.top() == '(' ) {
                    stk.pop();
                }
                else if ( stk.top() == '{' || stk.top() == '[' ) {
                    return false;
                }
            }
            else if ( s[i] == '}' ) {
                if ( stk.top() == '{' ) {
                    stk.pop();
                }
                else if ( stk.top() == '(' || stk.top() == '[' )
                    return false;
            }
            else if ( s[i] == ']' ) {
                if ( stk.top() == '[' ) {
                    stk.pop();
                }
                else if ( stk.top() == '(' || stk.top() == '{' )
                    return false;
            }
        }

        if ( stk.empty() )
            return true;
        return false;
    }
};
