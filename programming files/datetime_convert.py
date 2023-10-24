from datetime import datetime

# John bug space
date_str = "20 22-03-17 10:45:30"

#switched data format 
date_obj = datetime.strptime(date_str, '%y-%m-%d %H:%M:%S')
# Format the date
formatted_date = date_obj.strftime('%y/%m/%d %H:%M:%S')

print(formatted_date)
