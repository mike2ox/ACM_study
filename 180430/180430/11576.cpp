/*
*	author : quisutdeus7
*	BJO : no. 11576
*	status : solve
*	type : practice problem[PP]
*/
#include <iostream> 

using namespace std;
int a, b, n;

void timemc(int ans, int base) {
	if (ans == 0)
		return;
	timemc(ans / base, base);
	printf("%d ", ans%base);
}

int main() {

	cin >> a >> b;
	cin >> n;
	int result = 0;

	for (int i = 0; i<n; i++) {
		int x;
		cin >> x;
		result = result * a + x;
	}

	timemc(result, b);
	return 0;
}
