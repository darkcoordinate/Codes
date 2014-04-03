#include<stdio.h>
#include<stdlib.h>

typedef struct point point;
typedef struct point2 point2;
typedef int bool;

#define TRUE 1
#define FALSE 0

struct point
{
//
	int a;
	int indx;
	point* next;
	point* prev;
};

struct point2 
{
//to make a generic struct so that you can 
//make linked list of any kind just by converting 
//that pointer to type void* and then referencing it to
//point 
	void* point;
	point2* next;
	point2* prev;
};

void addpoint2(point2* list, void* a)
{
//add data to the point2 linkedlist
	point2* p1;
	point2* p2;
	p1 = list;
	p2 = (point2*)malloc(sizeof(point));
	p2->point = a;
	p2->next = NULL;
	p2->prev = NULL;
	while(p1->next != NULL)
	{
		p1 = p1->next;
	}
	p1->next = p2;
	p1->prev = p1;
	p1 = NULL;
	p2 = NULL;
}



void addpoint( point* list, int a)
{
	point* p1;
	point* p2;
	p1 = list;
	p2 = (point*)malloc(sizeof(point));
	p2->a = a;
	p2->next = NULL;
	p2->prev = NULL;
	while ( p1->next != NULL)
	{
		p1 = p1->next;
	}
	p1->next = p2;
	p2->indx = p1->indx + 1;
	p2->prev = p1;
	p1 = NULL;
	p2 = NULL;
}

void addpoint_to_point2(point2* list, point* list_point)
{
	list->point = (void*)list_point;
}

void makechar_word(point* list, int size, char* cha)
{
	list = (point*)malloc(sizeof(point));
	list->a = (int)cha[1];
	list->next = NULL;
	list->prev = NULL;
	list->indx = 0;
	point* p1;
	p1 = list;
	while(p1->next != NULL)
	{
		p1
	}
	
void listtree(point* list, int a)
{
	point* p1;
	p1 = list;
	printf("*--------------------------------*\n");
	printf("--list\n");
	while(p1 != NULL)
	{
		printf("	|-----------0x%x\n",(unsigned int)p1);
		printf("	|	|-- a = %d :- %c\n",p1->a, p1->a);
		printf("	|   	|-- indx = %d\n", p1->indx);
		if(a == 1)
		{
			if(p1->next == NULL)
			{
				printf("	|	|-- next = NULL\n");
			}
			else
			{
				printf("	|	|-- next = 0x%x\n",(unsigned int)(p1->next));
			}
			if(p1->prev == NULL)
			{
				printf("	|	|-- next = NULL\n");
			}
			else
			{
				printf("	|	|-- prev = 0x%x\n",(unsigned int)(p1->prev));
			}
		}
		p1 = p1->next;
	}
		
}

void printcontent(point* list)
{
	point* p1 = list;
	while(p1 != NULL)
	{
		printf("%c",p1->a);
		p1 = p1->next;
	}
}

void make_word(point* list, point2* list2)
{
	point* p1 = list;
	point* p2 = NULL;
	while(p1 != NULL)
	{	
		if((p1->a == 32)||(p1->a == 10))
		{
			void* n = (void*)p2;
			addpoint2(list2,n);
			p2 = NULL;
			free(p2);
			p2 = (point*)malloc(sizeof(point));
		}
		else
		{	
			if(p2->a == 0)
			{
				p2->a = p1->a;
			}
			else
			{
				addpoint(p2,p1->a);
			}
		}
		p1 = p1->next;
	}
	void* n = (void*)p2;
	addpoint2(list2,n);
	p2 = NULL;
	free(p2);	
}

bool match_word(point* list1, point* list2)
{
	bool t = TRUE;
	point* p1 = list1;
	point* p2 = list2;
	while(p1 != NULL)
	{
		if(p1->a == p2->a)
		{
		}
		else
		{
			t = FALSE;
		}
		p1 = p1->next;
		p2 = p2->next;
	}
	if(!(p1->prev->indx = p2->prev->indx))
		t = FALSE;
	return 	t;
}

void print_words(point2* list)
{
	point2* p1 = list;
	point* p2;
	while(p1 != NULL)
	{
		p2 = (point*)(p1->point);
		printf("Word at 0x%x\n------------------------\n",(unsigned int)p1);
		listtree(p2, 2);
		p1 = p1->next;
	}
}


int main(int argv, char** argc)
{
	FILE *fs;
	fs = fopen("/home/analyst/Documents/input000.txt","r");
	point* list;
	list = (point*)malloc(sizeof(point*));
	list->a = 32;
	list->indx = 0;
	list->next = NULL;
	list->prev = NULL;
	int i= 0;
	while( (i = getc(fs)) != EOF)
	{
		addpoint(list, i);
	}
	printf("%d",**argc);
	//listtree(list, **argc);
	printcontent(list);

	point2* k = (point2*)malloc(sizeof(point2));
	make_word(list,k);
	print_words(k);
	return 0;
}
