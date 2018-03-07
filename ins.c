#include<stdio.h>
#include<stdlib.h>
int randommer(void){
	int r = 0+rand()%100;
	return r;
}
int main(int n,char* v[]){
	int isit=0;
	switch(n){
		case 1:
		printf("One argument minimum\n");
		break;
		case 2:
		isit = 1;
		break;
		default:
		printf("One argument maximum\n");
	}
	if(isit==1){
	int lenght= atoi(v[1]);
	int arr[lenght-1];
	for(int i = 0;i<lenght;i++){
		arr[i]=randommer();
	}
	//Algorithm
	for(int i = 1;i<lenght;i++){
		int val = arr[i];
		int n = i-1;
		while(arr[n]>val&&n>=0){
			arr[n+1]=arr[n];
			n=n-1;
		}
		arr[n+1]=val;
	}
	//Checking
	for(int i = 0;i<lenght;i++){
		printf("%d\n", arr[i]);
	}
	}
}