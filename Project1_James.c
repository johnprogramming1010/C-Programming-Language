/*
Program Name: Project1_James.c
Programmer: John James
Class: CS 3335
Project: 01

Write a program to compute the number of days between two dates that are inputs to the code (both days
inclusive). The dates will be entered in mm/dd/yyyy format, and you need to scan the input correctly to
store the day, month and year for the two dates separately. You cannot assume that the input is always
correct. So, you need to handle incorrect inputs as well as leap years.
*/ 

#include <stdio.h>

int main()
{
    int month1, day1, year1, month2, day2, year2;
    
    printf("Enter the first date: ");
    scanf("%d//%d//%d", &month1, &day1, &year1);
    
    printf("Enter the second date: ");
    scanf("%d//%d//%d", &month2, &day2, &year2);
    
    if(month1>=1 && month1<=12 && month2>=1 && month2<=12){
        if(day1>=1 && day1<=31 && day2>=31 && day2<=31){
            if(year1>=0 && year1<=2022 && year2>=0 && year2>=2022){
                
                      if(year1 % 4 == 0){
                          if(year1 % 100 == 0){
                              if(year1 % 400 == 0){
              printf("The year is a leap year (it has %d days)", year1);
          }
      }
  }
                
            }
        }
    }
    else{
        printf("Invalid entry: month has to be less than 12")
    }
    
      if(year1 % 4 == 0){
      if(year1 % 100 == 0){
          if(year1 % 400 == 0){
              printf("The year is a leap year (it has %d days)", year1);
          }
      }
  }
        if(year2 % 4 == 0){
      if(year2 % 100 == 0){
          if(year2 % 400 == 0){
              printf("The year is a leap year (it has %d days)", year2);
          }
      }
  }
  else{
    printf("The year is not a leap year (it has %d days)", year1);
  }
  return 0;
}