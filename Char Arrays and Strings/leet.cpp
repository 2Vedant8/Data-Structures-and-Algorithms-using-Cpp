#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
//Check the condition for the while loop to continue.
  while(nums[0]!=nums[nums[0]])
  {
    //Print the value of nums[0] and nums[nums[0]].
    cout << "nums[0] = " << nums[0] << ", nums[nums[0]] = " << nums[nums[0]] << endl;
    //Swap the values of nums[0] and nums[nums[0]].
    swap(nums[0], nums[nums[0]]);
    //Print the value of nums[0] and nums[nums[0]].
    cout << "nums[0] = " << nums[0] << ", nums[nums[0]] = " << nums[nums[0]] << endl;
  }
//Return nums[0].
return nums[0];
}

int main()
{
//Take the size of the array.
int n;
cin>>n;
//Declare a vector nums.
vector<int>nums(n);
//Take the elements of the array from the user.
for(int i=0; i<n; i++)
{
    cin>>nums[i];
}
//Call the function findDuplicate and print the result.
cout << findDuplicate(nums);

return 0;
}