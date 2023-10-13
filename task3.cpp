# include<iostream>
using namespace std;
float me(float val1);
float ee(float val1);
float se(float val1);
float ve(float val1);
float te(float val1);
main(){
    float price,m,e,s,v,t;
    char T;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>T;
    cout<<"Enter the price of the vehicle: ";
    cin>>price;
    m= me(price);
    e=ee(price);
    s=se(price);
    v=ve(price);
    t=te(price);
    if(T=='M')
    cout<<"The final price of the veicle of type "<<T<<" after adding the tax $"<<m;
    if(T=='E')
    cout<<"The final price of the veicle of type "<<T<<" after adding the tax $"<<e;
    if(T=='S')
    cout<<"The final price of the veicle of type "<<T<<" after adding the tax $"<<s;
    if(T=='V')
    cout<<"The final price of the veicle of type "<<T<<" after adding the tax $"<<v;
    if(T=='T')
    cout<<"The final price of the veicle of type "<<T<<" after adding the tax $"<<t;
}
float me(float val1){
    return(val1+(val1*0.06));
}
float ee(float val1){
    return(val1+(val1*0.08));
}
float se(float val1){
    return(val1+(val1*0.10));
}
float ve(float val1){
    return(val1+(val1*0.12));
}
float te(float val1){
    return(val1+(val1*0.15));
}
