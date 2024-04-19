#include <stdio.h>
int main()
{
	char arr1[35] = { "************************\n" };
	char arr2[35] = { "          Kiana         \n" };
	char arr3[35] = { "************************\n" };
	char arr4[35] = { "   I want to only say   \n" };
	char arr5[35] = { "********************************\n" };
	char arr6[35] = { "You are the beauty in this world\n" };
	int x, y;
	x = 0;
	y = sizeof(arr2) - 1;
	while (x <= y)
	{
		arr1[x] = arr2[x];
		arr1[y] = arr2[y];
		arr3[x] = arr4[x];
		arr3[y] = arr4[y];
		arr5[x] = arr6[x];
		arr5[y] = arr6[y];
		printf("%s\n", &arr1);
		printf("%s\n", &arr3);
		printf("%s\n", &arr5);
		x++;
		y--;
		Sleep(100);
		system("cls");
	}
	printf("%s\n", &arr1);
	printf("%s\n", &arr3);
	printf("%s\n", &arr5);
	return 0;
}