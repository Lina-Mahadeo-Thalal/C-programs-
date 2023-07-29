/*//If else //
//The gretest no. of given two no.//
# include <stdio.h>
int main ()
{
	int a,b,g;
	scanf("%d%d",&a,&b);
	if(a>b) {
		printf("yes");
	   	}
	else { 
		printf("No");
	     }
	return 0;
}

//Construct a flowchar to print the name of days.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n==1){
	printf("Monday");
		}
	else if (n==2){
		printf("Tuesday");
		}
	else if (n==3){
		printf("Wednsday");
		}
	else if (n==4){
		printf("Thursday");
		}
	else if (n==5){
		printf("Friday");
		}
	else if (n==6){
		printf("Saturday");
		}
	else if (n==7){
		printf("Sunday");
		}
	else {
		printf("Enter the no. between 1 to 7");
		}
	return 0;
}


//Calculate the profit percentage.//
# include <stdio.h>
int main ()
{
	int c,s,p,PP;
	scanf("%d%d",&c,&s);
	if (s>c){
		p=s-c;
		PP=p/c*100;
		printf ("Profit");
		}
	else {
		printf("Invalid");
		}
	return 0;
}

//Calculate the loss percentage.//
# include <stdio.h>
int main ()
{
	int c,s,l,LP;
	scanf("%d%d",&c,&s);
	if (s<c){
		l=c-s;
		LP=l/c*100;
		printf("Loss");
	}
	else {
		printf("Invalid");
		}
	return 0;
}
		

//To check wheather the rectangle or square.//
# include <stdio.h>
int main ()
{
	int AB,BC;
	scanf("%d%d",&AB,&BC);
	if (AB==BC){
		printf("It is square");
		}
	else {
		printf("It is rectangle");
		}
	return 0;
}

//Number is divisible by 7 or not.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n%7==0){
		printf("It is divisible by 7");
		}
	else {
		printf("It is not divisible by 7");
		}
	return 0;
}


//Last digit of a no. is divisible by 3 or not.//
# include <stdio.h>
int main ()
{
	int n,l;
	scanf("%d",&n);
	l=n%10;
	if (l%3==0){
		printf("The last digit is divisible by 3");
		}
	else {
		printf("The last digit is not divisible by 3");
		}
	return 0;
}


//Person is eligible for voting or not.//
# include <stdio.h>
int main ()
{
	int Age;
	scanf("%d",&Age);
	if (Age>=18){
		printf("Person is eligible for voting");
		}
	else {
		printf("Person is not eligible for voting");
		}
	return 0;
}

//Print the hello and bye.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n%5==0){
		printf("Hello");
		}
	else {
		printf("Bye");
		}
	return 0;
}


//Who is the topper.//
# include <stdio.h>
int main ()
{
	int m1,m2,m3,m4,m5,s1,s2,s3,s4,s5,t1,t2,p1,p2;
	scanf("%d%d%d%d%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&s1,&s2,&s3,&s4,&s5);
	t1=m1+m2+m3+m4+m5;
	t2=s1+s2+s3+s4+s5;
	p1=t1/500*100;
	p2=t2/500*100;
	if (p1>p2){
		printf("p1 is topper");
		}
	else {
		printf("p2 is topper");
		}
	return 0;
}


// No. is three digit or not.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n>=100){
		if (n<=999){
			printf("No. is three digit");
			}
		else {
			printf("No. is not three digit");
			}
		}
	else {
		printf("No. is not three digit");
		}
	return 0;
}


//Person is senior citizen or not.//
# include <stdio.h>
int main ()
{
	int Age;
	scanf("%d",&Age);
	if (Age>=60){
		printf("The person is senior citizen");
		}
	else {
		printf("The person is not senior citizen");
		}
	return 0;
}


//Check wheather the water is boil or not.//
# include <stdio.h>
int main ()
{
	int temp;
	scanf("%d",&temp);
	if (temp>=100){
		printf("Water is boil");
		}
	else {
		printf("Water is not boil");
		}
	return 0;
}


//To check wheather the smallest four digit no.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n==1000){
		printf("It is smallest four digit no.");
		}
	else {
		printf("It is not smallest four digit no.");
		}
	return 0;
}


//Last digit of a no. is divisible by 3 or not.//
# include <stdio.h>
int main ()
{
	int n,l;
	scanf("%d",&n);
	l=n%10;
	if (l%3==0){
		printf("The last digit is divisible by 3");
		}
	else {
		printf("The last digit is not divisible by 3");
		}
	return 0;
}


//Print the name of month.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n>0){
		if(n<13){
			 if (n==1){
				printf("January");
				}
			else if (n==2){
				printf("February");
				}
			else if (n==3){
				printf("March");
				}	
			else if (n==4){
				printf("April");
				}
			else if (n==5){
				printf("May");
				}
			else if (n==6){
				printf("June");
				}
			else if (n==7){
				printf("July");
				}
			else if (n==8){
				printf("August");
				}
			else if (n==9){
				printf("Subtember");
				}
			else if (n==10){
				printf("October");
				}
			else if (n==11){
				printf("November");
				}
			else if (n==12){
				printf("December");
				}
			}
		else {
			printf("Please enter the month no.");
			}
		}
	else {
		printf("Invalid no.");
		}
	return 0;
}
			

//Check wheather the sum of two no. within a range.//
# include <stdio.h>
int main ()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
	s=a+b;
	if (s>=15){
		if (s<=20){
			printf("20");
			}
		else {
			printf("%d",s);
			}
		}
	else {
		printf("%d",s);
		}
	return 0;
}


//Print the total cost of the purchased quantity.//
# include <stdio.h>
int main ()
{
	int q,c,d,t;
	scanf("%d",&q);
	c=q*100;
	if (c>1000){
		d=c/100*10;
		t=d+c;
		printf("%d",t);
		}
	else {
		printf("%d",c);
		}
	return 0;
}
		
		
//Print the net bonus amount.//
# include <stdio.h>
int main ()
{
	int s,y,b,n;
	scanf("%d%d",&s,&y);
	if (y>5){
		b=s/100*5;
		n=s+b;
		printf("Net bonus amount is %d",n);
		}
	else {
		printf("No bonus");
		}
	return 0;
}


//Check wheather the given no. with ends 3 and 7 .//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n%3==0){
		printf("Ends with 3");
		}
		else if (n%10==7){
			printf("Ends with 7");
			}
	else {
		printf("%d",n);
		}
	return 0;
}

//Print the difference between two numbers.//
# include <stdio.h>
int main ()
{
	int a,b,d,s;
	scanf("%d%d",&a,&b);
	if (a>b){
		d=a-b;
		printf("Their difference is %d",d);
		}
	else {
		s=a+b;
		printf("Their sum is %d",s);
		}
	return 0;
}


//Increment and dicrement the number.//
# include <stdio.h>
int main ()
{
	int n,i,d;
	scanf("%d",&n);
	if (n%4==0){
		i = n+1;
		printf("%d",i);
		}
	else {
		d = n-1;
		printf("%d",d);
		}
	return 0;
}


//Check wheather the no. is positive, negative and zero.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n>0){
		printf("It is the positive no.");
		}
	else if (n<0){
		printf("It is the negative no.");
		}
	else {
		printf("It is the zero");
		}
	return 0;
}
*/

