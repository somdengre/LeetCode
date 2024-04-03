
class Solution {
    int dr1[4]={1,-1,0,0};
    int dr2[4]={0,0,1,-1};
public:
    bool f(vector<vector<char>>& board,int& row,int& col,int i,int j,string& word,int ind,int n){
        if(ind == n-1 && word[ind] == board[i][j]){
            return true;
        }
        for(int d = 0;d<4;d++){
            int x = i + dr1[d],y = j + dr2[d];
            if(x>=0&&x<row&&y>=0&&y<col && board[x][y]!='.' && board[x][y]==word[ind]){
                char ch = board[x][y];
                board[x][y] = '.';
                if(ind == n-1)return true;
                if(f(board,row,col,x,y,word,ind+1,n) == true)return true;
                board[x][y] = ch;
            }
        }
        
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = word.length();
        int row = board.size();
        int col = board[0].size();
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[i].size();j++){
                if(f(board,row,col,i,j,word,0,n)==true)return true;
            }
        }
        return false;
    }
};