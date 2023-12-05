#include <stdio.h>
#include<conio.h>

int main(){

int num;

printf("Enter your mark ");
scanf("%d",&num);


	if( 90 <= num && num <= 100){
	printf(" You got grade : A ");
		}
	else if ( 86<= num && num<= 89){
		printf(" You got grade : A-");
		}
	else if ( 82<= num && num <= 85){
		printf(" You got grade : B+");
		}
	else if ( 78<= num && num<= 81){
		printf(" You got grade : B");
		}

	else if ( 74<= num && num <= 77){
		printf(" You got grade : B-");
		}
	else if ( 70<= num && num <= 73){
		printf(" You got grade : C+");
		}
	else if ( 66<= num && num <= 69){
		printf(" You got grade : C");
		}
	else if ( 62<= num && num<= 65){
		printf(" You got grade : C-");
		}
	else if ( 58<= num && num <= 61){
		printf(" You got grade : D+");
		}
	else if ( 55<= num && num<= 61){
		printf(" You got grade : D");
		}

    else if ( num < 55){
		printf(" You got grade : F");
		}

    getch ();
}
