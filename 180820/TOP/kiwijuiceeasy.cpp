/*
*	author : mike2ox
*	TOP : 키위주스
*	descript : Top coder p.65~78
*	type : simulation
*/

#include <iostream>
#include<list>
#include<algorithm>
using namespace std;

#define MIN(a,b) (a < b ? a : b)

// input : list type
// output: list type
/*list<int> pouring(list<int> capacity,list<int> bottle,list<int> fromID, list<int> toID, list<int>::iterator iters){
    for (int i=0;i<sizeof(fromID)/sizeof(i);i++){
        int from = iters[2][i]; 
        int to = toID[i];
        int last = MIN(bottle[i], capacity[i] - bottle[i]);

        bottle[from] -= last;
        bottle[to] += last;
    }

    return bottle;
}*/
int main(){

    list<int> capacities = {10, 10};
    list<int> bottles = {5, 8};
    list<int> fromID = {0};
    list<int> toID = {1};
    
    list<int>::iterator iter[4] = {capacities.begin(), bottles.begin(),fromID.begin(), toID.begin()};
    
    //list<int> result = pouring(capacities,bottles,fromID,toID, iter)
    cout << iter[1];
    return 0;
}