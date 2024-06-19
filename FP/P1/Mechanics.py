import math
angle = int(input())*math.pi/180  # convert to radians
cos_angle = math.cos(angle)
sin_angle = math.sin(angle)


Horizontal = (18**2 * sin_angle * cos_angle)/5
print(round(Horizontal))

