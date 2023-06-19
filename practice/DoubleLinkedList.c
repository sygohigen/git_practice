#include "DoubleLinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input_data(DoubleLinkedList * head){
    printf("Please enter the name : ");
    gets(head->name);
    printf("Please enter the phone number : ");
    gets(head->phone_number);
    printf("Please enter the age : ");
    scanf("%d",&head->age);
    getchar();
}
void get_data(DoubleLinkedList *head){
    DoubleLinkedList *cur_p;
    cur_p = head->next_p;
    while(cur_p != NULL){
        printf("name : %s\n",cur_p->name);
        printf("phone number : %s\n",cur_p->phone_number);
        printf("age : %d\n",cur_p->age);
        cur_p = cur_p->next_p;
    }
}
DoubleLinkedList *init_node(){
    DoubleLinkedList *head;
    head = (DoubleLinkedList*)malloc(sizeof(DoubleLinkedList));
    head->past_p = NULL;
    head->next_p = NULL;
    return head;
}
void append_node(DoubleLinkedList *head){
    DoubleLinkedList *new_node, *cur_p;
    new_node = (DoubleLinkedList*)malloc(sizeof(DoubleLinkedList));
    input_data(new_node);
    cur_p = head;
    new_node->next_p = NULL;
    while(cur_p->next_p != NULL)    cur_p = cur_p->next_p;
    cur_p->next_p = new_node;
    new_node->past_p = cur_p;
}
void add_node(DoubleLinkedList *head, int index){
    DoubleLinkedList *new_node, *cur_p;
    new_node = (DoubleLinkedList*)malloc(sizeof(DoubleLinkedList));
    input_data(new_node);
    cur_p = head->next_p;
    index-=1;
    while(index--)  cur_p = cur_p->next_p;
    cur_p->past_p->next_p = new_node;
    new_node->past_p = cur_p->past_p;
    new_node->next_p = cur_p;
}
void find_node(DoubleLinkedList *head){
    unsigned char name[15];
    DoubleLinkedList *cur_p;
    cur_p = head->next_p;
    if(cur_p == NULL){
        printf("No data stored\n");
        return;
    }
    printf("Enter the name of the person you are looking for : ");
    gets(name);
    while(1){
        if(strcmp(cur_p->name,name) == 0) break;
        cur_p = cur_p->next_p;
    }
    printf("name : %s\n",cur_p->name);
    printf("phone number : %s\n",cur_p->phone_number);
    printf("age : %d\n",cur_p->age);
}
void delete_node(DoubleLinkedList *head, int index){
    DoubleLinkedList *cur_p;
    cur_p = head->next_p;
    index-=1;
    while(index--)  cur_p = cur_p->next_p;
    if(cur_p->next_p == NULL) cur_p->past_p->next_p = NULL;
    else{
        cur_p->next_p->past_p = cur_p->past_p;
        cur_p->past_p->next_p = cur_p->next_p;
    }
    free(cur_p);
}