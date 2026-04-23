import pandas as pd
import numpy as np
print()
student_data=[
    [100, 80, 10],
    [90, 70, 7],
    [120, 100, 14],
    [80, 50, 3]
]

df1=pd.DataFrame(student_data, columns=['iq', 'marks', 'package'])
print(df1)
print()

student_dict={
    'iq':[100, 90, 120, 80],
    'marks':[80, 70, 100, 50],
    'package':[10, 7, 14, 3]
}

