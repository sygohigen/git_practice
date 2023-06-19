#ifndef __CIRCLE_LIST__
#define __CIRCLE_LIST__

typedef struct{
	int tag_head;
	int tag_tail;
	int max_size;
	unsigned char name[15];
    unsigned char phone_number[14];
    int age;
}CircleList;

#endif