//��������
//����������ַ�������Կո�Ϊ������������˫���������˫���ţ������еĿո�ͬ�����
//���磺
//���룺ls abc "bhdj abcd" "abcd"
//�����
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
	int count = 0;//��ǲ����ĸ���
	int sig = 2;//��ǲ�����ʼ����

	for (int i = 0; i < str.size(); i++)
	{
		//���������ʼ�������ܱ�2����
		//ÿ�ε������ַ�'"'��ʱ��+1�����ܱ�2������ʾ������ʼ���룬�ܱ�2 ������ʾ�������
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