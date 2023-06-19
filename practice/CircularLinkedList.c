// #include "CircularLinkedList.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void input_data(CircularLinkedList * head){
//     printf("Please enter the name : ");
//     gets(head->name);
//     printf("Please enter the phone number : ");
//     gets(head->phone_number);
//     printf("Please enter the age : ");
//     scanf("%d",&head->age);
//     getchar();
// }
// void get_data(CircularLinkedList *head){
//     CircularLinkedList *cur_p;
//     cur_p = head->next_p;
//     while(cur_p != NULL){
//         printf("name : %s\n",cur_p->name);
//         printf("phone number : %s\n",cur_p->phone_number);
//         printf("age : %d\n",cur_p->age);
//         cur_p = cur_p->next_p;
//     }
// }
// CircularLinkedList *init_node(){
//     CircularLinkedList *head;
//     head = (CircularLinkedList*)malloc(sizeof(CircularLinkedList));
//     head->next_p = NULL;
//     return head;
// }
// void append_node(CircularLinkedList *head){
//     CircularLinkedList *new_node, *cur_p;
//     new_node = (CircularLinkedList*)malloc(sizeof(CircularLinkedList));
//     input_data(new_node);
//     cur_p = head;
//     while(cur_p->next_p != NULL && cur_p != head->next_p)    cur_p = cur_p->next_p;
//     cur_p->next_p = new_node;
//     new_node->next_p = head->next_p;
// }
// void add_node(CircularLinkedList *head, int index){
//     CircularLinkedList *new_node, *cur_p;
//     new_node = (CircularLinkedList*)malloc(sizeof(CircularLinkedList));
//     input_data(new_node);
//     cur_p = head->next_p;
//     index-=2;
//     while(index--)  cur_p = cur_p->next_p;
//     new_node->next_p = cur_p->next_p;
//     cur_p->next_p = new_node;
// }
// void find_node(CircularLinkedList *head){
//     unsigned char name[15];
//     CircularLinkedList *cur_p;
//     cur_p = head->next_p;
//     if(cur_p == NULL){
//         printf("No data stored\n");
//         return;
//     }
//     printf("Enter the name of the person you are looking for : ");
//     gets(name);
//     while(1){
//         if(strcmp(cur_p->name,name) == 0) break;
//         cur_p = cur_p->next_p;
//     }
//     printf("name : %s\n",cur_p->name);
//     printf("phone number : %s\n",cur_p->phone_number);
//     printf("age : %d\n",cur_p->age);
// }
// void delete_node(CircularLinkedList *head, int index){
//     CircularLinkedList *cur_p, *temp;
//     cur_p = head;
//     index-=1;
//     while(index--)  cur_p = cur_p->next_p;
//     temp = cur_p->next_p;
//     cur_p->next_p = cur_p->next_p->next_p;
//     free(temp);
// }