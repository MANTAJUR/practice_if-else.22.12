#include<stdio.h> 
int main(){ 
	int marks;   //grade system prectice with if,else & else if
	printf("enter marks:");
	scanf("%d",&marks);
	
	if(marks>=80 && marks<=100){
		printf("AA\n");}
	else if(marks>=70 && marks<80){printf("A+\n");
	}
	else if(marks<70 && marks>=60){printf("A\n");}
	else if(marks<60 && marks>=45){printf("B\n");}
	else if(marks<45 && marks>=25){printf("C\n");}
	else{
	printf("not passed/D \n");}
	printf("THANKYOU");
	return 0;
}
