/*
    amount is grater than one thousand
    interest is : 20%
    amount is less than one thousand
    interest is : 10%
*/

#include <stdio.h>
int main(void)
{
    int loan_amount, interset, total;

    printf("Please dear, enter your loan amount here : \n");
    scanf("%d",&loan_amount);

    if(loan_amount >= 1000)
    {
        interset = loan_amount*20/100;
    }

    else
    {
        interset = loan_amount*10/100;
    }

    total = interset+loan_amount;

    printf("Your yearly payment is : %d\n",total);

    return 0;
}
