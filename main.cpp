#include <iostream>
using namespace std;

int main()
{
    // Sum of two numbers

// cout<<"Enter two numbers"<<endl;
// int x=0,y=0;
// cin>>x>>y;
// cout<<"The sum of the two numbers is "<<x+y<<endl;

//    Mean of four numbers 
// cout<<"Lets calculate the mean of four numbers, Enter four values"<<endl;
// int a,b,c,d=0;
// cin>>a>>b>>c>>d;
// cout<<"The mean of the four values is "<<(a+b+c+d)/4<<endl;

// Add to cart 

// cout<<"Should we  add the product to the cart?"<<endl;
// string res;
// cin>>res;
// if (res == "Yes")
// {
//     cout<<"The product is being added to your cart";
// }

// Waec Grading System 
cout<<"Enter your score for your grade"<<endl;
int score = 0;
cin>>score;
if (score >=80)
{
    cout<<"You had A";
}
else if (score>=75)
{
    cout << "You had B2";
}
else if (score>=70)
{
    cout << "You had B3";
}
else if (score >= 65)
{
    cout << "You had C4";
}
else if (score >= 60)
{
    cout << "You had C5";
}
else if (score >= 55)
{
    cout << "You had C6";
}
else if (score >= 50)
{
    cout << "You had D7";
}
else if (score > 45)
{
    cout << "You had E8";
}

else
{
    /* code */
}


return 0;
}
