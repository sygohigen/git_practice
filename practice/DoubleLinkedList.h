#ifndef __Double_LINKED_LIST__
#define __Double_LINKED_LIST__

typedef struct DoubleLinkedList{
    struct DoubleLinkedList *past_p;
    struct DoubleLinkedList *next_p;
    unsigned char name[15];
    unsigned char phone_number[15];
    int age;
}DoubleLinkedList;

void input_data(DoubleLinkedList * head);
void get_data(DoubleLinkedList *head);
DoubleLinkedList *init_node();
void append_node(DoubleLinkedList *head);
void add_node(DoubleLinkedList *head, int index);
void find_node(DoubleLinkedList *head);
void delete_node(DoubleLinkedList *head, int index);

#endif