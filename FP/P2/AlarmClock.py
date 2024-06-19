hour = int(input())
minutes = int(input())

alarm_h = (hour + 6) % 24
alarm_m = (minutes + 51) % 60 



if minutes + 51 >= 60:
    alarm_h = (alarm_h + 1) % 24

print(f"{alarm_h:02}:{alarm_m:02}")