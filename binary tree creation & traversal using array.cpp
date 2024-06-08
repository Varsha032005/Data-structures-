#include<stdio.h>
#include<stdlib.h>
struct tree
{
	struct tree* lchild;
	char data[10];
	struct tree* rchild;
};
typedef struct tree node;
int ctr;
node *tree[100];
node* getnode()
{
	node* temp;
	temp=(node*)malloc(sizeof(node));
	printf("\n enter data: ");
	scanf("%s",temp->data);
	temp->lchild=NULL;
	temp->rchild=NULL;
	return temp;
}
void create_fbinarytree()
{
	int j,i=0;
	printf("\n how many node do you want : ");
	scanf("%d",&ctr);
	tree[0]=getnode();
	j=ctr;
	j--;
	do
	{
		if(j>0){
			tree[i*2+1]=getnode();
			tree[i]->lchild=tree[i*2+1];
			j--;
		}
		if(j>0){
			tree[i*2+1]=getnode();
			j--;
			tree[i]->rchild=tree[i*2+2];
		}
		i++;
	}
	while(j>0);
}
void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("%3s",root->data);
		inorder(root->rchild);
	}
}
void preorder(node *root)
{
	if(root!=NULL){
		printf("%3s",root->data);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}
void postorder(node *root)
{
	if(root!=NULL)
	{
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%3s",root->data);
	}
}
int main()
{
	int i;
	create_fbinarytree();
	printf("\n inorder traversal:");
	inorder(tree[0]);
	printf("\npreorder traversal: ");
	preorder(tree[0]);
	printf("\n postorder traversal:");
	postorder(tree[0]);
}
