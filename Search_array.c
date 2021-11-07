#include <stdio.h>
#include <stdbool.h>
int main() {
	int N,M,X;
   int array[100][100];
   printf("Enter namber of rows:");
   	scanf("%d", &N);
   printf("Enter namber of columns:");
   scanf("%d", &M);
   printf("Enter numbers of elements:");
   
   int i, j;
   for(i=0; i<N; i++) {
      for(j=0;j<M;j++) {
         scanf("%d", &array[i][j]);
      }
   }
   printf("Enter number:");
   scanf("%d", &X);
   bool b=false;
   for(i=0; i<N; i++) {
      for(j=0;j<M;j++) {
         if(array[i][j]==X){
            b=true;
            break;
         }
      }
   }
	if (b==true){
	    printf("This number is in array \n");	
	}
	else {
		 printf("This number not found in array\n");	
	}

	return 0;
}
