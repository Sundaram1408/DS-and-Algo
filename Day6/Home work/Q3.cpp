/*
On an 8 x 8 chessboard, there is exactly one white rook 'R' and some number of white bishops 'B', black pawns 'p', and empty squares '.'.
When the rook moves, it chooses one of four cardinal directions (north, east, south, or west),
then moves in that direction until it chooses to stop, reaches the edge of the board, captures a black pawn, or is blocked by a white bishop.
A rook is considered attacking a pawn if the rook can capture the pawn on the rook's turn.
The number of available captures for the white rook is the number of pawns that the rook is attacking.
Return the number of available captures for the white rook.
*/

#include<bits/stdc++.h>
using namespace std;

int numRookCaptures(vector<vector<char>>& board) {
    int x=0,y=0,res=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j]=='R'){
                x=i;
                y=j;
            }
        }
    }
    for(int i=x;i>=0;i--) {
        if(board[i][y] == 'B')
            break;
        if(board[i][y] == 'p'){
            res++;
            break;
        }
    }
    for(int i=x;i<8;i++) {
        if(board[i][y] == 'B')
            break;
        if(board[i][y] == 'p'){
            res++;
            break;
        }
    }
    for(int i=y;i>=0;i--) {
        if(board[x][i] == 'B')
            break;
        if(board[x][i] == 'p'){
            res++;
            break;
        }
    }
    for(int i=y;i<8;i++) {
        if(board[x][i] == 'B')
            break;
        if(board[x][i] == 'p'){
            res++;
            break;
        }
    }
    return res;
}

int main(){
	vector<vector<char>>mat;
	int res;
	char x;
	for (int i = 0; i < 8; i++){
		vector<char>v;
		for(int j =0; j < 8; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	res=numRookCaptures(mat);
	cout<<res;
	return 0;
}
