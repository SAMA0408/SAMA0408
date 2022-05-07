#include<iostream.h>
#include<stdio.h>
using namespace std;
struct rectangle
{
    int length;
    int breath;
    char x;
};
int main()
{
    struct rectangle r1={10,5}
    r1.length=15;
    r1.breath=7;
    cout<<r1.length<<endl;
    cout<<r1.breath<<endl;
    return0;
}
