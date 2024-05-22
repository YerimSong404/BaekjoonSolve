#include<stdio.h>
int main()
{
	int n;
	int answer=0;
	
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		int sum=i;
		int num = i;
		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}
		if (sum == n) {
			answer = i;
			break;
		}
	}
	printf("%d", answer);
}
