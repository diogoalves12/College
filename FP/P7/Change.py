def change(money):
    coins = {2.0: 0, 1.0: 0, 0.50: 0, 0.2: 0, 0.1: 0, 0.05: 0, 0.02: 0, 0.01: 0.0}

    for coin in coins.keys():
        while money >= coin:
            num_coins = money // coin 
            coins[coin] += round(num_coins,2)
            money -= coin * num_coins
        

    return coins

print(change(7.71))


def change(money):
    coins = [2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01] 
    d = {2:0, 1:0, 0.5:0, 0.2:0, 0.1:0, 0.05:0, 0.02:0, 0.01:0}
    for coin in coins:
        while money >= coin:
            money = round(money - coin,2)
            d[coin] += 1
    return d