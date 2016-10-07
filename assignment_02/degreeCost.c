/*******************************************************************************************************************************************************************
*																																								   *
*  COMP 1711 Assignment 2 (5%) Cost of a three year degree at the University of Leeds project, designed to use declarations, constants, variables and expressions. *
*  By Ash Eastham.																																				   *
*																																				   				   *
*******************************************************************************************************************************************************************/

/*
Reasonable Assumptions:
-----------------------
1) Only in university September until June each year.
2) Will be walking to and from University so the travel cost is £0.
*/


// Include required libraries
#include <stdio.h>

//Declare Variables

const TuitionFees = 900;		       //Tuition Fee's Per Month in £'s
float RentPerMonth = 521.87; //Cost of Rent per month spread across 12 months in £'s
long FoodPerMonth = 100;		       //Cost of Food Shopping per month in £'s
long ToiletriesPerMonth = 30;	     //Cost of Toiletries - includes (Self Hygeine: deodrant, shampoo etc) and (Cleanliness: bleach, washing detergent etc) per month in £'s
long ExtrasPerMonth = 70;		       //Cost of Personal well-being per month i.e. beer, nights out etc in £'s
float RentSecondYear;              //Rent increases by 1% in September of 2nd year
float RentThirdYear;               //Rent increases by another 1% in the 3rd year
float FoodSecondYear;              //Food increases by 1% in September of 2nd year
float FoodThirdYear;               //Food increases by another 1% in the 3rd year
float RunningTotal;                //Stores running total of month-by-month

