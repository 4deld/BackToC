#include<stdio.h>
#include<math.h>


int main(){
    int n;
    
    scanf("%d",&n);
    
    for(int i=n; ; i++){
        if(i==1){
            printf("2");
            break;
        }
        int len=0;
        int u=i,k=i;
        while(u!=0){
            u/=10;
            len++;
        }
        int p=pow(10,len-1);
        
        int h=10;
        int flag=0; //12345
        for(int j=0; j<len/2; j++){
            int s=k/p%h; //1 
            p/=100; // 
            int e=k%10; // 5
            k/=10; //1234
            if(s!=e){
                flag=1;
                break;
            }
            
        }
        int Sflag=0;
        if(!flag){
            for(int t=2; t<n; t++){
                if(i%t==0){
                    Sflag=1;
                    break;
                }
            }
            if(!Sflag){
            printf("%d",i);
            break;
            }
        }
        
        
    }
    
    
    return 0;
}
