#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
//	freopen("input.txt", "rt", stdin);
	int n,m,i,j,h,w,sum,max=-2147000000,k,s;
	int a[51][51];
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			scanf("%d", &a[i][j]);		
		}
	}
	scanf("%d %d", &h, &w);
	for(i=1; i<=n-h+1; i++){
		for(j=1; j<=m-w+1; j++){
			sum=0;
			for(k=i; k<i+h; k++){
				for(s=j; s<j+w; s++){
					sum=sum+a[k][s];
				}
			}
			if(sum>max) max=sum;
		}
	}
	printf("%d", max);
	return 0; 
}

