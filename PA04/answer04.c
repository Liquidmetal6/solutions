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
  printf("= ");
  int ind;
  for (ind = 0; ind < length - 1; ind ++)
    {
      printf("%d + ", part[ind]);
    }
  printf("%d\n", part[length - 1]);
  // printf("\n");
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
  printf("partitionAll %d\n", value);
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
//void partitionIncreasingHelper(int*, int, int)

void partitionIncreasinghelper(int * part, int ind, int left)
{
  int val;
  if (left == 0)
    {
      printPartition(part, ind);
      return;
    }
  for (val = 1; val <= left; val ++)
    {
       if(ind==0)
	{
	  part[ind] = val;
	  partitionIncreasinghelper(part, ind + 1, left - val);
	}
       else if (val>part[ind-1])
	{
	  part[ind] = val;
	  partitionIncreasinghelper(part, ind + 1, left - val);	  
	}    
    }
}

void partitionIncreasing(int value)
{
  printf("partitionIncreasing %d\n", value);
  int n=value;
  if (n <= 0)
    {  
      return; 
    }
  int * arr;
  arr = malloc(sizeof(int) * n);
partitionIncreasinghelper(arr, 0, n);
  free (arr);

  return;
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
void partitionoddhelp(int * part, int ind, int left)
{
  /*  int val;
  if (left == 0)
    {
      printPartition(part, ind);
      return;
    }
  for (val = 1; val <= left; val ++)
    {
      if((val%2)==1)
	{
	  part[ind] = val;
	  partitionoddhelp(part, ind + 1, left - val);
	}
    }
  */
}
void partitionOdd(int value)
{
  /*  printf("partitionOdd %d\n", value);
  int n=value;
  if (n <= 0)
    {  
      return; 
    }
  int * arr;
  arr = malloc(sizeof(int) * n);
  partitionoddhelp(arr, 0, n);
  free (arr);
  
  return;
  */} 


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
void partitionevenhelp(int * part, int ind, int left)
{
  /*  int val;
  if (left == 0)
    {
      printPartition(part, ind);
      return;
    }
  for (val = 1; val <= left; val ++)
    {
      if((val%2)==0)
	{
	  part[ind] = val;
	  partitionevenhelp(part, ind + 1, left - val);
	}
    }
  */}
void partitionEven(int value)
{
  /*  printf("partitionEven %d\n", value);  
  int n=value;
  if (n <= 0)
    {  
      return; 
    }
  int * arr;
  arr = malloc(sizeof(int) * n);
  partitionevenhelp(arr, 0, n);
  free (arr);

  return;
  */
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
  return;
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
 *//*
int testPrime(int n)
{
  int i;
  int true=1;
  int false = 0;
  for(i=2;i<n;++i)
    {
      if(n%i==0)
	{
	  return true;
	}
    }
  return false;
 */


void partitionPrimeHelper(int * part, int ind, int left)
{
  /* int val;
  int primetest;
  
  if (left == 0)
    {
      printPartition(part, ind);
      return;
    }
  for (val = 1; val <= left; val ++)
    {
      primetest = testPrime(val);  
      if(primetest=1)
	{
	  part[ind] = val;
	  partitionPrimeHelper(part, ind + 1, left - val);
	}
    }
  */
}
void partitionPrime(int value)
{
  /*
  printf("partitionPrime %d\n", value);
  int n=value;
  if (n <= 0)
    {  
      return; 
    }
  int * arr;
  arr = malloc(sizeof(int) * n);
  partitionPrimeHelper(arr, 0, n);
  free (arr);
  
  return;
  */}

