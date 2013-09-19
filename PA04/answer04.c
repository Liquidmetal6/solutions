/*
 * Please fill the functions in this file.
 * You can add additional functions. 
 *
 * Hint: 
 * You can write additonal functions.
 * You can test your functions with your own input file.
 * See details in README or typing command ./pa04 in terminal after make.
 * See output format examples in any of the files in directory expected.
 * 
 * You may create additional arrays if needed.  The maximum size
 * needed is specified by MAXLENGTH in pa04.h.
 */

#include "pa04.h"
#include <stdio.h>
#include <stdlib.h>



/*
 * =================================================================
 * This function prints all partitions of a positive integer value
 * For example, if the value is 3:
 *
 * partitionAll 3
 * = 1 + 1 + 1
 * = 1 + 2
 * = 2 + 1
 * = 3
 */
void printPartition(int * part, int length)
{
  int ind;
  for (ind = 0; ind < length - 1; ind ++)
    {
      printf("%d + ", part[ind]);
    }
  printf("%d\n", part[length - 1]);
}

void partition(int * part, int ind, int left)
{
  int val;
  if (left == 0)
    {
      printPartition(part, ind);
      return;
    }
  for (val = 1; val <= left; val ++)
    {
      part[ind] = val;
      partition(part, ind + 1, left - val);
    }
}




void partitionAll(int value)
{
  /*printf("partitionAll %d\n", value);
  int * buffer = malloc(sizeof(int) * value);
  partitionworker(buffer,0,value);  
  free(buffer);
  /// printf("partitionAll %d\n", value);*/
  int n=value;
  if (n <= 0)
    {  
      return; 
  }
  int * arr;
  arr = malloc(sizeof(int) * n);
  partition(arr, 0, n);
  free (arr);
  return;
}



/*
void partitionworker(int *arr, int pos, int value)
{
   if(value == 0)
    {
      printarr(arr,pos);
      return;
    }
  int i;
  for(i=1;i<=value;++i)
    {
      arr[pos] = i;
      partitionworker(arr, pos+1, value-1);
    }
    return;
    }

   int something;
  if (value == 0)
    {
      printarr(arr, pos);
      return;
    }
  for (something = 1; something <= value; something++)
    {
      arr[pos] = something;
      partitionworker(arr, pos + 1, value - something);
    }
    }
*/


/*
void printarr(int*arr, int len)
{
  // int i;
  // if(len>0)
  // {
  //   printf("%d", arr[0]);
  ///   return;
  // }
  // for(i=1;i<len;++i)
  // {
  //   printf("  + %d",arr[i]);
  // }
  // printf("\n");

   int ind;
  for (ind = 0; ind < len - 1; ind ++)
    {
      printf("%d + ", arr[ind]);
    }
  printf("%d\n=", arr[len - 1]);
}

*/








/*
 * =================================================================
 * This function prints the partitions that use increasing values.
 *
 * For example, if value is 5
 * 2 + 3 and
 * 1 + 4 are valid partitions
 *
 * 5 is a valid partition
 * 
 * 1 + 1 + 3 and
 * 2 + 1 + 2 and
 * 3 + 2 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 *
 */


void partitionIncreasing(int value)
{
  printf("partitionIncreasing %d\n", value);

}

/*
 * =================================================================
 * This function prints the partitions that use Decreasing values.
 *
 * For example, if value is 5
 * 3 + 2 and
 * 4 + 1 are valid partitions
 *
 * 5 is a valid partition
 * 
 * 1 + 1 + 3 and
 * 2 + 1 + 2 and
 * 2 + 3 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 *
 */


void partitionDecreasing(int value)
{
  printf("partitionDecreasing %d\n", value);
  

}

/*
 * =================================================================
 * This function prints odd number only partitions of a positive integer value
 * For example, if value is 5
 * 1 + 1 + 1 + 1 + 1 and
 * 1 + 3 + 1 are valid partitions
 *
 * 5 is a valid partition
 * 
 * 1 + 1 + 1 + 2 and
 * 2 + 1 + 2 and
 * 2 + 3 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 */


void partitionOdd(int value)
{
  printf("partitionOdd %d\n", value);
  
}

/*
 * =================================================================
 * This function prints even number only partitions of a positive integer value
 * For example, if value is 8
 * 2 + 2 + 2 + 2and
 * 2 + 4 + 2 are valid partitions
 *
 * 8 is a valid partition
 *
 * 2 + 1 + 1 + 2 + 2and
 * 2 + 1 + 2 + 3and
 * 5 + 3 are invalid partitions.
 *
 * if the value is 5, there will be no result generated
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 */

void partitionEven(int value)
{
  printf("partitionEven %d\n", value);

}

/*
 * =================================================================
 * This function prints alternate ood and even number partitions of a positive integer value. Each partition starts from and odd number, even number, ood number again, even number again...etc.
 *
 * For example, if value is 6
 * 1 + 2 + 1 + 2 and
 * 3 + 2 + 1 are valid partitions
 *
 * 6 is not a valid partition
 *
 * 2 + 1 + 1 + 2 and
 * 2 + 1 + 3and
 * 5 + 1 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 */


void partitionOddAndEven(int value)
{
  printf("partitionOddAndEven %d\n", value);
  
}

/*
 * =================================================================
 * This function prints prime number only partitions of a positive integer value
 * For example, if value is 6
 * 2 + 2 + 2 and
 * 3 + 3 are valid partitions
 *
 * 6 is not a valid partition
 * 
 * 2 + 4 and
 * 1 + 5 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 */



void partitionPrime(int value)
{
  printf("partitionPrime %d\n", value);

}
