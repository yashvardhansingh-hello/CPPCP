'''Import Libraries'''
import mysql.connector
from mysql.connector import Error
import pandas as pd

# Create Server Connection
def create_server_connection(host_name, user_name, user_password):
    connection = None
    try:
        connection = mysql.connector.connect(host = host_name, user = user_name, passwd = user_password)
        print("MySQL connected succesfully")
    except Error as err:
        print(f"Error: '{err}'")
    return connection

connection = create_server_connection("localhost", "root", "Kraton+999")

# Use Database
def use_database(connection, db):
    cursor = connection.cursor()
    try:
        cursor.execute(f"use {db};")
        print("DataBase connected succesfully")
    except Error as err:
        print(f"Error: '{err}'")

use_database(connection, 'org')

# Execute Query
def execute_query(connection, query):
    cursor = connection.cursor()
    try:
        cursor.execute(query)
        connection.commit()
        print("Query Executed Succesfully")
    except Error as err:
        print(f"Error: '{err}'")


def read_query(connection, table):
    cursor = connection.cursor()
    result = None
    try:
        cursor.execute(f'select * from {table};')
        result = cursor.fetchall()
        return result

    except Error as err:
        print(f"Error: '{err}'")

'''
cmd = 1
while cmd == 1:
    query = f"insert into  title values ({int(input('id: '))}, '{input('title: ')}', '{input('datetiem: ')}');"
    execute_query(connection, query)
    cmd  = int(input("add another record(press 1 if yes, 2 for no): "))

'''
for j in ('title', 'bonus', 'worker'):

    res = read_query(connection, 'title')

    for i in res:
        print(res)