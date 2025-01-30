#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int m,k,n, c_s=0,c_p=0;
        string moves;
        cin>>m>>k;
        cin>>moves;

        for(int j=0; j<m;j++)
        {
            if(moves[j]=='S')
            {
                c_s++;       //c_s is the counter variable for number of "S"
            }
            else
            {
                c_p++;      //c_p is the counter variable for number of "p"
            }
        }

        if(c_s>=k)
        {
            n=m;
        }
        else
        {
            n=(c_p-1)+k;
        }
        cout<<n<<endl;
    }

}// the game ends for two reasons, if all rings are already used and if it becomes impossible to win,
// but not if the game is already won.So if the game is won the game continues until all rings are
//used and thus number of moves=number of rings.

// think the other possibility by considering the number of mistakes can be made. If number of mistakes exceeds the max number of mistakes
//can be made then the game ends. so the total number of rings is swishes needed(k)+(number of mistakes-1)
