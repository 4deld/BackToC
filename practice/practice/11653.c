#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n==1)
		printf("");
	else{
		for(int i=2; i<=n; i++){
			if(n%i==0){
				printf("%d\n",i);
				n/=i;
				while(n%i==0){
					printf("%d\n",i);
					n/=i;
			
				}
			}
				
			
		}
		
	}
	
	
	return 0;
}
