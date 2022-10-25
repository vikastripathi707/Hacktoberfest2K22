//TIME : O(N*M) + O(4*N*M) Copy of 2d and DFS goes on N*M and internal loop of 4
//SPACE: O(N*M) + O(N*M) for 2d arr AUX SPACE

class Solution {

private:
    void dfs(vector<vector<int>>&ans, int r, int c, int newcolor, int inicolor){
        
        int N = ans.size();
        int M = ans[0].size();
        
        ans[r][c] = newcolor; // HERE O/P is cooked up
        
        // UP LEFT DOWN RIGHT
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};
        // 4 direction handling technique
        for(int i=0; i<4; i++){
            int nr = r + delrow[i]; //nr = neighbour row
            int nc = c + delcol[i];
            //CONDITIONS
            //1. Validity of boundary - 0 to N-1 and M-1
            //2. Same initial Color  = IN ANS its 'inicolor' 1 means 1
            //3. UNVISITED - how u find? IN ANS its not 'newcolor' 2 means vis, 1 means unvis
            if(nr>=0 && nr<N && nc>=0 && nc<M 
              && ans[nr][nc] == inicolor){
                // 2 & 3 covered under same cond
                
                dfs(ans,nr,nc,newcolor,inicolor);
            }
        }
        
        
        
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        //Always dont tamper input data - industry practice make copy and work
        // Anyways Aux space of ur algo goes to N*M
        vector<vector<int>> ans = image;
        int inicolor = image[sr][sc];
        
        //TO COVER EDGE CASE : What if color and inicolor same
        //If u dont write - it leads to infinite recursion as base case always true as no change at all
        if(inicolor == color) return ans;
        
        dfs(ans,sr,sc,color,inicolor);
        
        return ans;
        
    }
};