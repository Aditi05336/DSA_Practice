class Solution {
public:
     vector<vector<string>>res;
     bool isSafe(vector<string>&b, int row, int col ){
        for(int i=row-1;i>=0;i--){
            if(b[i][col]=='Q'){
                return false;
            }

        }

        for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j-- ){
            if(b[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row-1, j=col+1; i>=0 && j<b.size();i--,j++){
            if(b[i][j]=='Q'){
                return false;
            }
        }
        return true;
     }
     void solve( vector<string>&b , int r, int n){
        if(r==n){
            res.push_back(b);
            return ;
        }
        for(int col=0;col<n;col++){
            if(isSafe(b,r,col)){
                b[r][col]='Q';
                solve(b,r+1,n);
                b[r][col]='.';
            }
        }
     }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>b(n,string(n,'.'));
        int r=0;
        solve(b,r,n);
        return res;
        
        
    }
};