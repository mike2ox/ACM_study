/*
*	author : mike2ox
*	TOP : 미로 만드는 사람
*	descript : Top coder p.158 ~
*	type : Search
*/
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<queue>
using namespace std;

string s;
vector<string> maze;
vector<int> moveRow;
vector<int> moveCol;

int main(){

	int startRow, startCol;

	getline(cin, s);
	cin >> startRow >> startCol;
	stringstream ss(s);
	while (ss.good()) {
		string substr;
		getline(ss, substr, ' ');
		maze.push_back(substr);
	}
	
	string r,c;
	cin >> r >> c;
	stringstream ss2(r), ss3(c);
	while (ss2.good() || ss3.good()) {
		string substr;
		getline(ss2, substr, ' ');
		moveRow.push_back(std::stoi(substr));
		getline(ss3, substr, ' ');
		moveCol.push_back(std::stoi(substr));
	}


	int max = 0;
	int width = maze[0].size(), height = maze.size();
	int board[50][50];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			board[i][j] = -1;

	board[startRow][startCol] =0;
	queue<int> qX;
	queue<int> qY;
	qX.push(startCol);
	qY.push(startRow);

	while (qX.size() > 0) {
		int x = qX.front();
		int y = qY.front();

		qX.pop(); qY.pop();

		for (int i = 0; i < moveRow.size(); i++) {
			int nextX = x + moveCol[i];
			int nextY =y + moveRow[i];

			if (0 <= nextX && nextX < width && 0 <= nextY && nextY < height
				&& board[nextY][nextX] == -1 && maze[nextY].substr(nextX, 1) == ".") {
				board[nextY][nextX] = board[y][x] + 1;
				qX.push(nextX);
				qY.push(nextY);
			}
		}
	}

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (maze[i].substr(j, 1) == "." && board[i][j] == -1)
				return -1;
			max = std::max(max, board[i][j]);
		}
	}

	cout << max;
	return 0;
};