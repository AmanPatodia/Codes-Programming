#include<stdio.h>
int ch,total_charge,security_charge,per_day_charge,days=0,d1,m1,y,d2,m2,y2;
char name[20];
int stair8feet()
{
     security_charge=500,per_day_charge=30;
     printf("Security charge for this stair is %d rupees",security_charge); 
     printf("\nPer day charge for this stair is %d rupees",per_day_charge);
     printf("\nEnter your name:");
     scanf("%s",&name); 
     printf("\nEnter issue date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d1,&m1,&y);
     printf("Issue Date is: %d/%d/%d",d1,m1,y);
     printf("\nEnter returning date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d2,&m2,&y2);
     printf("returning  Date is: %d/%d/%d",d2,m2,y2);
     for(int i=d1;i<=d2;i++)
        days++;
     total_charge=days*per_day_charge;
     return total_charge;
}
int stair12feetdouble()
{
     security_charge=1000,per_day_charge=100;
     printf("Security charge for this stair is %d rupees",security_charge); 
     printf("\nPer day charge for this stair is %d rupees",per_day_charge); 
     printf("\nEnter your name:");
     scanf("%s",&name);
     printf("\nEnter issue date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d1,&m1,&y);
     printf("Issue Date is: %d/%d/%d",d1,m1,y);
     printf("\nEnter returning date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d2,&m2,&y2);
     printf("returning  Date is: %d/%d/%d",d2,m2,y2);
     for(int i=d1;i<=d2;i++)
        days++;
     total_charge=days*per_day_charge;
     return total_charge;
}
int stair12feetsingle()
{
     security_charge=1000,per_day_charge=70;
     printf("Security charge for this stair is %d rupees",security_charge); 
     printf("\nPer day charge for this stair is %d rupees",per_day_charge); 
     printf("\nEnter your name:");
     scanf("%s",&name); 
     printf("\nEnter issue date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d1,&m1,&y);
     printf("Issue Date is: %d/%d/%d",d1,m1,y);
     printf("\nEnter returning date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d2,&m2,&y2);
     printf("returning  Date is: %d/%d/%d",d2,m2,y2);
     for(int i=d1;i<=d2;i++)
        days++;
     total_charge=days*per_day_charge;
     return total_charge;
}
int stair15feet()
{
     security_charge=1500,per_day_charge=100;
     printf("Security charge for this stair is %d rupees",security_charge); 
     printf("\nPer day charge for this stair is %d rupees",per_day_charge); 
     printf("\nEnter your name:");
     scanf("%s",&name); 
     printf("\nEnter issue date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d1,&m1,&y);
     printf("Issue Date is: %d/%d/%d",d1,m1,y);
     printf("\nEnter returning date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d2,&m2,&y2);
     printf("returning  Date is: %d/%d/%d",d2,m2,y2);
     for(int i=d1;i<=d2;i++)
        days++;
     total_charge=days*per_day_charge;
     return total_charge;
}
int stair20feet()
{
     security_charge=2000,per_day_charge=150;
     printf("Security charge for this stair is %d rupees",security_charge); 
     printf("\nPer day charge for this stair is %d rupees",per_day_charge); 
     printf("\nEnter your name:");
     scanf("%s",&name); 
     printf("\nEnter issue date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d1,&m1,&y);
     printf("Issue Date is: %d/%d/%d",d1,m1,y);
     printf("\nEnter returning date(dd/mm/yy) of stair:");
     scanf("%d %d %d",&d2,&m2,&y2);
     printf("returning  Date is: %d/%d/%d",d2,m2,y2);
     for(int i=d1;i<=d2;i++)
        days++;
     total_charge=days*per_day_charge;
     return total_charge;
}
int main()
{
   printf("<-----------------------------");
   printf("WELCOME TO OUR STAIRS SHOP");
   printf("------------------------------>");
   printf("\n\nCATEGORIES OF STAIRS ARE AS :\n");
   printf("1.Double \n2.Single");
   printf("\nSELECT YOUR STAIR CATEGORY:");
   scanf("%d",&ch);
   if(ch==1)
   {
       int n,x;
       printf("\nTypes of stairs in double category are as:");
       printf("\n1. 8 Feet stair \n2. 12 Feet stair");
       printf("\nSelect your type:");
       scanf("%d",&n);
       if(n==1)
          printf("\nYour total charge is %d",stair8feet());
       else if(n==2)
          printf("\nYour total charge is %d",stair12feetdouble());
       else
          printf("SOORY YOU CHOOSE WRONG TYPE!");
   }
   if(ch==2)
   {
       int n,x;
       printf("\nTypes of stairs in single category are as:");
       printf(" \n1. 12 Feet stair \n2. 15 Feet stair\n3. 20 Feet stair ");
       printf("\nSelect your type:");
       scanf("%d",&n);
       if(n==1)
          printf("\nYour total charge is %d",stair12feetsingle());
       else if(n==2)
          printf("\nYour total charge is %d",stair15feet());
       else if (n==3)
          printf("\nYour total charge is %d",stair20feet());
       else
          printf("SOORY YOU CHOOSE WRONG TYPE!");
   }
 return 0;
}