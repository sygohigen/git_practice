#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "LInkedList.h"
//#include "DoubleLInkedList.h"
#include "CircleList.h"

#ifdef __LINKED_LIST__
int main(){
    int menu, number;
    LinkedList *head;
    head = init_node();
    while(1){
        printf("choose a menu\n");
        printf("1 : add person, 2 : find person, 3 : Show address book : 0: Exit : ");
        scanf("%d",&menu);
        getchar();
        if(menu == 0) break;
        else if(menu <0 && menu>3){
            printf("Wrong menu selection.\n");
            continue;
        }
        switch(menu){
        case 1:
            printf("How many people do you want to add to your address book? : ");
            scanf("%d",&number);
            getchar();
            while(number-- !=0) append_node(head);
            break;
        case 2:
            find_node(head);
            break;
        case 3:
            get_data(head);
            break;
        }
    }
    return 0;
}
#endif
#ifdef __Double_LINKED_LIST__
int main(){
    int menu, number, index;
    DoubleLinkedList *head;
    head = init_node();
    while(1){
        printf("choose a menu\n");
        printf("1: create address book, 2: add person, 3: find person, 4: Show address book, 5: remove address, 0: Exit : ");
        scanf("%d",&menu);
        getchar();
        if(menu == 0) break;
        else if(menu <0 && menu>3){
            printf("Wrong menu selection.\n");
            continue;
        }
        switch(menu){
        case 1:
            printf("How many people do you want to add to your address book? : ");
            scanf("%d",&number);
            getchar();
            while(number-- !=0) append_node(head);
            break;
        case 2:
            printf("What number would you like to add? : ");
            scanf("%d",&index);
            getchar();
            add_node(head,index);
            break;
        case 3:
            find_node(head);
            break;
        case 4:
            get_data(head);
            break;
        case 5:
            printf("Which address do you want to delete? : ");
            scanf("%d",&index);
            getchar();
            delete_node(head,index);
            break;
        }
    }
    return 0;
}
#endif
#ifdef __CIRCLE_LIST__
int main(){
    int menu, number, index;
    DoubleLinkedList *head;
    head = init_node();
    while(1){
        printf("choose a menu\n");
        printf("1: create address book, 2: add person, 3: find person, 4: Show address book, 5: remove address, 0: Exit : ");
        scanf("%d",&menu);
        getchar();
        if(menu == 0) break;
        else if(menu <0 && menu>3){
            printf("Wrong menu selection.\n");
            continue;
        }
        switch(menu){
        case 1:
            printf("How many people do you want to add to your address book? : ");
            scanf("%d",&number);
            getchar();
            while(number-- !=0) append_node(head);
            break;
        case 2:
            printf("What number would you like to add? : ");
            scanf("%d",&index);
            getchar();
            add_node(head,index);
            break;
        case 3:
            find_node(head);
            break;
        case 4:
            get_data(head);
            break;
        case 5:
            printf("Which address do you want to delete? : ");
            scanf("%d",&index);
            getchar();
            delete_node(head,index);
            break;
        }
    }
    return 0;
}
#endif