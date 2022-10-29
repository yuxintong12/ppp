#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[12][12] =
	{"000000000000",
	"0UDDLUULRUL0",
	"0UURLLLRRRU0",
	"0RRUURLDLRD0",
	"0RUDDDDUUUU0",
	"0URUDLLRRUU0",
	"0DURLRLDLRL0",
	"0ULLURLLRDU0",
	"0RDLULLRDDD0",
	"0UUDDUDUDLL0",
	"0ULRDLUURRR0",
	"000000000000" };
	int li;
	int ha;
	int i = 1;
	int count = 0;
	int count1 = 0;
	int j = 0;
	while (i <= 10)
	{
		j = 1;
		while (j <= 10)
		{
			count1 = 0;

			for (li = i, ha = j; li <= 10 && ha <= 10;)
			{

				if (arr[li][ha] == 'U')
				{
					li--;
					count1++;
				}
				else if (arr[li][ha] == 'D')
				{
					li++;
					count1++;
				}
				else if (arr[li][ha] == 'R')
				{

					ha++;
					count1++;
				}
				else if (arr[li][ha] == 'L')
				{
					ha--;
					count1++;
				}
				if (count1 > 20)
				{
					break;
				}
				if (li < 1 || ha < 1||li >10||ha >10)
				{
					count++;
					break;
				}
			}
			j++;
		}
		i++;
	}
	printf("%d", count);
		return 0;
}