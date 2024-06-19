distance = int(input())
fuel_100 = float(input())
fuel_l = float(input())

cost = ( (distance/100) * fuel_100 ) * fuel_l 

print(round(cost,2))