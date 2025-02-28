//Program to demonstrate enum 
#include <stdio.h>
int main(){
	enum weekdays {MONDAY=1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
	};
	int day;
	scanf("%d", &day);
	switch(day){
		case MONDAY:
			printf("It's Monday. Concentrate on studies");
			break;
		case TUESDAY ... THURSDAY:
			printf("Still it's week day only"); break;
		case FRIDAY:
			printf("It's Friday. Get ready for week end."); break;
		case SATURDAY ... SUNDAY:
			printf("Enjoy your week end");break;
		default:
			printf("Invalid day!");
	}
}

//Input:
//Day number between
//1 ... 7
//
//Output
//1 --> It's Monday. Concentrate on studies
//2 , 3, 4 --> Still it's week day only.
//5 ->  It's Friday. Get ready for week end.
//6,7 --> Enjoy your week end.
//otherwise --> Invalid day!
