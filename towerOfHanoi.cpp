#include<iostream>
using namespace std;
void shift(int n,char from,char to,char extra)
{
    if (n==1)
    {
        cout<<"Move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        return;
    }
    shift(n-1,from,extra,to);
    cout <<"Move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    shift(n-1,extra,to,from);
}
int main()
{
    int n;
    cout<<"Enter no. of rings: ";
    cin>>n;
    shift(n,'A','C','B');
    return 0;
}
