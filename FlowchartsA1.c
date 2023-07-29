//Flowchart Assignments//
//Construct a flowcharts to show the sum of two numbers can be obtained.//
/*# include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum=%d",c);
	return 0;
}


//Find the average of two numbers.//
# include <stdio.h>
int main ()
{
	int a,b,c,s;
	scanf("%d%d",&a,&b);
	s=a+b;
	c=s/2;
	printf("%d",c);
	return 0;
}


//Find the area of triangle.//
# include <stdio.h>
int main ()
{
	int b,h,a;
	scanf("%d%d",&b,&h);
	a=2*(h*b);
	printf("%d",a);
	return 0;
}


//Find  the simple intrest.//
# include <stdio.h>
int main ()
{
	int p,r,t,s;
	scanf("%d%d%d",&p,&r,&t);
	s=p*r*t/100;
	printf("Simple intrest is %d",s);
	return 0;
}

/Semiperemeter of a triangle.//
# include <stdio.h>
int main ()
{
	int a,b,c,t,s;
	scanf("%d%d%d",&a,&b,&c);
	t=a+b+c;
	s=t/2;
	printf("Semiperemeter is %d",s);
	return 0;
}

//Find the area and peremeter of rectangle.//
# include <stdio.h>
int main ()
{
	int l,b,a,p;
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("Area of recangle is %d\n",a);
	printf("Peremeter of recangle is %d",p);
	return 0;
}

//Calculate the area of circle.//
# include <stdio.h>
int main ()
{
	float r,a;
	float pi=3.14;
	scanf("%f",&r);
	a=pi*r*r;
	printf("Area of pi is %f",a);
	return 0;
}
	
	
//Calculate the diameter of the circle.//
# include <stdio.h>
int main ()
{
	float c,r,d;
	float pi=3.14;
	scanf("%f",&c);
	r=c/2*pi;
	d=2*r;
	printf("Diameter of circle is %f:",d);
	return 0;
}


//Find the later surface area and total surface area of a cube.//
# include <stdio.h>
int main ()
{
	int l,t,s;
	scanf("%d",&l);
	s=4*l*l;
	t=6*l*l;
	printf("Lateral surface area of cube is %d\n",s);
	printf("Total surface area of cube is %d",t);
	return 0;
}

//Find the volume of cube.//
# include <stdio.h>
int main ()
{
	int l,v;
	scanf("%d",&l);
	v=l*l*l;
	printf("Volume of cube is %d",v);
	return 0;
}
*/

//print welcome.//
# include <stdio.h>
int main ()
{
	char name;
	scanf("%s",&name);
	printf("Welcome %s",name);
	return 0;
}

//Add,Substract,Multiply,Divide.//
/*# include <stdio.h>
int main ()
{
	int x,y,a,s,m,d;
	scanf("%d%d",&x,&y);
	a=x+y;
	s=x-y;
	m=x*y;
	d=x/y;
	printf("Addition of x and y is %d\n",a);
	printf("Substraction of x and y is %d\n",s);	
	printf("Multiplication of x and y is %d\n",m);
	printf("Division of x and y is %d",d);
	return 0;
}
		
		
//Area and peremeter of the rectangle.//
# include <stdio.h>
int main ()
{
	int l,b,a,p;
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("Area of recangle is %d\n",a);
	printf("Peremeter of recangle is %d",p);
	return 0;
}

//Calculate the volume of cuboid.//
# include <stdio.h>
int main ()
{
	int l,b,h,v;
	scanf("%d%d%d",&l,&b,&h);
	v=l*b*h;
	printf("Volume of cuboid is %d",v);
	return 0;
}

//Find the lateral surface area and total surface area of cuboid.//
# include <stdio.h>
int main ()
{
	int l,b,h,t,s;
	scanf("%d%d%d",&l,&b,&h);
	s=2*(l+b)*h;
	t=2*(l*b+h*b+l*h);
	printf("Lateral surface area of cuboid is %d\n",s);
	printf("Total surface area of cuboid is %d",t);
	return 0;
}

//Calculate the selling price of a product.//
# include <stdio.h>
int main ()
{
	int r,d,p,c;
	scanf("%d%d",&r,&d);
	p=(r/100)*d;
	c=r-p;
	printf("Selling price of product is %d",c);
	return 0;
}

//Find the last digit of the given value.//
# include <stdio.h>
int main ()
{
	int n,d;
	scanf("%d",&n);
	d=n%10;
	printf("Last digit is %d",d);
	return 0;
}

//Construct a flowcharts to calculate how many books we can buy if we have x rs. (cost of the book = rs.y)//
# include <stdio.h>
int main ()
{
	int x,y,b;
	scanf("%d%d",&x,&y);
	b=x/y;
	printf("Books is %d",b);
	return 0;
}

//How many pens to buy.//
# include <stdio.h>
int main ()
{
	int x,y,p;
	scanf("%d%d",&x,&y);
	p=x/y;
	printf("Pen is %d:",p);
	return 0;
}

//Total marks.//
# include <stdio.h>
int main ()
{
	int h,m,e,s,c,t;
	scanf("%d%d%d%d%d",&h,&m,&e,&s,&c);
	t=h+m+e+s+c;
	printf("The total marks is %d",t);
	return 0;
}

//Percentage of marks.//
# include <stdio.h>
int main ()
{
	float o,t,p;
	scanf("%f%f",&o,&t);
	p=o/t*100;
	printf("percentage is %f",p);
	return 0;
}

//Closest no.//
# include <stdio.h>
int main ()
{
	int a,b,c,q;
	scanf("%d%d",&a,&b);
	q=a/b;
	c=q*b;
	printf("Closest number is %d",c);
	return 0;
}
	
	
//Total bill of samosa and vadapav.//
# include <stdio.h>
int main ()
{
	int v,s,tv,ts,t;
	scanf("%d%d",&v,&s);
	tv=v*12;
	ts=15*s;
	t=tv+ts;
	printf("Total bill is %d",t);
	return 0;
}


//Value exchange without using third variable.//
# include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A is %d\n",a);
	printf("B is %d",b);
	return 0;
}


//Exchange the value of given input using third variable.//
# include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	a==c;
	b==a;
	c==b;
	printf("A is %d\n",a);
	printf("B is %d",b);
	return 0;
}
*/
