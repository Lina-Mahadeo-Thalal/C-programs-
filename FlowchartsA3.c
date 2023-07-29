//Assignment no.3//
//Construct a flowchart to find total electricity bill and sarcharge.//
# include <stdio.h>
int main ()
{
	float u,c,sc;
	scanf("%f",&u);
	if (u<=50){
		c=u*0.50;
		sc=c/100*20;
		printf("sarcharge is %f",sc);
		}
	else if (u<=150){
		c=u*0.75;
		sc=c/100*20;
		printf("sarcharge is %f",sc);
		}
	else if (u<=250){
		c=u*1.20;
		sc=c/100*20;
		printf("sarcharge is %f",sc);
		}
	else {
		c=u*1.50;
		sc=c/100*20;
		printf("sarcharge is %f",sc);
		}
	return 0;
}


//Write a program  calculte the electricity bill according to the following criteria.//
# include <stdio.h>
int main ()
{
	int u,b;
	scanf("%d",&u);
	if (u<=100){
		printf("No charge");
		}
	else if (u<=200){
		b=(u-100)*5;
		printf("Total bill is %d",b);
		}
	else {
		b=500+(u-200)*10;
		printf("Total bill is %d",b);
		}
	return 0;
}

//Calculate the charge for the library.//
# include <stdio.h>
int main ()
{
	int d,c;
	scanf("%d",&d);
	if (d<=5){
		c=d*2;
		printf("Charge is %d",c);
		}
	else if (d<=10){
		c=d*3;
		printf("Charge is %d",c);
		}
	else if (d<=15){
		c=d*4;
		printf("Charge is %d",c);
		}
	else {
		c=d*5;
		printf("Charge is %d",c);
		}
	return 0;
}

//Calculate the bonus for the employees of an orgnization.//
# include <stdio.h>
int main ()
{
	int s,b;
	scanf("%d",&s);
	if (s>3000){
		printf("Bonus is the 300");
		}
	else if (s>1600){
		b=s/100*10;
		if (b<240){
			printf("Bonus is %d",b);
			}
		else {
			printf("Bonus is 240");
			}
			}
	else if (s<=1600){
		b=s/100*15;
		if (b>=100){
			printf("Bonus is %d",b);
			}
		else {
			printf("Bonus is 100");
			}
			}
	else {
		printf("No bonus");
		}
	return 0;
}
			
			
//To check wheather the given number is divisible by 5,11,both or none.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n%5==0){
		if (n%11==0){
			printf("The number is divisible by both");
			}
		else {
			printf("The number is divisible by 5");
			}
			}
	else {
		if (n%11==0){
			printf("The number is divisible by 11");
			}
		else {
			printf("None");
			}
			}
	return 0;
}


//Display the daily wage.//
# include <stdio.h>
int main ()
{
	int age,day,wage;
	char gender=male,female;
	scanf("%d%d",&age,&day);
	scanf("%s",&gender);
	if (gender==male){
		else if (age>=18 && age<30){
			wage=day*700;
			printf("Daily wage is %d",wage);
			}
		 if (age>=30 && age<=40){
			wage=day*800;
			printf("Daily wage is %d",wage);
			}
		else {
			printf("Enter the appropriate age");
			}
			}
	else {	
		else if (age>=18 && age<30){
			wage=day*750;
			printf("Daily wage is %d",wage);
			}
		if (age>=30 && age<=40){
			wage=day*850;
			printf("Daily wage is %d",wage);
			}
		else {
			printf("Enter the appropriate age");
			}
		}
	return 0;
}	
		
//Find the second max between four numbers.//
# include <stdio.h>
int main ()
{
	int a,b,c,d,m,sm,m1,sm1,sm2;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a>b){
		m=a;
		sm=b;
		}
	else {
		m=b;
		sm=a;
		}
	if (c>d){
		m1=c;
		sm1=d;
		}
	else {
		m1=d;
		sm1=c;
		}
	if (m>m1){
		if (m1>sm){
			sm2=m1;
			printf("The second max is %d",sm2);
			}
		else {
			sm2=sm;
			printf("The second max is %d",sm);
			}
		}
	else {
		if (m>sm1){
			sm2=m;
			printf("The second max is %d",m);
			}
		else {
			sm2=sm1;
			printf("The second max is %d",sm1);
			}
		}
	return 0;
}


