class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        bool flag=1;
        for(int i=0;i<9;i++)
        {
            map<char,int>mp;
            int l=i%3;
            int m=i/3;
            for(int j=l*3;j< (l*3+3); j++){
                for(int k=m*3;k< (m*3+3); k++){
                    if(board[j][k]!='.') mp[board[j][k]]++;
                    if(mp[board[j][k]]>1) flag=0; 
                    map<char,int>map1,map2;
                    for(int x=0;x<9;x++)
                    {
                        if(x!=k && board[j][x]!='.') map1[board[j][x]]++;
                        if(map1[board[j][x]]>1) flag=0; 
                    }
                    for(int x=0;x<9;x++)
                    {
                        
                        if(x!=j && board[x][k]!='.') map2[board[x][k]]++; 
                        if(map2[board[x][k]]>1) 
                        {
                            flag=0; cout <<board[x][k] <<" ";
                        }
                        
                    }
                    
                }   
            }
        }
        return flag;

    }
};
