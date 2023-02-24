#include <iostream>
using namespace std;


double calculate_salary(int job_code,int hours,int sales)
{
    if(job_code == 1)
    {
        return 1000;
    }
    if (job_code == 2)
    {
        if (hours <= 40)
        {
            return 400;
        }
        int hours_remaining = hours - 40;
        return 400 + 15 * hours_remaining;
    }
    if (job_code == 3)
    {
        return 300 + ((5.7 * sales) / 100);
    }
    else
    {
        return -1;
    }
}

int main()
{
    int job_code,hours,sales;
    job_code=2;hours=0;sales=0;
    double value = calculate_salary(job_code,hours,sales);
    if (value != -1)
    {
        cout<<"calculate_salary("<<job_code<<","<<hours<<","<<sales<<") -> Weekly Salary: "<<value;
    }
    else
    {
        cout<<"calculate_salary("<<job_code<<","<<hours<<","<<sales<<"0) -> Weekly Salary: "<<"Invalid job code";
    }
}