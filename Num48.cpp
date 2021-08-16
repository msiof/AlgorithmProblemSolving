#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
	int i,j,sum,dif,key,avg;
	int a[9][9];
	for(i=0;i<9;i++){
		sum=0;
		for(j=0;j<9;j++){
			scanf("%d", &a[i][j]);
			sum=sum+a[i][j];
		}
		avg=sum/9.0+0.5;
		
		printf("%d ", avg);	//여기에 바로 이어서 작성해버리기
		dif=2147000000;
		for(j=0;j<9;j++){
			if(abs(avg-a[i][j]) < dif) {
				dif=abs(avg-a[i][j]);
				key=a[i][j];	
			}
			else if(abs(avg-a[i][j])==dif){ //이 부분을 생각해내는데 어려움을 겪음 
				if(a[i][j]>key) key=a[i][j];	
			}
		}
		printf("%d\n", key);
	}

	return 0; 
}

