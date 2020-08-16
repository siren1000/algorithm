#include <iostream>
#include <vector>
using namespace std;

int main()
{
class Solution
{
public:
    void reOrderArray(vector<int> &array)
    {
        vector<int> temp;
        int num=array.size();
        for(int i=0;i<num;i++)
        {
            if(array[i]%2==1)
                temp.push_back(array[i]);
        }
        for(int i=0;i<num;i++)
        {
            if(array[i]%2==0)
                temp.push_back(array[i]);
        }
        array=temp;
    }

};
}

