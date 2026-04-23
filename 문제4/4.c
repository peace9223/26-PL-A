#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct student {
	char name[20];
	int year;
	char no[20];
	char phone[20];
} Student;
void PrintStudent(Student* s) 
{
	printf("이름:%-10s", s->name);
	printf(" 학년:%2d", s->year);
	printf(" 학번:%-10s", s->no);
	printf(" 전화:%-10s\n", s->phone);
}
void InputStudent(Student* s) 
{
	printf("이름: "); scanf("%s", s->name);
	printf("학년: "); scanf("%d", &s->year);
	printf("학번: "); scanf("%s", s->no);
	printf("전화: "); scanf("%s", s->phone);
}
void main(void)
{
	int i, count, found;
	char name[20]; 
	Student* data;
	printf("몇명 : ");
	scanf("%d", &count);
	data = (Student*)malloc(sizeof(Student)*count); 
	for (i = 0; i < count; i++) {
		printf("\n자료번호 %d 입력\n", i + 1);
		InputStudent(&data[i]);
	}
	for (i = 0; i < count; i++) 
		PrintStudent(&data[i]);
	printf("찾을 이름: ");
	scanf("%s", name); 
	found = 0;
	for (i = 0; i < count; i++) { 
		if (strcmp(name, data[i].name) == 0)
		{
			break;
		}
		else found++;
	}
	if (i < count) 
		PrintStudent(&data[i]);
	else
		printf("찾는 데이타가 없습니다.\n");
}


