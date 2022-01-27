#include<stdio.h>
void main()
{
int n;
float qty,bill,off,sub;
printf("*******Menu*******\n1)Pizza = 100 Rs\n2)Burger = 50 Rs\n3)Pasta = 50 Rs\n4)Fries = 40 Rs\n Offer of 10%% on ordering worth 1000 Rs\n ");
printf("What you want to order = ");
scanf("%d",&n);
printf("Quantity = ");
scanf("%f",&qty);
fflush(stdin);
if(n==1)
{
    printf("You have ordered pizza\n");
    bill=100*qty;
    if(bill>=1000)
    {
        off=0.1*bill;
        sub=bill-off;
        printf("Your total amount is %f",sub);

    }
    else
    {

        printf("Your total amount is %f",bill);

    }
}
else if(n==2)
{
    printf("You have ordered Burger\n");
    bill=50*qty;

    if(bill>=1000)
    {
        off=0.1*bill;
        sub=bill-off;
        printf("Your total amount is %f",sub);

    }
    else
    {

        printf("Your total amount is %f",bill);

    }

}
else if(n==3)
{
    printf("You have ordered Pasta\n");
    bill=50*qty;

    if(bill>=1000)
    {
        off=0.1*bill;
        sub=bill-off;
        printf("Your total amount is %f",sub);

    }
    else
    {

        printf("Your total amount is %f",bill);

    }

}
else if(n==4)
{
    printf("You have ordered Fries\n");
    bill=40*qty;

    if(bill>=1000)
    {
        off=0.1*bill;
        sub=bill-off;
        printf("Your total amount is %f",sub);

    }
    else
    {

        printf("Your total amount is %f",bill);

    }

}
}
