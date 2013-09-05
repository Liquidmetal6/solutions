/*
 * Please fill the functions in this file.
 */
#include <stdio.h>
#include "pa01.h"

/* == Note 1 :: C does not initialize variables for you ==
 *
 * Please keep in mind that C does not initialize variables.
 *
 * int sum; 
 *
 * is different from
 *
 * int sum = 0;
 *
 * The value of sum is undefined (garbage) in the first case.
 */

/* == Note 2 :: Arrays are zero-indexed  ==
 *
 * If an array has "length" elements, then valid indices are between 0
 * and length - 1, not between 1 and length. Thus, array[length] will
 * access an invalid memory location and probably crash the program.
 */

/* addElement: sums the elements of an array of integers

   Parameters:

   array: an array of integers
   length: the length of the array (i.e. the number of elements)
   
   Returns:

   This function returns the sum of the elements.
   For example, if
   array[0] is 3
   array[1] is 11
   array[2] is 9
   and length is 3
   This function should return 3 + 11 + 9 = 23.

   If the array has no elements (length is 0), then the function returns 0.
*/
int addElement(int * array, int length)
{
int *AddArray;
int ArraySum;
//int LengthArray;
int i;

AddArray = array;
ArraySum = 0;
i=0;
//LengthArray = length;

for(i=0;i<length;i++)\
{
ArraySum = ArraySum + AddArray[i];
}
    return (ArraySum);
}
/*
 * =================================================================
 */
/* countNegative: how many negatives values there are in an array

   Parameters:

   array: an array of integers
   length: the length of the array (i.e. the number of elements)

   Returns:

   This function returns the number of negative elements in the array
   For example, if
   array[0] is -3
   array[1] is 11
   array[2] is -9
   array[3] is 0
   and length is 4
   This function should return 2.
   0 is not considered to be a negative number.
*/
int countNegative(int * array, int length)
{
int *ArrayHandle = array;
//int LengthHandle = length;
int NegCount=0;
int i = 0;

for (i=0;i<length; i++)
{
if(ArrayHandle[i]<0)
{
NegCount++;
}
} 
   
 return (NegCount);
}
/*
 * =================================================================
 */
/* isIncreasing: Is an array of integers always increasing?

   Parameters:

   array: an array of integers
   length: the length of the array (i.e. the number of elements)
  
   Returns:

   This function returns 1 if the elements are increasing
   (i.e. array[i] < array[j] for all 0 <= i < j < length).  If the
   elements are not increasing, this function returns 0.

   If the array has only one element (i.e. length is 1), the function
   returns 1.  If the array has no elements (length is 0), the function
   also returns 1.

   Examples:

   If
   array[0] is 3
   array[1] is 9
   array[2] is 11
   and length is 3
   This function should return 1
   
   If 
   array[0] is 3
   array[1] is 11
   array[2] is 9
   and length is 3
   This function should return 0

   If 
   array[0] is 3
   array[1] is 3
   array[2] is 9
   and length is 3
   This function should return 0

*/
int isIncreasing(int * array, int length)
{
//int *ArrayHandle2 = array;
int LengthHandle = length;
int i=0;
//int j=1;
int test=0;
int test1 = 0;
int test2=0;
int Result=1;

for (i=0;i<LengthHandle-1; i++)
{

test1 = array[i];
test2= array[i+1];
	/*if(ArrayHandle2[i]>=ArrayHandle2[j])
	{
	test=test+1;	
	}*/
	if(test1>=test2)
	{
	test=test+1;	
	}
//j++;
}

if(test>1)
{
Result = 0;
}

return(Result);
}
