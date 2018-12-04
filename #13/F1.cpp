#include <iostream>
#include <algorithm>

using namespace std;

int L[10010];

int main(){
    freopen("team.in","r",stdin);
    freopen("team.out","w",stdout);

    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> L[i];
    }
    sort(L,L+n);
    int i = 0;
    int j = 1;
    int maxLevel = 0;
    int sum = L[0]+L[1];
    while(j<n){
        if(L[j]<=(L[i]+L[i+1])){
            j++;
            sum+=L[j];
            if(sum>maxLevel) maxLevel = sum;
        }else{
            sum-=L[i];
            i++;
        }
    }
    cout << sum;

    return 0;
}
