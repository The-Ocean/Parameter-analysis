//参数解析
//解析输入的字符串命令，以空格为间隔，如果遇到双引号则不输出双引号，引号中的空格同样输出
//例如：
//输入：ls abc "bhdj abcd" "abcd"
//输出：
//ls
//abc
//bhdj abcd
//abcd
#include<iostream>
#include<string>

int main()
{
	std::string str;
	std::getline(std::cin, str);
	int count = 0;//标记参数的个数
	int sig = 2;//标记参数开始读入

	for (int i = 0; i < str.size(); i++)
	{
		//如果参数开始读入则能被2整除
		//每次当遇到字符'"'的时候+1，则不能别2整除表示参数开始读入，能被2 整除表示读入结束
		if (str[i] == '"')
		{
			sig++;
			continue;
		}
		
		if (str[i] == ' ' && sig % 2 == 0)
		{
			count++;
		}
	}
	count++;
	printf("%d\n", count);
	sig = 2;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '"')
		{
			sig++;
			continue;
		}
		if (str[i] == ' ' && sig % 2 == 0)
		{
			printf("\n");
			continue;
		}
		printf("%c", str[i]);
	}

	return 0;
}