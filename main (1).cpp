#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int P, N, R, dayCount = 0; /* These are the non-negative integer variables. 
                                  P represents the total number of infected people we are trying to surpass, 
                                  N represents the number of people infected within day 0(the first day), 
                                  R is supposed to represent the number of people that are going to be 
                                  infected the next day,
                                  and the dayCount variable represents the days. */ 
    
    cin >> P >> N >> R; // This is where we input the values of P, N, and R.

    int total = N; /* This is a variable that we're going to use to store the total number of infected people. 
                      The reason why we didn't declare this with the rest of the variables at the start is that C++ checks code from the first line to the bottom, 
                      meaning we would already be setting the total variable's value to N before we could input the value of N ourselves. */
    
    while (total <= P) { /* This constantly updates the values, checking whether the total number of infected is less than or equal to the value of P (the total number of infected people we are trying to surpass), 
                            where it increases the dayCount variable value by 1 each time it checks, sets the value of N to take its previous initial input value and multiplies it by R(the number of people that are going to get infected the next day). 
                            Then, it adds to the value of the total variable to the current value of N.
                            This only stops when the total variable has a value greater than P. */
        dayCount += 1;
        N = N * R;
        total += N;
    
    }

    if (total > P) { // This then checks if the total variable value is greater than P; it will then output the value of the dayCount variable, showing you which day the total variable surpasses P.

        cout << dayCount;
        
    }
    
    return 0;
    
}
