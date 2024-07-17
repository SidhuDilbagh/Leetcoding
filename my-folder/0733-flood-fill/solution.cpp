class Solution {
    int c=-1;
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(c==-1 && image[sr][sc]!=color) c=image[sr][sc];
        if( sr>=0 && sr<image.size() && sc>=0 && sc<image[0].size() && image[sr][sc]==c ){
            image[sr][sc]=color;
            floodFill(image,sr,sc+1,color);
            floodFill(image,sr,sc-1,color);
            floodFill(image,sr+1,sc,color);
            floodFill(image,sr-1,sc,color);
        }
        return image;
    }
};
