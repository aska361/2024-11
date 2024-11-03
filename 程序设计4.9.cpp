#include<stdio.h>
int main(){
	char num[99];
	int i=0,a;
	scanf("%s",num);
	for(i=0;num[i]!='\0';i++);
	printf("%d",i);
	while(num[i]!='\0'){
		print("%c",num[i]);
		i--;
	}
		return 0;
	
}
