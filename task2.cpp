# include<iostream>
using namespace std;
float meters(float val1);
float milimeters(float val1);
float kilometers(float val1);
float centimeters(float val1);
main(){
float a,b,c,d,e,g,h,i;
string f="";
cout<<"Enter the length of the pyramid (in meters): ";
cin>>a;
cout<<"Enter the width of the pyramid (in meters): ";
cin>>b;
cout<<"Enter the height of the pyramid (in meters): ";
cin>>c;
cout<<"Enter the desired output unit ( millimeters, centimeters, meters, kilometers): ";
cin>>f;
d=(a*b*c)/3;
e=meters(d);
g=milimeters(d);
h=centimeters(d);
i=kilometers(d);
if(f== "meters")
cout<<"The volume of the pyramid is: "<<e<<" cubic "<<f;
if(f== "milimeters")
cout<<"The volume of the pyramid is: "<<g<<" cubic "<<f;
if(f== "centimeters")
cout<<"The volume of the pyramid is: "<<h<<" cubic "<<f;
if(f== "kilometers")
cout<<"The volume of the pyramid is: "<<i<<" cubic "<<f;
}
float meters(float val1)
{
    return(val1);
}
float milimeters(float val1)
{
    return(val1*1000000000);
}
float centimeters(float val1)
{
    return(val1*1000000);
}
float kilometers(float val1)
{
    return(val1/1000000000);
}

