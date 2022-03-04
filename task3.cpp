#include <iostream>
using namespace std;

void segregateElements(int nums[], int n)
{
    int result[n];

    int j = 0; 
    for (int i = 0; i < n ; i++)
        if (nums[i] >= 0 )
            result[j++] = nums[i];
    if (j == n || j == 0)
        return;
 
    for (int i = 0 ; i < n ; i++)
        if (nums[i] < 0)
            result[j++] = nums[i];
 
   
    memcpy(nums, result, sizeof(result));
} 
 
int main()
{
    int nums[] = {0, 9, -7, 2, -12, 11, -20}; 
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
     segregateElements(nums, n);
 
    cout << ("\nArray elements after rearrange: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
      
}