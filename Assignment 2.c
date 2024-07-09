/*1.To print unit digit of a given number
main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("%d is unit digit of given number",n%10);
}
*/

/*2.To print a given number without its last digit

main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d is number without its last digit",n/10);
}
*/

/*3.To swap values of two int variable

main()
{

    int a,b,t;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nAfter swapping a=%d and b=%d",a,b);
}
*/

//4.To swap values of two int variables without using a third variable

/* main()
{

    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d and b=%d",a,b);
}
*/

/* main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nAfter swapping a=%d and b=%d",a,b);
}
*/

/* main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swapping a=%d and b=%d",a,b);
}
*/

/*5.To input three digit number and display the sum of the digits

main()
{

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of the digits is %d",n/100 + n/10%10 + n%10);
}
*/

/*6.Takes a character as an input and displays its ASCII code

main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    printf("ASCII code is %d",c);
}
*/

/*7.To check whether the given number is even or odd using a bitwise operator

main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    n&1?printf("%d is odd number",n):printf("%d is even number",n);
}
*/

/*9.To print size of an int, a float, a char and a double

main()
{
    int intType;
    char charType;
    float floatType;
    double doubleType;

    printf("Size of int:%d bytes\n",sizeof(intType));
    printf("Size of char:%d bytes\n",sizeof(charType));
    printf("Size of float:%d bytes\n",sizeof(floatType));
    printf("Size of double:%d bytes\n",sizeof(doubleType));
}
*/

/*10.To make the last digit of a number stored in a variable as zero

main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d0 is the new number",n/10);
}
*/

/*11.To input a number from the user and also input a digit.Append a digit in the number and print the resulting number

main()
{
    int n,Newdigit;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a newdigit:");
    scanf("%d",&Newdigit);
    printf("Resulting number is %d%d",n,Newdigit);
}
*/

/*12.Assume price of 1 USD is 76.33. To take the amount in INR and convert it into USD

main()
{
    float INR,USD;
    printf("Enter the Indian Rupees:");
    scanf("%f",&INR);
    USD=INR/76.33;
    printf("%.2f is the value of INR in USD",USD );
}
*/

//13.To take a three-digit number from the user and rotate its digits by one position towards the right

main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("After the rotate the digit by one position towards the right %d",n>>1);
}
