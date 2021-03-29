#include <stdio.h>


int main(){
	
	int n,i,j,min=0,temp=0;
	
	scanf("%d",&n);
	
	fflush(stdin);
	
	int m[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
	
	}

	for(i=0;i<n;i++){
		
		min=m[i];
		for(j=i;j<n;j++){
			if(min>m[j]){
				min=m[j];
				temp=m[i];
				m[i]=m[j];
				m[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if((m[i]==m[j])&&(m[i]!=m[j+2]))
				printf("%d\n",m[i]);
		}
	}
	return 0;
	

}
