//Write the implementation code of binary search algorithm to search an element from an array list.//
/*
Following are the steps of implementation that we will be following:

1.Start with the middle element:
2.If the target value is equal to the middle element of the array, then return the index of the middle element.
.If not, then compare the middle element with the target value,
.If the target value is greater than the number in the middle index, then pick the elements to the right of the middle index, and start with Step 1.
.If the target value is less than the number in the middle index, then pick the elements to the left of the middle index, and start with Step 1.
3.When a match is found, return the index of the element matched.
If no match is found, then return -1
*/

#include<iostream>
using namespace std;

int binarySearch(int values[], int len, int target)
{
    int max = (len - 1);
    int min = 0;
    
    int guess;  // this will hold the index of middle elements
    int step = 0;  // to find out in how many steps we completed the search
    
    while(max >= min)
    {
        guess = (max + min) / 2;
        // we made the first guess, incrementing step by 1
        step++;
        
        if(values[guess] ==  target)
        {
            cout<<"Number of steps required for search: "<< step<<endl;
            return guess;
        }
        else if(values[guess] >  target) 
        {
            // target would be in the left half
            max = (guess - 1);
        }
        else
        {
            // target would be in the right half
            min = (guess + 1);
        }
    }
 
    // We reach here when element is not 
    // present in array
    return -1;
}
 
int main(void)
{
    int values[] = {13, 21, 54, 81, 90};
    int n = sizeof(values) / sizeof(values[0]);
    int target;
    cout<<"values[] = {13, 21, 54, 81, 90}";
    cout<<"\nTarget the Number : ";
    cin>>target;
    int result = binarySearch(values, n, target);
    if(result == -1)
    {  
        cout<<"Element is not present in the given array.";
    }
    else
    {
        cout<<"Element is present at index: "<< result;
    }
    return 0;
}
