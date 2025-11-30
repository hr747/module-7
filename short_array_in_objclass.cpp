#include <bits/stdc++.h>

using namespace std;
class student
{
    public:
    string name;
    int roll;
    int number;


};
bool cnm(student l,student r)
{  
    // ternel oprator 
    // return l.number==r.number?  l.roll<r.roll :l.number>r.number ;

    // main locik

    if  (l.number<r.number)
    {
        return true;
    }
    // number suman hole
    else if (l.number>r.number)
    {
        return true;
    }
    
    else{
        if (l.number==r.number)
        {
            return l.roll<r.roll;
        }
        else {
            return l.roll>r.roll;
        }
    }
// shortcut
// return l.number<r.number;
}

int main()


{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {cin.ignore();
         getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].number;
    }
    sort(a,a+n,cnm);
     for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].number<<endl;
    }

    return 0;
}