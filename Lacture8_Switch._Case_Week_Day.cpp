#include<iostream>
using namespace std;

int main()
{
    int d;
    cout<<"Enter a day of the week (1-7):"<<endl; 
    cin>>d;
    
    switch(d)
    {
        case 1:
            cout<<"Monday"<<endl; 
            break;
        case 2:
            cout<<"Tuesday"<<endl; 
            break;
        case 3:
            cout<<"Wednesday"<<endl;    
            break;
        case 4:
            cout<<"Thursday"<<endl; 
            break;
        case 5: 
            cout<<"Friday"<<endl;   
            break;  
        case 6:
            cout<<"Saturday"<<endl;
            break;  
        case 7:
            cout<<"Sunday"<<endl;   
            break;
        default:    
            cout<<"Invalid day"<<endl;  
            break;
    }
    cout<<"comp";
    return 0;
}