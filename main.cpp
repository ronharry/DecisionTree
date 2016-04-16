#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#define MAX 14
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct node *Node_ptr;

typedef struct node {
	char *name;
	char *attr;
	Node_ptr child_node;	
}NODE;

typedef char *Attr;

typedef struct data {
	Attr target;
	Attr *attr;
}DATA;



DATA *readData(DATA *D);

void malloc_Data(DATA *D);

int main(int argc, char** argv) {
//	NODE *root;
//	
//	root = NULL;
//	
//	D = readFile;
//	
//	ID3(D, target_attr, attr);

	DATA *D; 

	D = (DATA*)malloc(10*sizeof(DATA));
	D->attr = (Attr*)malloc(100*sizeof(Attr));
	D = readData(D);
//	
////	ID3(D, D->target, D->attr);
//	

	free(D);
	
	return 0;
}

//void malloc_Data(DATA *D) {
//	D = (DATA *)malloc(sizeof(DATA)*20);
//	D->attr = (Attr *)malloc(sizeof(Attr)*10);
//	D->target = (Attr)malloc(sizeof(Attr)*10);
//} 

DATA *readData(DATA *D) {
	int i;
	FILE *ptr_file;
	char buf[255];
	ptr_file=fopen("data.txt","r");
	char str[6];
	
	DATA *temp;
//	temp = (DATA*)malloc(sizeof(DATA));	
//	temp->attr = (char*)malloc(sizeof(char));
//	Attr *attr;
//	fscanf(ptr_file,"%d %s %s %s %s %s", D->attr->attr_name, D->(attr+1)->attr_name, D->(attr+2)->attr_name, D->(attr+3)->attr_name, D->target->attr_name);
//	D->attr = "sss";
	for(i=0;i<4;i++) {
		temp = D + i;
		

		int ret = fscanf(ptr_file,"%s", str);
		*(temp->attr) = str;
//		(D+i)->attr = str;

//		if(ret==5)
//			printf("%s\t%s\t%s\t%s\t%s\n",(D+i)->attr,(D+i)->(attr+1),(D+i)->(attr+2),(D+i)->(attr+3),(D+i)->target);
	*(D + i) = *temp;

	}
//	free(temp->attr);
//	free(temp);	
	
	return D;
}

//NODE *ID3(D, target_attr, attr) {
//	NODE *root;
//	
//	char *bestAttr;
//	root = creatNode();
//	root->node_name = bestAttr(D, target_attr)
//	
//	if(target_attr == 1) {
//		root->node_name = 1;
//		return root;		
//	}
//		
//	if(target_attr == 0) {
//		root->node_name = 0;	
//		return root;		
//	}
//	
//	if(attr == NULL) {
//		root->node_name = mostComVal(D, target_attr)
//		return root;
//	}
//	
//	root->node_name = getMax(infoGain(D, attr));
//	
//	for() {
//		D_attr = sub_D (D, bestAttr->attr_value);
//		
//		if(D_attr == NULL) {
//			t_c = creatNode();
//			t_c->node_name = mostComVal(D_attr, target_attr);
//		}
//		else {
//			addtree(root, attr_value, ID3(D_attr, target_attr, attr/root->node_name));
//		}
//		
//	}
//	return root;
//}
//
//NODE *creatNode() {
//	
//	root->node_name = bestAttr(D, target_attr);
//}
//
//char *bestAttr(D, target_attr) {
//	
//}
//
//NODE *mostComVal(D, target_attr) {
//	
//}
//
//void addtree(root, attr_value, child) {
//	root->child_node = child;
//}