//Acepet the city and display their monuments of that city.//
# include <stdio.h>
int main () 
{
	
	char city[3]={"Delhi","Agra","Jaipur"};
	scanf("%s",&city);
	if (city=="Delhi"){
		printf("Monument is red fort");
		}
	else if (city=="Agra"){
			printf("Monument is Taj Mahal");
			}
	else if (city=="Jaipur"){
			printf("Monument is Jal Mahal");
			}
	else {
		printf("No monument");
		}
	return 0;
}


/*//Fint the area and peremeter of the rectangle and they are greater or equal.//
# include <stdio.h>
int main ()
{
	int l,b,a,p;
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	if (a>p){
		printf("Area is greater");
		}
	else if (a==p){
		printf("Both are equal");
		}
	else {
		printf("Peremeter is greater");
		}
	return 0;
}

//To check wheather the given no. is one digit, two digit or three digit.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n<=9){
		printf("The no. is one digit");
		}
	else if (n<=99){
		printf("The no. is two digit");
		}
	else if (n<=999){
		printf("The no. is three digit");
		}
	else {
		printf("The no. is more than three digit");
		}
	return 0;
}


//Design the calulater using the operator.//
# include <stdio.h>
int main ()
{
	int x,y,a,s,m,d,choice;
	choice = "+" for a,"-" for s,"*" for m,"/" for d;
	scnaf("%d%d",&x,&y);
	if (choice=="+"){
		a=x+y;
		printf("Addition %d",a);
		}
	else if (choice=="-"){
		s=x-y;
		printf("Substraction %d",s);
		}
	else if (choice=="*"){
		m=x*y;
		printf("Multiplication %d",m);
		}
	else if (choice=="/"){
		d=x/y;
		printf("Division %d",d);
		}
	else {
		printf("Enter the correct choice");
		}
	return 0;
}

//Calculate the percentage and according to the grade.//
# include <stdio.h>
int main ()
{
	int m1,m2,m3,m4,m5,t,p;
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	t=m1+m2+m3+m4+m5;
	p=t/500*100;
	if (p>=90){
		printf("Grade A");
		}
	else if (p>=80){
		printf("Grade B");
		}
	else if (p>=70){
		printf("Grade C");
		}
	else if (p>=60){
		printf("Grade D");
		}
	else if(p>=40){
		printf("Grade E");
		}
	else if (p>=35){
		printf("Grade F");
		}
	else {
		printf("No Grade");
		}
	return 0;
}


//Calculate the  gross salar.//
# include <stdio.h>
int main  ()
{
	int  s,b,hra,da,gs;
	scanf("%d",&s);
	if (s<=10000){
		hra=s/100*20;
		da=s/100*80;
		gs=s+hra+da;
		printf("Gs %d",gs);
		}
	else if (s<=20000){
		hra=s/100*25;
		da=s/100*90;
		gs=s+hra+da;
		printf("Gs %d",gs);
		}
	else {
		hra=s/100*30;
		da=s/100*95;
		gs=s+hra+da;
		printf("Gs %d",gs);
		}
	return 0;
}

//The student is allowed or not in their exam.//
# include <stdio.h>
int main ()
{
	int ch,ca,p;
	scanf("%d%d",&ch,&ca);
	p=ca/ch*100;
	if (p<75){
		printf("The student is not allowed in an exam");
		}
	else {
		printf("The students is allowed in an exam");
		}
	return 0;
}	


// To print the number of days in a month.//
# include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n>0){
		if(n<13){
			if (n==2){
				printf("No. of days is 28 or 29");
				}
			else if (n == 1 || n== 3 || n== 5 || n== 7 || n== 8 || n== 10 || n==12){
				printf("No.of days is 31");
				}
			else {
				printf("No.of days is 30");
				}
			}
		else {
			printf("No.is invalid");
			}
		}
	else {
		printf("Please enter the month no.");
		}
	return 0;
}

//Allowed in ride or not.//
# include <stdio.h>
int main ()
{
	int inches,f;
	scanf("%d",&inches);
	f=inches/12;
	if (f<5){
		printf("The children is not allowed in a ride");
		}
	else {
		printf("The children is allowed in a ride");
		}
	return 0;
}


//Display the road tax of the to paid according to the criteria.//
# include <stdio.h>
int main ()
{
	int cp,t;
	scanf("%d",&cp);
	if (cp>100000){
		t=cp/100*15;
		printf("Tax is %d",t);
		}
	else if (cp>50000){
		t=cp/100*10;
		printf("Tax is %d",t);
		}
	else {
		t=cp/100*5;
		printf("Tax is %d",t);
		}
	return 0;
}

//Check wheather the student is group leader or not.//
# include <stdio.h>
int main ()
{
	int r;
	scanf("%d",&r);
	if (r%5==0){
		printf("The student is group leader");
		}
	else {
		printf("The student is not group leader");
		}
	return 0;
}

//Find the maximum number between three numbers.//
# include <stdio.h>
int main ()
{
	int a,b,c,g;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b){
		g=a;
		}
	else {
		g=b;
		}
	if (g>c){
		g=g;
		}
	else {
		g=c;
		}
	printf("Greater no. is %d",g);
	return 0;
}


//Find the second max between three numbers.//
# include <stdio.h>
int main ()
{
	int a,b,c,m,sm;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b){
		m=a;
		sm=b;
		}
	else {
		m=b;
		sm=a;
		}
	if  (m>c){
		if(sm>c){
			printf("Second max is %d",sm);
			}
		else{
			printf("Second max is %d",c);
			}
		}
	else {
		printf("Second max is %d",m);
		}
	return 0;
}

/Maximum between four numbers.//
# include <stdio.h>
int main ()
{
	int a,b,c,d,max;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a>b){
		max=a;
		}
	else {
		max=b;
		}
	if (max>c){
		max=max;
		}
	else {
		max=c;
		}
	if (max>d){
		max=max;
		}
	else {
		max=d;
		}
	printf("The maximum number is %d",max);
	return 0;
}

//Find the mininum number between three numbers.//
# include <stdio.h>
int main ()
{
	int a,b,c,min;
	scanf("%d%d%d",&a,&b,&c);
	if (a<b){
		min=a;
		}
	else{
		min=b;
		}
	if (min<c){
		min=min;
		}
	else {
		min=c;
		}
	printf("The minimum no.is %d",min);
	return 0;
}
*/
			


