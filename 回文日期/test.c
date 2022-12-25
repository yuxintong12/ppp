#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void div(int x, int* p)
{
	if (x < 10)
	{
		*p = x;
	}
	else
	{
		*p = x % 10;
		div(x / 10, p + 1);
	}
}
int is_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int year = 0;
	scanf("%4d", &year);
	int arr[4] = { 0 };
	int i = 0;
	int y = 0;
	scanf("%4d", &y);
	int new = year * 10000 + y;
	int output1 = 0;
	int output2 = 0;
	int flag1 = 1;
	int flag2 = 1;
	int m_date = 0;
	int r_day[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int p_day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (i = year; (flag1 || flag2); i++)
	{
		div(i, arr);
		int judge = is_year(i);
		int month = arr[0] * 10 + arr[1];
		if (month <= 0 || month > 12)
		{
			continue;
		}
		int day = arr[2] * 10 + arr[3];
		switch (judge)
		{
		case 1:
			if (day > r_day[month - 1])
			{
				continue;
			}
			else
			{
				m_date = i * 10000 + month * 100 + day;
			}
			break;
		case 0:
			if (day > p_day[month - 1])
			{
				continue;
			}
			else
			{
				m_date = i * 10000 + month * 100 + day;
			}
			break;
		}
		if (flag1 && m_date > new)
		{
			output1 = m_date;
			flag1 = 0;
		}
		if (arr[1] != arr[2]&&arr[0] !=arr[3])
		{
			if (m_date > new && arr[0] == arr[2] && arr[3] == arr[1] && flag2)
			{
				output2 = m_date;
				flag2 = 0;
			}
		}

	}
	printf("%d\n", output1);
	printf("%d\n", output2);
	return 0;
}