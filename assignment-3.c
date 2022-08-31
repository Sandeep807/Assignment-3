/*1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    else{
        printf("Negative number");
    }
    return 0;
}*/


/*2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0){
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;
}*/

/*3. Write a program to check whether a given number is an even number or an odd
number.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even number : %d",n);
    }
    else
    {
        printf("Odd number : %d",n);
    }
    return 0;
}
*/


/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if((n & 1) == 0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    return 0;
}*/


/*5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int n,count=0,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0)
    {
        rem = n%10;
        count++;
        n=n/10;
    }
    
    if(count==3){
        printf("Three digit number: ");
    }
    else
    {
        printf("Not three digit number: ");
    }
    return 0;
}
*/



/*6. Write a program to print greater between two numbers. Print one number of both are
the same.

#include<stdio.h>
int main(){
    int n,n2;
    printf("Enter two number: ");
    scanf("%d%d",&n,&n2);
    if(n>n2)
    {
        printf("First number is greater: %d",n);
    }
    else if (n2>n)
    {
        printf("Second number is greater: %d",n2);
    }
    else{
        printf("Both number is equal: %d",n);
    }

    return 0;
    
}
*/



//7. Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots




/*8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%400==0 && n%100==0 || n%4==0 && n%100!=0){
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");
    }
    return 0;
}
*/



/*9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.


#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("First number is greater: %d",a);
    }
    else if (b>a && b>c)
    {
        printf("Second number is greater: %d",b);
        
    }
    else if (c>a && c>b)
    {
        printf("Third number is greater: %d",c);
        
    }
    else{
        printf("These numbers are equal: %d",a);

    }
    return 0;
    
}

*/


/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.
11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/


/*12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>= 65 && ch <= 91)
    {
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}

*/


/*13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%3==0 && n%2==0){
        printf("Divisible by 3 and 2");
    }
    else
    {
        printf("Not divisible by 3 and 2");
    }
    return 0;
}

*/


/*14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%7==0 || n%3==0){
        printf(" It is Divisible");
    }
    else
    {
        printf("Not divisible");
    }
    return 0;
}
*/



/*15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter anumber: ");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    else if (n<0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");

    }

    return 0;
    
}
*/

//16. Write a program to check whether a given character is an alphabet (uppercase), an
/*alphabet (lower case), a digit or a special character.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch >=65 && ch<=91){
        printf("Uppercase");
    }
    else if (ch >='a' && ch <='z')
    {
        printf("Lowercase");
    }
    else if (ch>0)
    {
        printf("Its digit");
    }
    else
    {
        printf("Special character");
    }
    
    return 0;
}
*/

/*17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter side triangle length:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b || a==c || b==a || b==c || c==a || c==b){
        printf("Triangle is valid");
    }
    else{
        printf("Not valid triangle");
    }
    return 0;
}

*/


//18. Write a program which takes the month number as an input and display number of
//days in that month

#include<stdio.h>
int main(){
    int months;
    printf("Enter month number:");
    scanf("%d",&months);
    if(months==1){
        printf("January");
    }
    else if (months == 2)
    {
        printf("February");
        
    }
    else if (months==3)
    {
        printf("March");
        
    }
    else if (months==4)
    {
        printf("April");
        
    }
    else if (months==5)
    {
        printf("May");
        
    }
    else if (months==6)
    {
        printf("June");
        
    }
    else if (months==7)
    {
        printf("July");
        
    }
    else if (months==8)
    {
        printf("August");
        
    }
    else if (months==9)
    {
        printf("September");
        
    }
    else if (months==10)
    {
        printf("October");
        
    }
    else if (months==11)
    {
        printf("November");
        
    }
    else if (months==12)
    {
        printf("December");
        
    }
    else{
        printf("Invalid number for months");
    }
    
    
}