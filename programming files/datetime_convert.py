#Nina added a comment here
from datetime import datetime

# John bug space
date_str = "20 22-03-17 10:45:30"
date_obj = datetime.strptime(date_str, '%Y-%m-%d %H:%M:%S')
# Format the date
formatted_date = date_obj.strftime('%m/%d/%Y %H:%M:%S')

print(formatted_date)
