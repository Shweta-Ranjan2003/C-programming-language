#include <stdio.h>
/* The process of finding a particular element(say key value) of an array is called searching.
Computer scientists tend to describe running time with big O notation, which we can think of as “on the order of”
   Two searching techniques:
   1. Linear search:- Examines each element sequentially. it takes time O(n) in worst case and in best case omega(1)
   2. Binary search:- Applicable for sorted array . it locates the middle element of the array and compares
                      if middle element is the key value search stops
                      if middle element<key value then search in right half with same divide in half and look
                      if middle element>key value then search in left half with same divide in half and look
                      it takes time O(log base2 n) or we can say O(logn) in worst case and in best case running time is omega(1)

 Computer scientist uses big Omega notation, for best case(i.e lower bound of no. of steps algorithm takes)
 and they uses big O notation, for worst case(i.e upper bound of no. of steps algorithm takes)
 and they uses big thetha notation,(i.e upper bound of no. of steps algorithm takes is same to lower bound)

 eg. if array is 5,6,3,4,7,8,2 and key value is 2 so in linear search running time will be O(n) which is worst case
 eg. if array is 5,6,3,4,7,8,2 and key value is 5 so in linear search running time will be omega(1) which is best case
 
if its a sorted array like 1,2,3,4,5,6,7 and key value is 6 then using binary search running time will be O(logn) which is worst case
if its a sorted array like 1,2,3,4,5,6,7 and key value is 4 then using binary search running time will be omega(1) which is best case

but for using binary search we have to sort the array first and 3 techniques are
1. selection sort:- assume array[8] is 5 2 7 4 1 6 3 0
  so we will first go through all element and find smallest digit and swap it with first digit
  0 2 7 4 1 6 3 5
  now we will forget about 0 which means now for us array is of 7 element(n-1) and will repeat step again
  0 1 7 4 2 6 3 5 
  now array is of 6 element(n-2) and in selection sort meathod array gets sorted from beggining
  0 1 2 4 7 6 3 5
  0 1 2 3 7 6 4 5
  0 1 2 3 4 6 7 5
  0 1 2 3 4 5 7 6
  0 1 2 3 4 5 6 7
  so to sort array in worst case running time would be O(n^2) comparisons and O(n)swaps and in best case omega(n^2)

2. bubble sort(sinking sort) :- in bubble sort meathod we swap [i] with [i+1]th element according to which one's highest.
                  bubble sorting goes from 0 to n-2 because if go to n-1 then there will no element left for [i-1]th element to compare and swap with.
                  unlike selection sort meathod bubble sort starts getting sorted from end.
                  successive pairs of element are compared if they are in increasing order no change and if in decreasin order then swap
eg- 4231 2431 2341 2314   here we can see in first time the highest digit has come to its position(end)
    2314 2314 2134    
    2134 1234  so as we can in bubble sort array gets sorted from end
  so to sort array in worst case running time would be O(n^2) and in best case omega(n)

## recursion:- Recursion is the ability for a function to call itself.
          eg=>    int fact (int n)
              {
                  //base case
                  //recursive case
              }
   recursion is used in merge sort meathod
3. merge sort(divide and conquer):- Sort left half of number
                Sort right half of number
                Merge sorted halves
                if only one no. -> Quit
eg   2 4 5 7 | 0 1 3 6     Remember these are two sorted halves together. and we merging them
look at just the first number in each list, and move the smaller, 0, into the start of a new list.
Then we can look at the next number in the list:
  0               ( 2 4 5 7 |  1 3 6)
  1               ( 2 4 5 7 |   3 6)
  2               (  4 5 7 |    3 6)
  3               (  4 5 7 |      6)
  4               (    5 7 |      6)
  5               (      7 |      6)
  6               (      7 |       )
  7               (        |       )
  But before merging two sorted half we have to sort them
  array  5 2 7 4 1 6 3 0
  We start by looking at the first half, which is a list of size 4:
5 2 7 4
We’ll have to sort the left half, which is a list of size 2:
5 2
The left half is size 1, so we’re done, and the right half is also size 1, so we can merge both halves together:
2 5
Now we’ll need to sort the right half:
7 4
Again, we’ll merge both of these halves together, by taking the smallest element from each list
4 7
Now we’ve sorted both halves, each of size 2, and can merge them together:
2 5 | 4 7
^     ^

  5 | 4 7
  ^   ^
2

  5 |   7
  ^     ^
2 4

    |   7
        ^
2 4 5

2 4 5 7
We’ll repeat this for the right half, another list of size 4:
1 6 3 0
and we will get 0 1 3 6
and now we can merge these two sorted half as we saw above.

the upper bound for running time for merge sort is only O(n log n) which is less than O(n^2)
The lower bound of our merge sort is still omega(n log n) since
 we have to do all the work even if the list is sorted. So merge sort also has thetha(n log n).
*/
int main()
{
    
    return 0;
}