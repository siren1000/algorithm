//错误百出

#include <iostream>

int main()
{
class Solution
{
public:
    void replaceSpace(char* str,int length)
    {
        if(str==NULL)
            return;

        int len=0,blank=0;
        for(int i=0;str[i]!='\0';i++)
        {
            ++len;
            if(str[i]==' ')
                ++blank;
        }

        if(blank==0)
            return;

        if((len+2*blank+1)>length)
            return;

        char* pStr_front=str+len;
        char* pStr_later=str+2*blank+len;

        for(int i=0;i<len;i++)
        {
            if(*pStr_front==' ')
            {
                *pStr_later='0';
                *pStr_later=*pStr_later-1;
                *pStr_later='2';
                *pStr_later=*pStr_later-1;
                *pStr_later='%';
                *pStr_later=*pStr_later-1;

            }else{
                *pStr_later=*pStr_front;
                *pStr_later=*pStr_later-1;
            }
            *pStr_front=*pStr_front-1;
        }

    }

};
}

