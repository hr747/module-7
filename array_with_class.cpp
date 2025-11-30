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
     for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].number<<endl;
    }

    return 0;
}