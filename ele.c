#include<stdio.h>
int main()
{
    int customerid,units;
    char customername[50];
    float charge,totalamount,surcharge=0;
    printf("enter customerid:");
    scanf("%d",&customerid);
    printf("enter the customer name:");
    scanf("%s",&customername);
    printf("enter the units:");
    scanf("%d",&units);
    if(units<=199)
        charge=units*1.20;
    else if(units>=200&&units<400)
        charge=units*1.50;
    else if(units>=400&&units<600)
        charge=units*1.80;
    else
        charge=units*2.00;
    if(charge>400)
    {
        surcharge=charge*0.15;
        if(surcharge<100)
            surcharge=100;
    }
    totalamount=charge+surcharge;
    printf("\nelectricitybill");
    printf("\ncustomerid:%d",customerid);
    printf("\ncustomername:%s",customername);
    printf("\nunitsconsumed:%d",units);
    printf("\nchargeRs:%.2f",charge);
    printf("\nsurchargeRs:%.2f",surcharge);
    printf("\ntotalamountRs:%.2f",totalamount);
    return 0;
}
