#include<bits/stdc++.h>
using namespace std;
 
double CgpaCalc(double marks[], int n)
{
    double grade[n];
    double cgpa, sum = 0;
 
    for(int i = 0; i < n; i++) 
    {
       grade[i] = (marks[i] / 10);
    }
 
    for(int i = 0; i < n; i++) 
    {
       sum += grade[i];
    }
 
    cgpa = sum / n;
 
    return cgpa;
}
 
int main()
{
    int n;
    cout << "Enter the number of subjects: ";
    cin >> n;

    double marks[n];
    cout << "Enter the marks for " << n << " subjects: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> marks[i];
    }
 
    double cgpa = CgpaCalc(marks, n);
         
    cout << "CGPA = " << fixed << setprecision(1) << cgpa << endl;
    cout << "CGPA Percentage = " << fixed << setprecision(2) << cgpa * 9.5 << endl;
}
