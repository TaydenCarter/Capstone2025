#include <stdio.h>
#include <math.h>
#include "TurnRadiusCalc.h"  //The header file for turn radius calc has the coefficient and power values for the function of each wheel
#define PI 3.14159265358979323846

int main()
{

    const int POWER=1;  
    double SteeringAngle = 0;   //Input Steering Angle
    double LW_Angle;    //Left Wheel Angle
    double RW_Angle;    //Right Wheel Angle
    double TR_Left;     //Turn Radius Left Wheel Right Turn
    double TR_Right;    //Turn Radius Right Wheel Left Turn
    double D2R;

    /*
    while (POWER > 1)   //This is saying while the machine is on to repeat this loop, the power value is constant
    {

    }
    */

    for(int i = 0 ; i <= 90 ; i++)
    {
    printf("Left Wheel Steering Angle CCW : %i \t", i);
    LW_Angle = WA_LW_Slope*(i)+WA_LW_Intercept;     //This is the equation y=mx+b
    TR_Left = TR_LW_Coefficient*(pow(i,TR_LW_Power));       ////This is the power equation
    printf("Left Wheel Wheel Angle : %lf\t", LW_Angle);
    printf("Left Wheel Turn Radius : %lf\n", TR_Left);
    }

    printf("\n");

    for(int i = 0 ; i >= -90 ; i--)
    {
    printf("Right Wheel Steering Angle CW : %i \t", -1*i);      //We are doing -1*i in order to make the i a positive value instead of a negative for the calculation
    RW_Angle = WA_RW_Slope*(-1*i)+WA_RW_Intercept;      //This is the equation y=mx+b
    TR_Right = TR_RW_Coefficient*(pow((-1*i),TR_RW_Power));     //This is the power equation
    printf("Right Wheel Wheel Angle : %lf \t", RW_Angle);
    printf("Right Wheel Turn Radius : %lf \n", TR_Right);
    }

}