'''
Pandas is 
    fast
    powerful
    flexible
    and easy to use open source data analysis and manipulation tool built on top of python programming language.
1) Pandas series
2) Dataframe
'''

import pandas as pd
import numpy as np

print()

'''
series
'''

country=["India", "Pakistan", "Nepal", "USA", "Sri Lanka"]
s1=pd.Series(country)
print(s1)
print()
runs=[14,23,44,23,53,57]
s2=pd.Series(runs)
print(s2)
print()
marks=[44,56,43,20,80]
subjects=['Maths', 'English', 'Science', 'Hindi', 'Python']
s3=pd.Series(subjects, index=marks, name='Nark')
print(s3)
print()

'''
series from dictionary
'''

marks_as_dict={
    'Maths':56,
    'English':67,
    'Hindi':89,
    'Python':90
}
marks_as_Series=pd.Series(marks_as_dict, name='Jahannoom')
print(marks_as_Series)
print(type(marks_as_Series))
print()

# inbuilt function of series
print(marks_as_Series.size)
print()
print(marks_as_Series.dtype)
print()
print(marks_as_Series.name)
print()
print(marks_as_Series.index)
print()

'''
Series using read.csv
'''

data=pd.read_csv(r'C:\Programming\Random-code-problems\Python\Graphics\customers.csv').iloc[:, 0]
print(data)
print()

'''
SERIES METHODS / DATAFRAME
'''

data2=pd.read_csv(r'C:\Programming\Random-code-problems\Python\Graphics\bollywood.csv')
s4=data2.squeeze('columns')
print(s4)
print(s4.value_counts())
print()

data2=pd.read_csv(r'C:\Programming\Random-code-problems\Python\Graphics\bollywood.csv')
s4=data2.squeeze('columns')
print(s4)
print(s4.count())
print()

'''
describe
'''

print(data2.describe())
print()

'''
BINARY OPERATIONS ON DATAFRAME
    editing the series
'''
print(marks_as_Series)
marks_as_Series[0]=100
print(marks_as_Series)
print()

# if index is out_of_bounds
marks_as_Series['Social']=64    # it creates the index if not present
print(marks_as_Series)
print()

runs=[34, 2, 54, 6, 54, 78, 67]
runs_series=pd.Series(runs)
print(runs_series)
print()

# slicing

runs_series[2:4]=[11,11]
print(runs_series)
print()

'''
Important series methods:
    - agg
    - astype
    - between
    - fillna [imp]
    - dropna [imp]
    - filter
    - iloc [imp]
    - isnull [imp]
    - drop_duplicates [imp]
'''

print(data2.value_counts().head().plot())