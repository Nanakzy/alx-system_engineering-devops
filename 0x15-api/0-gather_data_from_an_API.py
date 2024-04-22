#!/usr/bin/python3
import requests
import sys

def get_employee_info(employee_id):
    base_url = 'https://jsonplaceholder.typicode.com'
    employee_url = f'{base_url}/users/{employee_id}'
    todo_url = f'{base_url}/todos?userId={employee_id}'

    try:
        employee_response = requests.get(employee_url)
        todo_response = requests.get(todo_url)

        employee_data = employee_response.json()
        todo_data = todo_response.json()

        employee_name = employee_data['name']
        total_tasks = len(todo_data)
        completed_tasks = [task['title'] for task in todo_data if task['completed']]

        print(f"Employee {employee_name} is done with tasks({len(completed_tasks)}/{total_tasks}):")
        for task_title in completed_tasks:
            print(f"\t{task_title}")

    except requests.exceptions.RequestException as e:
        print(f"Error: {e}")
        sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python3 script.py <employee_id>")
        sys.exit(1)

    employee_id = sys.argv[1]
    get_employee_info(employee_id)
