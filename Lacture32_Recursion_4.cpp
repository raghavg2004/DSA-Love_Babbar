#include<iostream>
using namespace std;

void ReachHome(int source, int destination)
{
    cout << "Source: " << source << " to Destination: " << destination << endl; // Printing the source and destination Steps
    // Base Case
    if(source == destination){
        cout << "Reached Home" << endl;
        return; //nothing to print
    }
    source++; // Recursive Case
    ReachHome(source, destination); // Recursive Case
}

int main()
{
    int destination = 10;
    int source = 1;

    cout<<endl;
    ReachHome(source, destination);

    return 0;
}