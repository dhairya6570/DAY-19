#include<stdio.h>

int main (){
	
	int n ;
	
	printf("Enter size : ");
	scanf("%d",&n);
	
	int arr[n][n];
	int i , j ;
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			
			printf("Enter Elements [%d][%d] ",i,j);
			scanf("%D",&arr[i][j]);
			
		}
	}
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0 ;
}
