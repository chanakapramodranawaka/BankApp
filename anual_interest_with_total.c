#include <stdio.h>
int main(void)
{
    int loan_ammount, annual_interest_rate, interest, total;

    printf("Hey Dear. Please Enter Your Loan Amount Here : \n");
    scanf("%d",&loan_ammount);

    printf("Please enter annual interest amount here : \n");
    scanf("%d",&annual_interest_rate);

    interest = loan_ammount*annual_interest_rate/100;

    total = interest + loan_ammount;

    printf("Your paid amount is : R.s:%d.00 Thank You bank with US \n",total);

    return 0;
}
