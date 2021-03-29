#include <stdio.h>

int main (){
	
	int n[20],i,j,sum=0,sum1=0;
	int m[20][20],c[20][20],k[20][20];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m[i][j]);
		}
		
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&c[i][j]);
		}
		
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&k[i][j]);
		}
		
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum+=m[i][j];
			sum1+=m[i+1][j];
			
		}
		break;
	}
		if(sum==sum1){
			printf("No");
		}else
			printf("Yes");
	
	
	sum=0;
	sum1=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			sum+=c[i][j];
			sum1+=c[i+1][j];
			
		}
		break;
	}
		if(sum==sum1){
			printf("No");
		}else
			printf("Yes");
	
	
	sum=0;
	sum1=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			sum+=k[i][j];
			sum1+=k[i+1][j];
			
		}
		break;
	}
		if(sum==sum1){
			printf("No");
		}else
			printf("Yes");
}
