/*
*	author : quisutdeus7
*	BJO : no. 1924
*	status : solved
*/
#include<iostream>
using namespace std;

int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
char days[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int x, y;
int purpose =0;		//목표 날짜

int main() {

	cin >> x >> y;
	
	for (int i = 0; i < x - 1; i++)
		purpose += mon[i];	//월 찾기
	purpose += y;			//일 찾기

	cout << days[purpose % 7];

	return 0;
}