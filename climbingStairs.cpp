/*given the number 'n', print number of ways in which we can reach the Nth stair
starting from 0, we can take 1 or 2 step at a time
*/
#include<bits/stdc++.h>
using namespace std;

int ways(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return ways(n-1)+ways(n-2);

}

int main(){
    int n; cin>>n;
    cout<<ways(n);

    return 0;
}