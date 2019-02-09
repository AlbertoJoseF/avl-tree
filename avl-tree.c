#include <stdio.h>
typedef enum{false, true} Bool;

/*Node struct with its members.*/
struct Node
{
	int value;
	int balance;
	struct Node *left_child;
	struct Node *right_child;
};

/*Function which searches in a binary tree for a value (data), given a root Node.*/
struct Node *search(struct Node *root, int data){
	Bool found = false;
	struct Node *currNode = root;
	while(!found && currNode != NULL){
		if(data < currNode -> value){
			currNode = currNode -> left_child;
		}
		else if(data > currNode -> value){
			currNode = currNode -> right_child;
		}
		else if(data == currNode -> value){
			found = true;
		}
	}
	return(currNode);
}

/*
void insert(struct Node *root, int data){
	return;
}
*/

int main(void){

	return 0;
}

