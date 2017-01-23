#include<conio.h>
#include<stdio.h>
#include<malloc.h>

void create_ll();
void display();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_before();
void delete_after();

struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;

void main(){
	int option;
	clrscr();
	do{
		printf("1. Create ll - \n");
		printf("2. Display ll - \n");
		printf("3. Insert beginning - \n");
		printf("4. Insert end - \n");
		printf("5. Insert before given node - \n");
		printf("6. Insert after given node - \n");
		printf("7. Delete from beginning - \n");
		printf("8. Delete from end - \n");
		printf("9. Delete before given node - \n");
		printf("10. Delete after given node - \n");
		printf("11. EXIT \n");
		scanf("%d",&option);
		switch(option){
			case 1 : create_ll();
				display();
				break;
			case 2 : display();
				break;
			case 3 : insert_beg();
				display();
				break;
			case 4 : insert_end();
				display();
				break;
			case 5 : insert_before();
				display();
				break;
			case 6 : insert_after();
				display();
				break;
			case 7 : delete_beg();
				display();
				break;
			case 8 : delete_end();
				display();
				break;
			case 9 : delete_before();
				display();
				break;
			case 10 : delete_after();
				display();
				break;
		}
	}
	while(option!=11);
	getch();
}

void create_ll(){
	int n,a[10];
	struct node *ptr,*new_node;
	printf("Enter number of terms - ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ptr = start;
	if(start==NULL){
		new_node = (struct node *)malloc(sizeof(struct node));
		new_node->data = a[0];
		start = new_node;
		new_node->next = NULL;
	}

	       for(i=1;i<n;i++){
			ptr = start;
			new_node = (struct node *)malloc(sizeof(struct node));
			new_node->data = a[i];
			while(ptr->next!=NULL){
				ptr = ptr->next;
			}
			ptr->next = new_node;
			new_node->next = NULL;
	       }
}

void display(){
	struct node *ptr;
	ptr = start;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

void insert_beg(){
	int val;
	struct node *new_node,*ptr;
	ptr = start;
	printf("Enter data - ");
	scanf("%d",&val);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = val;
	new_node->next = start;
	start = new_node;
}

void insert_end(){
	int val;
	struct node *ptr,*new_node;
	ptr = start;
	printf("Enter data - ");
	scanf("%d",&val);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = val;
	new_node->next = NULL;
	while(ptr->next!=NULL){
		ptr = ptr->next;
	}
	ptr->next = new_node;
}

void delete_beg(){
	struct node *ptr;
	ptr = start;
	start = start->next;
	free(ptr);
}

void delete_end(){
	struct node *ptr,*preptr;
	ptr = start;
	while(ptr->next!=NULL){
		preptr = ptr;
		ptr = ptr->next;
	}
preptr->next = NULL;
	free(ptr);
}

void insert_before(){
	struct node *ptr,*new_node,*preptr;
	int val1,val2;
	printf("Enter the value before you want to insert - ");
	scanf("%d",&val1);
	printf("Enter data - ");
	scanf("%d",&val2);
	ptr = start;
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = val2;
	while(ptr->data != val1){
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = new_node;
	new_node->next =  ptr;
}

void insert_after(){
	int val1,val2;
	struct node *ptr,*preptr,*new_node;
	printf("Enter the value after you want to insert - ");
	scanf("%d",&val1);
	printf("Enter data - ");
	scanf("%d",&val2);
	ptr = start;
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = val2;
	while(preptr->data!=val1){
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = new_node;
	new_node->next = ptr;
}

void delete_before(){
	int val;
	struct node *ptr,*preptr;
	printf("Enter the data of node before which you want to delete - ");
	scanf("%d",&val);
	ptr = start;
	while(ptr->next->data!=val){
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = ptr->next;
	free(ptr);
}

void delete_after(){
	int val;
	struct node *ptr,*preptr;
	printf("Enter the data of node after which you want to delete - ");
	scanf("%d",&val);
	ptr = start;
	while(preptr->data!=val){
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = ptr->next;
	free(ptr);
}
