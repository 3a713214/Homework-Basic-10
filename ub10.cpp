#include<stdio.h>
#include<stdlib.h>
void convert(char s[]);


int main(void)
{
    char str[15];//可輸入的字元數量 
    printf("請輸入一個字串:");
    gets(str);
    convert(str);
	printf("大小寫互換後:%s\n",str);
	
	system("pause");
	return 0;
}
void convert(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>='a' && s[i]<='z')
			s[i]=s[i]-32;
		else if(s[i]>='A' && s[i]<='Z')
			s[i]=s[i]+32;
		i++;
	}
}
