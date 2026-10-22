class Solution {
public:
bool isSafe(vector<vector<char>>& b, int r, int c, char d){
    //horizontal;
    for(int i=0;i<9;i++){
        if(b[r][i]==d){
            return false;
        }

    }
    for(int j=0;j<9;j++){
        if(b[j][c]==d){
            return false;
        }
    }
    int sr= (r/3)*3;
    int sc= (c/3)*3;

    for(int i=sr;i<=sr+2;i++){
        for(int j=sc;j<=sc+2;j++){
            if(b[i][j]==d){
                return false;
            }
        }
    }
    return true;
}
    bool solve(vector<vector<char>>& b, int r, int c){
        if(r==9){
            return true;
        }
        int next_r= r;
        int next_col= c+1;
        if(next_col==9){
            next_r=r+1;
            next_col=0;
        }
        if(b[r][c]!='.'){
            return solve(b,next_r,next_col);
        }
        //place _digit;
        
            for(char d='1';d<='9';d++){
                if(isSafe(b,r,c,d)){
                    b[r][c]=d;
                    if(solve(b,next_r,next_col)){
                        return true;
                    }
                    b[r][c]='.';
                }

            }
        
        return false;
    }
    void solveSudoku(vector<vector<char>>& b) {
         solve(b,0,0);
        
    }
};