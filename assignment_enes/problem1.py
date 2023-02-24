def calculate_salary(job_code, hours, sales):
    if job_code == 1:
        return 1000
    elif job_code == 2:
        if hours <= 40:
            return 400
        else:
            hours_remaining = hours - 40
            return 400 + 15 * hours_remaining
    elif job_code == 3:
        return 300 + ((5.7 * sales) / 100)
    else:
        return -1

def main():
    job_code = 4
    hours = 30
    sales = 100
    value = calculate_salary(job_code, hours, sales)

    if value != -1:
        print(f"calculate_salary({job_code}, {hours}, {sales}) -> Weekly Salary: {value}")
    else:
        print(f"calculate_salary({job_code}, {hours}, {sales}) -> Weekly Salary: Invalid job code")

if __name__ == '__main__':
    main()
