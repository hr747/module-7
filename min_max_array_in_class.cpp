#include <bits/stdc++.h>

using namespace std;
class student
{
    public:
    string name;
    int roll;
    int number;


};

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
    student nm;
    nm.number=INT_MAX;
    // nm.number=INT_MIN;

     for(int i=0;i<n;i++)
    {
        if (a[i].number<nm.number )
        // if (a[i].number>nm.number )
        nm=a[i];
    }
    cout<<nm.name<<" "<<nm.roll<<" "<<nm.number<<endl;

    return 0;
}