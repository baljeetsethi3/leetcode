class Solution {
public:
    int myAtoi(string str) {
       unsigned long long int val=0,sign=0,flag=0,start=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' ')
            {
                if(start==0)
                continue;
                else
                {
                    val=0;
                    break;
                }
            }
            else
            {
                 start++;
                if(str[i]=='-')
                {
                    if(start==1)
                    {
                    sign=1;
                    continue;
                    }
                    else
                    {
                        val=0;
                        break;
                    }
                }
                else if(str[i]=='+')
                {
                    if(start==1)
                    {
                        sign=0;
                        continue;
                    }
                   else
                   {
                       val=0;
                       break;
                   }
                }
                else if(str[i]>=48 && str[i]<=57)
                {
                    while(str[i]>=48 && str[i]<=57)
                    {
                        if(str[i]=='0'&& flag==0)
                        {
                            i++;
                            continue;
                        }
                        flag++;
                        val=val*10+(int)str[i]-48;
                        if(sign==0 && val>INT32_MAX)
                            return(INT_MAX);
                        else if(sign==1 && -val<INT32_MIN)
                            return(INT_MIN);
                        i++;
                    } 
                }
                    if(sign==1)
                    {
                        if(val!=0)
                        val=0-val;
                        else
                            return(0);
                    }
                     if(sign==1 && val<INT32_MIN)
                            val=INT_MIN;
                  else if(sign==0 &&val>INT32_MAX)
                        val=INT_MAX;
                break;
            }
            return(val);
            }
        return(val);
    }
};