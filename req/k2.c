#include<stdio.h>
#include<stdlib.h>
void decoder()
{
    int A,B,Y0,Y1,Y2,Y3;
    printf("Enter inputs for A,B ");
    scanf("%d %d",&A,&B);
    if(A==0){
        if(B==0){
            Y0=0; Y1=0; Y2=0; Y3=1;
        }
       else{
            Y0=0; Y1=0; Y2=1; Y3=0;
        }
    }
    else{
        if(B==0){
           Y0=0; Y1=1; Y2=0;  Y3=0; 
        }
        else{
            Y0=1; Y1=0; Y2=0;  Y3=0;
        }
    }
    printf("Y0=%d  Y1=%d  Y2=%d  Y3=%d",Y0,Y1,Y2,Y3);
}
void encoder()
{
    int A,B,C,D,Y,Z;
    printf("Enter inputs : ");
    scanf("%d%d%d%d",&A,&B,&C,&D);
    
   if(D==1){
       Y=0;
       Z=0;
   }
   else if(C==1){
      Y=0;
      Z=1;
   }else if(B==1){
       Y=1;
       Z=0;
   }
   else if(A==1){
       Y=1;
       Z=1;
   }
   else{
       printf("Wrong input!!!!!");
   }
    printf("Y=%d\n",Y);
    printf("Z=%d",Z);
}
int main()
{
    int ch;
    printf("Welcome to the world of signals\n");
    printf("Choose the operation to be performed\n");
    printf(" 1.Decoder \n 2.Encoder\n");
    scanf("%d",&ch);
   switch(ch){
    case 1:
        decoder();
    break;
    case 2:
        encoder();
    break;
    default:
    printf("Enter the valid choice");
    }
    return 0;
}