//Find the third max between four numbers.//
# include <stdio.h>
int main ()
{
	int a,b,c,d,m1,m2,m3,sm1,sm2,sm3,sm4,g1,g2,g3;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a>b){
		m1=a;
		sm1=b;
		}
	else {
		m1=b;
		sm1=a;
		}
	if (c>d){
		m2=c;
		sm2=d;
		}
	else {
		m2=d;
		sm2=c;
		}
	if (m1>m2){
		g1=m1;
		sm3=m2;
		}
	else {
		g1=m2;
		sm3=m1;
		}
	if (sm1>sm2){
		m3=sm1;
		sm4=sm2;
		}
	else {
		m3=sm2;
		sm4=sm1;
		}
	if  (m3>sm3){
		g2=m3;
		g3=sm3;
		}
	else {
		g2=sm3;
		g3=m3;
		}
	printf("Third max is %d",g3);
	return 0;
}
	
	
//Print the amount numberof the notes (1,2,5,10,20,100,200,500,2000)//
# include <stdio.h>
int main ()
{
	int a,n;
	int q1,q2,q3,q4,q5,q6,q7,q8,q9;
	scanf("%d",&a);
	if (a>=2000){
		q1=a/2000;
		a=a%2000;
		printf("Note of 2000 %d\n",q1);
		}
	if (a>=500){
		q2=a/500;
		a=a%500;
		printf("Notes of 500 %d\n",q2);
		}
	if (a>=200){
		q3=a/200;
		a=a%200;
		printf("Notes of 200 %d\n",q3);
		}
	if (a>=100){
		q4=a/100;
		a=a%100;
		printf("Notes of 100 %d\n",q4);
		}
	if (a>=20){
		q5=a/20;
		a=a%20;
		printf("Notes of 20 %d\n",q5);
		}
	if (a>=10){
		q6=a/10;
		a=a%10;
		printf("otes of 10 %d\n",q6);
		}
	if (a>=5){
		q7=a/5;
		a=a%5;
		printf("Notes of 5 %d\n",q7);
		}
	if (a>=2){
		q8=a/2;
		a=a%2;
		printf("Notes of 2 %d\n",q8);
		}
	if  (a==1);{
		q9=a/1;
		a=a%1;
		printf("Notes of 1 %d\n",q9);
		}
	n=q1+q2+q3+q4+q5+q6+q7+q8+q9;
	printf("Number of notes is %d",n);
	return 0;
}
		
		
//Find wheather the given year is leap year or not.//
# include <stdio.h>
int main ()
{
	int y;
	scanf("%d",&y);
	if (y%4==0 && y%100!=0){
		printf("Leap year");
		}
	else if (y%400==0){
			printf("Leap year");
			}
	else {
		printf("Normal year");
		}
	return 0;
}		


//Accept the three side of the triangle and find the which type of triangle.//
#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c && c==a){
		printf("The triangle is equilateral triangle");
		}
	else if (a==b || b==c || c==a){		
		printf("The triangle is isocalane triangle");
		}
	else if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
		printf("The triangle is right angle triangle");
		}
	else {
		printf("The trianle is scalane triangle");
		}
	return 0;
}


//Find the second max between the five numbers.//
#include<stdio.h>
int main()
{
	int a,b,c,d,e,m1,m2,m3,m4,s1,s2,s3,s4,smax;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a>b){
		m1=a;
		s1=b;
		}
	else {
		m1=b;
		s1=a;
		}
	if (c>d){
		m2=c;
		s2=d;
		}
	else {
		m2=d;
		s2=c;
		}
	if (m1>m2){
		m3=m1;
		s3=m2;
		}
	else {
		m3=m2;
		s3=m1;
		}
	if (m3>e){
		m4=m3;
		s4=e;
		}
	else {
		m4=e;
		s4=m3;
		}
	if (s4>s3){
		if (s4>s1){
			smax=s4;
			}
		else {
			smax=s1;
			}
		}
	else {
		if (s3>s1){
			smax=s3;
			}
		else {
			smax=s1;
			}
		}
	printf("second max is %d",smax);
	return 0;
}
	
	
//Find the types of angle from accecept the three sides of the triangle and one angle .//
#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b+c==180){
		 if (a==b && b==c && c==a){
			printf("The triangle is Equiangular");
			}
		else if (a==90 || b==90 || c==90){
			printf("The triangle is right angle triangle");
			}
		else if (a>90 || b>90 || c>90){
			printf("The triangle is obtus angle");
			}
		else {
			printf("The triangle is acute angle");
			}
		}
	else {
		printf("It is not triangle");
		}
	return 0;
}
	
						
