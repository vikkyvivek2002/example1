#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int len, i, flag =0;
	printf("enter a string :");
	scanf("%s",&s);
	len = strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]!=s[len-i-1])
		{
			flag++;
			break;
		}
		
	}
	if(flag == 0)
	printf("palindrome ");
	else
	printf("not a pallindrome ");
}