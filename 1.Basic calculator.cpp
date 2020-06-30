#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float sum(int x){
    float y = 0, result = 0;
    cout<<" Please specify the numbers you want sum "<<endl;
    for(int i = 0; i < x; i++){
        cin>>y;
        result+=y;
    }
    return result;
}

float product(int x){
    float y = 1, result = 1;
    cout<<" Please specify the numbers you want multiply "<<endl;
    for(int i = 0; i < x; i++){
        cin>>y;
        result*=y;
    }
    return result;
}

int main(){
    cout<<" Welcome to the Basic Calculator V1.0 "<<endl;
    char x;
    cout<<endl;
    cout<<"        By Saravanan T      "<<endl;
    cout<<endl;
    cout<<" Please specify the operation you want to carry out "<<endl;
    cout<<endl;
    cout<<" + = For Addition "<<endl;
    cout<<" - = For Subration of two numbers "<<endl;
    cout<<" * = For Multiplication "<<endl;
    cout<<" / = For Division (to get quotient) "<<endl;
    cout<<" % = For Division (to get remainder) "<<endl;
    cout<<" s = To get sine of given angle "<<endl;
    cout<<" c = To get cosine of given angle "<<endl;
    cout<<" t = To get tangent of given angle "<<endl;
    cout<<" p = For Power function "<<endl;
    cout<<" r = To get Square root "<<endl;
    cout<<" l = To get logathermic function "<<endl;
    cout<<" e = To get Exponential function "<<endl;
    cout<<endl;
    
    cin>>x;
    cout<<endl;

    switch (x)
    {
    case '+':
        int a;
        cout<<" Please enter the number of terms you to sum up "<<endl;
        cin>>a;
        cout<<" The sum is "<<sum(a)<<endl;
        break;
    case '-':
        float b,c;
        cout<<" Please enter the numbers to subract "<<endl;
        cin>>b;
        cin>>c;
        cout<<" The difference is "<<b - c<<endl;
        break;
    case '*':
        cout<<" Please enter the number of terms you to multiply "<<endl;
        cin>>a;
        cout<<" The product is "<<product(a)<<endl;
        break;
    case '/':
        cout<<" Please enter the numbers to divide and get quotient "<<endl;
        cin>>b;
        cin>>c;
        cout<<" The quotient is "<<b / c<<endl;
        break;
    case '%':
        int d,e;
        cout<<" Please enter the numbers to divide and get remainder "<<endl;
        cin>>d;
        cin>>e;
        cout<<" The remainder is "<<d % e<<endl;
        break;
    case 's':
        double f,g;
        cout<<" Please enter the angle in degrees "<<endl;
        cin>>f;
        g = f/180 * M_PI;
        cout << "sin ( "<<f<<" ) = " << sin(g) << endl;
        break;
    case 'c':
        cout<<" Please enter the angle in degrees "<<endl;
        cin>>f;
        g = f/180 * M_PI;
        cout << "cos ( "<<f<<" ) = " << cos(g) << endl;
        break;
    case 't':
        cout<<" Please enter the angle in degrees "<<endl;
        cin>>f;
        g = f/180 * M_PI;
        cout << "tan ( "<<f<<" ) = " << tan(g) << endl;
        break;
    case 'p':
        cout<<" Please enter the base number "<<endl;
        cin>>f;
        cout<<" Please enter the power "<<endl;
        cin>>g;
        cout<<f<<" ^ "<<g<<" = " << pow(f, g) << endl;
        break;
    case 'r':
        cout<<" Please enter the number "<<endl;
        cin>>f;
        cout << "Square root of "<<f<<" = " << sqrt(f) << endl;
        break;
    case 'l':
        cout<<" Please enter the number "<<endl;
        cin>>f;
        cout << "Log of "<<f<<" = " << log(f) << endl;
        break;
    case 'e':
        cout<<" Please enter the number "<<endl;
        cin>>f;
        cout << "Exponential of "<<f<<" = " << exp(f) << endl;
        break;
    default:
    cout<<" Invalid input "<<endl;
    cout<<"Please enter a valid input "<<endl;
        break;
    }
    cout<<endl;
    system("pause");
    return 0;
}