#include<stdio.h>
int main(){
	char ch[999];
	int max,i=0;
	printf("输入一串字符：");
	scanf("%s",ch);
	max=ch[0];
	for(i=1;ch[i] != '\0';i++){//特别注意这里ch[i]!='\0' 
		if(max < ch[i])
		max=ch[i];
	}
	printf("ASCLL码最大的字符是：");
	printf("%c",max);
	return 0;
} 
 
