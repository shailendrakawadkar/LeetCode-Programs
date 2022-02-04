Runtime: 7 ms, faster than 46.07% of C++ online submissions for Flipping an Image.
Memory Usage: 8.8 MB, less than 40.45% of C++ online submissions for Flipping an Image.

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); ++i)
        {
            for(int j = 0; j < image[i].size()/2; ++j)
            {
                swap(image[i][j], image[i][image[i].size() - 1 - j]);
            }
        }
        
        for(int i = 0; i < image.size(); ++i)
        {
            for(int j = 0; j < image[i].size(); ++j)
            {
               image[i][j] ^= 1;
            }
        }
        return image;
    }
};
