#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,update;
    cin>>t;

	for(int i=0; i<t; i++)
	{
        string s;
        int flag=0;
        cin>>s;

        while(1)
        {
            if(s[0]=='A')
            {
                if(s[1]=='D')
                {
                    if(s[2]=='V')
                    {
                        if(s[3]=='I')
                        {
                            if(s[4]=='T')
                            {
                                if(s[5]=='I')
                                {
                                    if(s[6]=='Y')
                                    {
                                        if(s[7]=='A')
                                        {

                                        }
                                        else if(s[7]=='Z')
                                        {
                                            s[7]='A';
                                            flag++;
                                        }
                                        else
                                        {
                                            s[7]=s[7]+1;
                                            flag++;
                                        }
                                    }
                                    else if(s[6]=='Z')
                                    {
                                        s[6]='A';
                                        flag++;
                                    }
                                    else
                                    {
                                        s[6]=s[6]+1;
                                        flag++;
                                    }
                                }
                                else if(s[5]=='Z')
                                {
                                    s[5]='A';
                                    flag++;
                                }
                                else
                                {
                                    s[5]=s[5]+1;
                                    flag++;
                                }
                            }
                            else if(s[4]=='Z')
                            {
                                s[4]='A';
                                flag++;
                            }
                            else
                            {
                                s[4]=s[4]+1;
                                flag++;
                            }
                        }
                        else if(s[3]=='Z')
                        {
                            s[3]='A';
                            flag++;
                        }
                        else
                        {
                            s[3]=s[3]+1;
                            flag++;
                        }
                    }
                    else if(s[2]=='Z')
                    {
                        s[2]='A';
                        flag++;
                    }
                    else
                    {
                        s[2]=s[2]+1;
                        flag++;
                    }
                }
                else if(s[1]=='Z')
                {
                    s[1]='A';
                    flag++;
                }
                else
                {
                    s[1]=s[1]+1;
                    flag++;
                }
            }
            else if(s[0]=='Z')
            {
                s[0]='A';
                flag++;
            }
            else
            {
                s[0]=s[0]+1;
                flag++;
            }

        }
        cout<<flag<<endl;
	}

}












































