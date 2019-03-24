#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

float square(float);
float triangle(float,float);
float circle(float);
float rectangle(float,float);
float parallelogram(float);
float trapezoid(float,float,float);
float rhombus(float,float);
void delay (unsigned int mseconds);

int mainmenu(){
	
	int choice;
	printf("\n\n------------------AREA CALCULATOR MEIN AAP KA SUAGHAT HAI------------------\n\n\n\n1.Square\n2.Triangle\n3.Circle\n4.Rectangle\n5.Parallelogram\n6.Trapezoid\n7.Rhombus\n8.exit\n\nMake your Choice : ");
	scanf("%d",&choice);
	float ans;
	float h;
	float a,b;
	switch(choice){
		case 1:
			float l;
			printf("\nEnter length : "); scanf("%f",&l);
				if(l<0){
				l=l*(-1);	
			}
			ans=square(l);
			printf("area of square is %.1f\n\nPress any key to continue...",ans);
			getch();
			system("cls");
			mainmenu();
		break;
		case 2:
			printf("\nEnter base : "); scanf("%f",&b);
			printf("\nEnter height : "); scanf("%f",&h);
				if(b<0){
				b=b*(-1);
				}	
				if(h<0){
						h=h*(-1);
					}
			ans=triangle(b,h);
			printf("area of triangle is %.1f\n\nPress any key to continue...",ans);
			getch();
			system("cls");
			mainmenu();
		break;
		case 3:
			float rad;
			printf("\nEnter radius : "); scanf("%f",&rad);
			if(rad<0){
				rad=rad*(-1);	
			}
				
			ans=circle(rad);
			printf("area of circle is %.1f\n\nPress any key to continue...",ans);
			
			getch();
			system("cls");
			mainmenu();
		break;
		case 4:
				float w;
			printf("\nEnter Width : "); scanf("%f",&w);
			printf("\nEnter Height : "); scanf("%f",&h);
				if(w<0){
				w=w*(-1);	
			}
			   if(h<0){
			   	h=h*(-1);
			   }
			ans=rectangle(w,h);
			printf("area of rectangle is %.1f\n\nPress any key to continue...",ans);
			getch();
			system("cls");
			mainmenu();
		break;
			case 5:

			printf("\nEnter base : "); scanf("%f",&b);
			printf("\nEnter height : "); scanf("%f",&h);
				if(b<0){
				l=l*(-1);	
			}
			if(h<0){
				h=h*(-1);	
			}
			ans=rectangle(b,h);
			printf("area of parallelogram is %.1f\n\nPress any key to continue...",ans);
			getch();
			system("cls");
			mainmenu();
		break;
			case 6:
			
			printf("\nEnter side 1 : "); scanf("%f",&a);
			printf("\nEnter side 2 : "); scanf("%f",&b);
			printf("\nEnter height : "); scanf("%f",&h);
				if(a<0){
				a=a*(-1);	
			}
			if(b<0){
				b=b*(-1);	
			}
			if(h<0){
				h=h*(-1);	
			}
			ans=trapezoid(a,b,h);
			printf("area of trapezoid is %.1f\n\nPress any key to continue...",ans);
			getch();
			system("cls");
			mainmenu();
		break;
			case 7:
			
			printf("\nEnter diagonal 1 : "); scanf("%f",&a);
			printf("\nEnter diagonal 2 : "); scanf("%f",&b);
				if(a<0){
				a=a*(-1);	
			}
			if(b<0){
				b=b*(-1);	
			}
			ans=rhombus(a,b);
			printf("area of rhombus is %.1f\n\nPress any key to continue...",ans);
			getch();
			system("cls");
			mainmenu();
		break;
		case 8:
			printf("\nProgram exiting in 5 seconds....");
			delay(5000);
			return 0;
		break;
		default:
			printf("\nInvalid Choice\nPress any key to continue...",ans);
			
			getch();
			system("cls");
			mainmenu();
	}
}
void delay (unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
float square(float l){
	float res=l*l;
	return res;
}

float triangle(float b, float h){
	float res=1/2*b*h;
	return res;
}
float circle(float r){
    float 	res=3.14*r*r;
    return res;
}
float rectangle(float w,float h){
    float 	res=w*h;
    return res;
}
float parallelogram(float h,float b){
    float 	res=b*h;
    return res;
}
float trapezoid(float a,float b,float h){
    float 	res=((a+b)*h)/2;
    return res;
}
float rhombus(float a,float b){
    float 	res=(a*b)/2;
    return res;
}
int main (){
	mainmenu();
	return 0;
}
