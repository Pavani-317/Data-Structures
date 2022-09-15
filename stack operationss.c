#include<stdio.h>
#include<stdlib.h>
int Top=-1,arr[5];
void Push();
void Pop();
void show();
int main() {
	int choice;
	while(1) {
		printf("Operations performed by Stack");
		printf("\n1.Push\n2.Pop\n3.Peak\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				Push();
				break;
			case 2:
				Pop();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);

			default:
				printf("\nInvalid choice!!");
		}
	}
}
void Push() {
	int x;
	if(Top==5-1) {
		printf("\nOverflow\n");
	} else {
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		arr[Top]=x;
	}
}
void Pop() {
	if(Top==-1) {
		printf("\nUnderflow\n");
	} else {
		printf("\nPopped element:  %d",arr[Top]);
		Top=Top-1;
	}
}
void show() {
	if(Top==-1) {
		printf("\nUnderflow\n");
	} else {
		printf("\nElements present in the stack: \n");
		for(int i=Top; i>=0; --i)
		printf("%d\n",arr[i]);
	}
}
