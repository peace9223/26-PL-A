#include <stdio.h>

int calcTriangleArea(int a, int b);
int calcRectangleArea(int a, int b);

int main()
{
	int a,b;
	printf("Input two integers : ");
	scanf("%d %d",&a,&b);

	int triArea = calcTriangleArea(a,b);
	int recArea = calcRectangleArea(a,b);

	printf("삼각형의 면적 = %d\n",triArea);
	printf("사각형의 면적 = %d\n",recArea);
	return 0;
}
