#include<stdio.h>

int main()
{
	int y;
	scanf("%d", &y);

	int cnt = 0;
	
	if (y % 5 == 0) {
		cnt = y / 5;
		printf("%d", cnt);
	}
	else if (y % 5 != 0)
	{
		while (y>=0)
		{
			y -= 3;
			cnt++;
			if (y % 5 == 0)
			{
				cnt += y / 5;
				printf("%d", cnt);
				break;
			}
			if (y < 0) {
				printf("%d", -1);
				break;
			}
		}
	}

	return 0;
}
