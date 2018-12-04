#include <iostream>

using namespace std;

bool dvoyak(int a){
    int nums[10];
    int count = 0;
    for(int i = 0;i<10;i++) nums[i]=0;

    while(a){
        int num = a%10;
        if(nums[num]==0){
            nums[a%10]=1;
            count++;
        }
        a/=10;
    }
    return (count<=2);
}

int main(){
    
    int n;
    cin >> n;
   
	cout << dvoyak(n);    
    return 0;
}
