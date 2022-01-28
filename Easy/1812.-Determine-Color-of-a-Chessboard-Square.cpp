//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Determine Color of a Chessboard Square.
//Memory Usage: 5.8 MB, less than 89.64% of C++ online submissions for Determine Color of a Chessboard Square.

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(((int)coordinates[0] % 2 == 0 && (int)coordinates[1] % 2 == 0) || ((int)coordinates[0] % 2 != 0 && (int)coordinates[1] % 2 != 0) )
        return false;
        
        return true;
    }
};
