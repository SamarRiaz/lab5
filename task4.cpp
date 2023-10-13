# include<iostream>
using namespace std;
int needs(float val,float val2);
int le(float val,float val2);


main()
{
    float hours,workers,days,left,needed,done;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    done=(days*9)*workers;
    needed=needs(done,hours);
    left= le(done,hours);
    if(hours>done)
    cout<<"Not enough time! "<<needed<<" hours needed.";
    if(hours<done)
    cout<<"Yes! "<<left<<" hours left.";
}
int needs(float val,float val2)
{
    return(val2-val);
}
int le(float val,float val2)
{
    return((val-val2));
}
