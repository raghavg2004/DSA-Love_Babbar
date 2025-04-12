// Count Ways To Reach The N-th Stairs
/*
Problem statement
You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
Each time, you can climb either one step or two steps.
You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.

Example :
N=3
We can climb one step at a time i.e. {(0, 1) ,(1, 2),(2,3)} or we can climb the first two-step and then one step i.e. {(0,2),(1, 3)} or we can climb first one step and then two step i.e. {(0,1), (1,3)}.*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;


int countDistinctWays(int nStairs) {
    //Base case
    if(nStairs < 0)
        return 0;
    if(nStairs == 0)
        return 1;

    int ans = countDistinctWays(nStairs -1) + countDistinctWays(nStairs - 2);

    return ans;
    
}

int main()
{
    int nStairs;
    cout << "Enter the number of stairs: ";
    cin >> nStairs;
    cout << "Number of distinct ways to reach the " << nStairs << "th stair is: " << countDistinctWays(nStairs) << endl;
    // Time Complexity: O(2^n) as we are using recursion and each function call is making two more function calls.
    // Space Complexity: O(n) as we are using recursion and the maximum depth of the recursion tree will be n.
    // This is a brute force approach. We can use dynamic programming to optimize this problem.
    // We can use memoization to store the results of the subproblems and avoid recomputing them.
    // We can also use tabulation to solve this problem iteratively.
    // The time complexity will be O(n) and the space complexity will be O(1) in that case.
    return 0;
}