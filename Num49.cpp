#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
//	freopen("input.txt", "rt", stdin);
	int a[11][11]={0,}, b[10]={0,};
	int i,j,n,sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
		 	a[j][i]=b[i];
		}	
	}
	for(i=n; i>=1; i--){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(a[i][j]>b[i]) a[i][j]=b[i];
		}	
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			sum+=a[i][j];	
		}
	}
	printf("%d", sum);
	return 0; 
}

