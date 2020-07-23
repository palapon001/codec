#include<stdio.h>
main(){
        float foot,inches,centimeter,meter;
        printf("Inches to Foot to Centimeter to meter\n");
                        printf("inches? :"); scanf("%f",&inches);
                        foot = inches * 0.083333;
                        printf("foot = %f\n",foot);	
                        centimeter = foot/0.032808;
                        printf("centimeter = %f\n",centimeter);	 
                        meter = centimeter/100.00;
                        printf("meter = %f\n",meter);
               
        }

