#include<stdio.h>
#include<stdlib.h>
void convert(char s[]);


int main(void)
{
    char str[15];//�i��J���r���ƶq 
    printf("�п�J�@�Ӧr��:");
    gets(str);
    convert(str);
	printf("�j�p�g������:%s\n",str);
	
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