// main routine
int main ()
  { // main start

  		//September 2016
      RunningTotal = TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth; //Calculates Running Total
      printf("\n");
      printf("Shown below are the costs for university in September 2016\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for September 2016 are £%d\n", TuitionFees);
      printf("Rent for September costs £%4.2f\n", RentPerMonth);
      printf("Food for September costs £%d\n", FoodPerMonth);
      printf("Toiletries for September costs £%d\n", ToiletriesPerMonth);
      printf("Extras for September costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for September 2016 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//October 2016
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in October 2016\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for October 2016 are £%d\n", TuitionFees);
      printf("Rent for October costs £%4.2f\n", RentPerMonth);
      printf("Food for October costs £%d\n", FoodPerMonth);
      printf("Toiletries for October costs £%d\n", ToiletriesPerMonth);
      printf("Extras for October costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for October 2016 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//November 2016
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in November 2016\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for November 2016 are £%d\n", TuitionFees);
      printf("Rent for November costs £%4.2f\n", RentPerMonth);
      printf("Food for November costs £%d\n", FoodPerMonth);
      printf("Toiletries for November costs £%d\n", ToiletriesPerMonth);
      printf("Extras for November costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for November 2016 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//December 2016
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in December 2016\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for December 2016 are £%d\n", TuitionFees);
      printf("Rent for December costs £%4.2f\n", RentPerMonth);
      printf("Food for December costs £%d\n", FoodPerMonth);
      printf("Toiletries for December costs £%d\n", ToiletriesPerMonth);
      printf("Extras for December costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for December 2016 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//January 2017
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in January 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for January 2017 are £%d\n", TuitionFees);
      printf("Rent for January costs £%4.2f\n", RentPerMonth);
      printf("Food for January costs £%d\n", FoodPerMonth);
      printf("Toiletries for January costs £%d\n", ToiletriesPerMonth);
      printf("Extras for January costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for January 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//February 2017
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in February 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for February 2017 are £%d\n", TuitionFees);
      printf("Rent for February costs £%4.2f\n", RentPerMonth);
      printf("Food for February costs £%d\n", FoodPerMonth);
      printf("Toiletries for February costs £%d\n", ToiletriesPerMonth);
      printf("Extras for February costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for February 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//March 2017
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in March 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for March 2017 are £%d\n", TuitionFees);
      printf("Rent for March costs £%4.2f\n", RentPerMonth);
      printf("Food for March costs £%d\n", FoodPerMonth);
      printf("Toiletries for March costs £%d\n", ToiletriesPerMonth);
      printf("Extras for March costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for March 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//April 2017
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in April 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for April 2017 are £%d\n", TuitionFees);
      printf("Rent for April costs £%4.2f\n", RentPerMonth);
      printf("Food for April costs £%d\n", FoodPerMonth);
      printf("Toiletries for April costs £%d\n", ToiletriesPerMonth);
      printf("Extras for April costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for April 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//May 2017
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in May 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for May 2017 are £%d\n", TuitionFees);
      printf("Rent for May costs £%4.2f\n", RentPerMonth);
      printf("Food for May costs £%d\n", FoodPerMonth);
      printf("Toiletries for May costs £%d\n", ToiletriesPerMonth);
      printf("Extras for May costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for May 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//June 2017
      RunningTotal = RunningTotal + TuitionFees + RentPerMonth + FoodPerMonth + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in June 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for June 2017 are £%d\n", TuitionFees);
      printf("Rent for June costs £%4.2f\n", RentPerMonth);
      printf("Food for June costs £%d\n", FoodPerMonth);
      printf("Toiletries for June costs £%d\n", ToiletriesPerMonth);
      printf("Extras for June costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for June 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//September 2017
      RentSecondYear = RentPerMonth * 1.01; //Increases the rent per month price by 1% due to inflation
      FoodSecondYear = FoodPerMonth * 1.01; //Increases the food per month price by 1% due to inflation
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth; //Adjusts running total for second year inflation
      printf("Shown below are the costs for university in September 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for September 2017 are £%d\n", TuitionFees);
      printf("Rent for September costs £%4.2f\n", RentSecondYear);
      printf("Food for September costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for September costs £%d\n", ToiletriesPerMonth);
      printf("Extras for September costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for September 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//October 2017
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in October 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for October 2017 are £%d\n", TuitionFees);
      printf("Rent for October costs £%4.2f\n", RentSecondYear);
      printf("Food for October costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for October costs £%d\n", ToiletriesPerMonth);
      printf("Extras for October costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for October 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//November 2017
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in November 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for November 2017 are £%d\n", TuitionFees);
      printf("Rent for November costs £%4.2f\n", RentSecondYear);
      printf("Food for November costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for November costs £%d\n", ToiletriesPerMonth);
      printf("Extras for November costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for November 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//December 2017
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in December 2017\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for December 2017 are £%d\n", TuitionFees);
      printf("Rent for December costs £%4.2f\n", RentSecondYear);
      printf("Food for December costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for December costs £%d\n", ToiletriesPerMonth);
      printf("Extras for December costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for December 2017 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//January 2018
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in January 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for January 2018 are £%d\n", TuitionFees);
      printf("Rent for January costs £%4.2f\n", RentSecondYear);
      printf("Food for January costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for January costs £%d\n", ToiletriesPerMonth);
      printf("Extras for January costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for January 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//February 2018
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in February 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for February 2018 are £%d\n", TuitionFees);
      printf("Rent for February costs £%4.2f\n", RentSecondYear);
      printf("Food for February costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for February costs £%d\n", ToiletriesPerMonth);
      printf("Extras for February costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for February 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//March 2018
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in March 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for March 2018 are £%d\n", TuitionFees);
      printf("Rent for March costs £%4.2f\n", RentSecondYear);
      printf("Food for March costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for March costs £%d\n", ToiletriesPerMonth);
      printf("Extras for March costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for March 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//April 2018
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in April 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for April 2018 are £%d\n", TuitionFees);
      printf("Rent for April costs £%4.2f\n", RentSecondYear);
      printf("Food for April costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for April costs £%d\n", ToiletriesPerMonth);
      printf("Extras for April costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for April 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//May 2018
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in May 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for May 2018 are £%d\n", TuitionFees);
      printf("Rent for May costs £%4.2f\n", RentSecondYear);
      printf("Food for May costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for May costs £%d\n", ToiletriesPerMonth);
      printf("Extras for May costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for May 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

      //June 2018
      RunningTotal = RunningTotal + TuitionFees + RentSecondYear + FoodSecondYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in June 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for June 2018 are £%d\n", TuitionFees);
      printf("Rent for June costs £%4.2f\n", RentSecondYear);
      printf("Food for June costs £%4.2f\n", FoodSecondYear);
      printf("Toiletries for June costs £%d\n", ToiletriesPerMonth);
      printf("Extras for June costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for June 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//September 2018
      RentThirdYear = RentSecondYear * 1.01; //Increases the rent per month price by 1% due to inflation
      FoodThirdYear = FoodSecondYear * 1.01; //Increases the food per month price by 1% due to inflation
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth; //Adjusts running total for third year inflation
      printf("Shown below are the costs for university in September 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for September 2018 are £%d\n", TuitionFees);
      printf("Rent for September costs £%4.2f\n", RentThirdYear);
      printf("Food for September costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for September costs £%d\n", ToiletriesPerMonth);
      printf("Extras for September costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for September 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//October 2018
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in October 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for October 2018 are £%d\n", TuitionFees);
      printf("Rent for October costs £%4.2f\n", RentThirdYear);
      printf("Food for October costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for October costs £%d\n", ToiletriesPerMonth);
      printf("Extras for October costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for October 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//November 2018
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in November 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for November 2018 are £%d\n", TuitionFees);
      printf("Rent for November costs £%4.2f\n", RentThirdYear);
      printf("Food for November costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for November costs £%d\n", ToiletriesPerMonth);
      printf("Extras for November costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for November 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//December 2018
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in December 2018\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for December 2018 are £%d\n", TuitionFees);
      printf("Rent for December costs £%4.2f\n", RentThirdYear);
      printf("Food for December costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for December costs £%d\n", ToiletriesPerMonth);
      printf("Extras for December costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for December 2018 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//January 2019
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in January 2019\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for January 2019 are £%d\n", TuitionFees);
      printf("Rent for January costs £%4.2f\n", RentThirdYear);
      printf("Food for January costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for January costs £%d\n", ToiletriesPerMonth);
      printf("Extras for January costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for January 2019 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//February 2019
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in February 2019\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for February 2019 are £%d\n", TuitionFees);
      printf("Rent for February costs £%4.2f\n", RentThirdYear);
      printf("Food for February costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for February costs £%d\n", ToiletriesPerMonth);
      printf("Extras for February costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for February 2019 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//March 2019
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in March 2019\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for March 2019 are £%d\n", TuitionFees);
      printf("Rent for March costs £%4.2f\n", RentThirdYear);
      printf("Food for March costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for March costs £%d\n", ToiletriesPerMonth);
      printf("Extras for March costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for March 2019 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//April 2019
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in April 2019\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for April 2019 are £%d\n", TuitionFees);
      printf("Rent for April costs £%4.2f\n", RentThirdYear);
      printf("Food for April costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for April costs £%d\n", ToiletriesPerMonth);
      printf("Extras for April costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for April 2019 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//May 2019
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in May 2019\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for May 2019 are £%d\n", TuitionFees);
      printf("Rent for May costs £%4.2f\n", RentThirdYear);
      printf("Food for May costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for May costs £%d\n", ToiletriesPerMonth);
      printf("Extras for May costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for May 2019 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

  		//June 2019
      RunningTotal = RunningTotal + TuitionFees + RentThirdYear + FoodThirdYear + ToiletriesPerMonth + ExtrasPerMonth;
      printf("Shown below are the costs for university in June 2019\n");
      printf("----------------------------------------------------------\n");
      printf("Tuition fee's for June 2019 are £%d\n", TuitionFees);
      printf("Rent for June costs £%4.2f\n", RentThirdYear);
      printf("Food for June costs £%4.2f\n", FoodThirdYear);
      printf("Toiletries for June costs £%d\n", ToiletriesPerMonth);
      printf("Extras for June costs £%d\n", ExtrasPerMonth);
      printf("----------------------------------------------------------\n");
      printf("The running total for June 2019 is £%4.2f\n", RunningTotal);
      printf("----------------------------------------------------------\n\n");

      printf("--------------------------------------------------------------------------\n");
      printf("The total cost of my 3 year degree at the University of Leeds is £%4.2f\n", RunningTotal);
      printf("--------------------------------------------------------------------------\n");

  		//return code
  		return 0;
  }
