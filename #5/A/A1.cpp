#include <iostream>
#include <vector>

using namespace std;




int main(){
	freopen("number.in","r", stdin);
	freopen("number.out","w", stdout);
	
	int a[1000];
	
	int x;
	int it=0;
	
	while(cin >> x){
		a[it] = x;
		it++;
	}
	
	 for (int i = 0; i < it-1; i++) {
        for (int j = 0; j < it-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    int counter = 1;
    int maxCount = 1;
    int num = a[0];
    for (int i = 1; i < it; i++){
    	if(a[i]==a[i-1])
    	{
    		counter++;
    		if(counter > maxCount){
    			maxCount = counter;
    			num = a[i];
			}else
				if(counter==maxCount){
					if(num<a[i])
						num = a[i];
				}
		}
		else
			counter = 1;
	}
	
	
	cout << num;
	
	return 0;
}

