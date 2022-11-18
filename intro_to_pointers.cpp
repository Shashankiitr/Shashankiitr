#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int*p = &i;
    cout << p << endl;
    // p ko print karne sae memory adress print hota hae
    cout << sizeof(p) << endl;
    // genrally size of a pointer is 8
    cout << i << endl;
    cout << *p << endl;
    // *p ko print karne sae us address mae jo value stored hae vo print hote hae
    i++;
    cout << i << endl;
    cout << *p << endl;
    cout << p << endl;
    
    int a = i;
    a++;
    cout << i << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &a << endl;
    *p = 23 ;
    cout << i << endl;
    (*p)++;
    cout << *p << endl;
    // *P and i are both same thing just their way of reaching address is different 
    // if we make a change in *p it will reflect in i also 
    
    
    
    
}
