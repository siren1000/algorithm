//下标和size()错乱


#include <iostream>
#include <vector>
using namespace std;

class solution{
public:
    bool Find(int target,vector<vector<int>> array)
    {
        int _length=array.size();
        if(_length==0)
            return false;
        int _high=array[0].size();
        if(_high==0)
            return false;
       
        int length=_length,high=_high;
        if(target<array[0][0])
            return false;

        if(target>array[_length][_high])
            return false;

        for(int i=0;i<=_length;i++)
        {
            if(target==array[0][i])
                return true;
            else if(target>array[0][i])
            {
                length=array[0][i-1];
                break;
            }
        }
        for(int i=0;i<=_high;i++)
        {
            if(target==array[i][0])
                return true;
            else if(target>array[i][0])
            {
                high=array[i-1][0];
                break;
            }
        }

        for(int i=length;i<=_length;i++)
        {
            for(int j=0;j<high;j++)
            {
                if(target==array[i][j])
                    return true;
            }
        }
        for(int i=0;i<_length;i++)
        {
            for(int j=high;j<=_high;j++)
            {
                if(target==array[i][j])
                    return true;
            }
        }
        
        return false;
        }
};
