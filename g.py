#!/usr/bin/python3
import xlrd
import numpy as np 
import matplotlib.pyplot as plt 
file_location = "/home/cl118/desktop/graph.xlsx"
workbook = xlrd.open_workbook(file_location)
first_sheet = workbook.sheet_by_index(0)
x = [first_sheet.cell_value(i,0) for i in range(first_sheet.nrows)]
y = [first_sheet.cell_value(i,1) for i in range(first_sheet.nrows)]
plt.xlabel('v')
plt.ylabel('ph')
plt.title('vol vs ph curve')
plt.ylim(0,15)
plt.xlim(0,30)
plt.plot(x,y)
plt.show()