// #include "LinkedList.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void input_data(LinkedList * head){
//     printf("Please enter the name : ");
//     gets(head->name);
//     printf("Please enter the phone number : ");
//     gets(head->phone_number);
//     printf("Please enter the age : ");
//     scanf("%d",&head->age);
//     getchar();
// }
// void get_data(LinkedList *head){
//     LinkedList *cur_p;
//     cur_p = head->next_p;
//     while(cur_p != NULL){
//         printf("name : %s\n",cur_p->name);
//         printf("phone number : %s\n",cur_p->phone_number);
//         printf("age : %d\n",cur_p->age);
//         cur_p = cur_p->next_p;
//     }
// }
// LinkedList *init_node(){
//     LinkedList *head;
//     head = (LinkedList*)malloc(sizeof(LinkedList));
//     head->next_p = NULL;
//     return head;
// }
// void append_node(LinkedList *head){
//     LinkedList *new_node, *cur_p;
//     new_node = (LinkedList*)malloc(sizeof(LinkedList));
//     input_data(new_node);
//     cur_p = head;
//     new_node->next_p = NULL;
//     while(cur_p->next_p != NULL)    cur_p = cur_p->next_p;
//     cur_p->next_p = new_node;
// }
// void find_node(LinkedList *head){
//     unsigned char name[10];
//     LinkedList *cur_p;
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