#include<stdio.h>
int main(){
	
	int sub,temp;
	float sum=0;
		
	printf("hellow student");
	printf("\n enter your subject");
	scanf("%d",&sub);
	int i;
	for(i=0;i<sub;i++){
		printf("enter %d subject mark   ",(i+1));
		scanf("%d",&temp);
		sum=sum+temp;
	}
	printf("your mark is %f",sum);
	sum=sum/sub;
	if(sum>=85 && sum<=100){
		printf("\ngrade A");
	}
	else if(sum>=70 && sum<=84){
			printf("\ngrade B");
	}
		else if(sum>=55 && sum<=69){
			printf("\ngrade C");
	}
		else if(sum>=40 && sum<=54 ){
			printf("\ngrade D");
	}
		else if(sum<40){
			printf("\ngrade f and fail");
	}
	
	return 0;
	
}
