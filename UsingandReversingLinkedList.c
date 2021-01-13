#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
} listnode;
void assignvals(struct ListNode*);
void readVals(struct ListNode*);
struct ListNode* reverseLinkedList(struct ListNode*);

int main() {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(listnode));
    struct ListNode *node = (struct ListNode*)malloc(sizeof(listnode));
    struct ListNode* node1 = (struct ListNode*)malloc(sizeof(listnode));
    struct ListNode* node2 = (struct ListNode*)malloc(sizeof(listnode));
    struct ListNode* node3 = (struct ListNode*)malloc(sizeof(listnode));
    struct ListNode* node4 = (struct ListNode*)malloc(sizeof(listnode));
    struct ListNode* node5 = (struct ListNode*)malloc(sizeof(listnode));

    head->next = node;
    node->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    assignvals(head);
    printf("Before reverse:\n");
    readVals(head);
    head = reverseLinkedList(head);
    printf("After Reverse:\n");
    readVals(head);

    free(node5);
    free(node4);
    free(node3);
    free(node2);
    free(node1);
    free(node);

    node5 = NULL;
    node4 = NULL;
    node3 = NULL;
    node2 = NULL;
    node1 = NULL;
    node = NULL;
    head = NULL;
    return 0;
}

void assignvals(struct ListNode* list){
    int counter = 0;
    while(list->next != NULL){
        list->val = counter;
        counter ++;
        list = list->next;
    }
    list->val = counter;
}
void readVals(struct ListNode* list){
    while(list->next != NULL){
        printf("The Val is: %d\n", list->val);
        list = list->next;
    }
    printf("The Val is: %d\n", list->val);
}
struct ListNode* reverseLinkedList(struct ListNode* list){
    struct ListNode* Head = list;
    struct ListNode* node = NULL;
    struct ListNode* tail = NULL;
    bool first = true;

    while(list->next != NULL){
        node = list;
        list = list->next;

        if(list->next == NULL){
            list->next = node;
            node->next = NULL;
            if(first){
                tail = list;
                first = false;
            }
            list = Head;
        }
    }
    Head = NULL;
    return tail;
}


