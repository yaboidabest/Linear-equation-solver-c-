#include <iostream>
#include <vector>
using namespace std;

int main()
{
double x1,x2,y1,y2,m,b;
cout << "Enter point 1\n";
cin >> x1;
cin >> y1;
cout << "Enter point 2\n";
cin >> x2;
cin >> y2;
if(x1==x2 && x1!=x2) {
    cout << "undifined";
    return 0;
}
m=(y1-y2)/(x1-x2);
b = (y1-(x1*m));
cout << "y = " << m << "x + (" << b << ")";
return 0;
}