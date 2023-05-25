#include <iostream>
#include <string>

using namespace std;

int main()
{
    int A[10];    
    int i;
    for (i=0; i<=10; i++) A[i]=i; for (i=0; i<=10; i++) { A[10-i]=A[i]; A[i]=A[10-i];}
}
// 0 1 2 3 4 5 6 7 8 9 10 
// 10 9 8 7 6 5 4 3 2 1 0
// 