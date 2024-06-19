from math import sin

v = float(input())
angle = float(input())

R = v**2 * sin(2*angle) /9.81
print(round(R,2))