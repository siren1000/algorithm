#include <iostream>
#include <vector>
using namespace std;

int main()
{
class Solution
{
public:
    int minNumberInRotateArray(vector<int> rotateArray)
    {
        if(rotateArray.empty()==true)
            return 0;
        int left=0,right=rotateArray.size()-1;
        while(left<right)
        {
            if(rotateArray[left]<rotateArray[right])
                return rotateArray[left];
            int mid=left+(right-left)/2;
            if(rotateArray[left]>rotateArray[mid])
                left=mid+1;
            else if(rotateArray[right]>rotateArray[left])
                right=mid-1;
            else
                ++left;
        }
        return rotateArray[left];
    }

};
}

