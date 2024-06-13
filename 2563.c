#include<stdio.h>

int main()
{
	int num;
	int paper[100][100] = { 0 };
	int cnt = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		for (int j = y; j < y+10; j++)
		{
			for (int w = x; w < x+10; w++)
			{
				if (paper[j][w] == 0) 
					paper[j][w] = 1; // 도화지가 빈칸일 경우 색칠 
				else if (paper[j][w] == 1)
					{ } // 이미 칠해져 있을경우 그대로 둠 (paper[j][w] = 1; 혹은 1로 재설정)
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (paper[j][i] == 1)
				cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}
