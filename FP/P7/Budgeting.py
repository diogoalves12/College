def budgeting(budget, products, wishlist):
    custo_total = 0 

    sorted_products = sorted(products.items(), key=lambda x: x[1])
    for product,price in sorted_products:
        if product in wishlist: 
            cost = price * wishlist[product]
            if custo_total + cost <= budget:
                custo_total += cost
            else:
                remaining_budget = budget - custo_total
                quantidade_comprada = remaining_budget// price
                wishlist[product] = quantidade_comprada
    
    return wishlist

print(budgeting(1000, {'ps4': 350, 'smartphone': 400, 'jacket': 40, 'pc': 600, 'glasses': 75}, {'ps4': 1, 'smartphone': 1, 'pc': 1}))