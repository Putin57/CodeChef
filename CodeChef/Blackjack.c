#include <stdio.h>
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		if(a+b>=11){printf("%d\n",21-(a+b));}
		else{printf("-1\n");}
	}
	return 0;
}