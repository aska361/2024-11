#include<stdio.h>
int main(){
	char ch[999];
	int max,i=0;
	printf("����һ���ַ���");
	scanf("%s",ch);
	max=ch[0];
	for(i=1;ch[i] != '\0';i++){//�ر�ע������ch[i]!='\0' 
		if(max < ch[i])
		max=ch[i];
	}
	printf("ASCLL�������ַ��ǣ�");
	printf("%c",max);
	return 0;
} 
 
