def fight(heroes, villain):
        for hero in heroes:
            if hero["category"] == villain["category"]:
                if hero["health"] >= villain["health"]:
                    hero["score"] += 1  
                    return f"{hero['name']} defeated the villain and now has a score of {hero['score']}"
                elif villain["health"] > hero["health"]:
                    villain["health"] -= (hero["health"] / 2)
        if villain["health"] > 0:
            return f"{villain['name']} prevailed with {villain['health']}HP left"        


        

a = [{'name': 'Genos', 'health': 3000, 'category': 'S', 'score': 0}, {'name': 'Blizzard of Hell', 'health': 1000, 'category': 'B', 'score': 0}, {'name': 'Saitama', 'health': 9001, 'category': 'C', 'score': 0}, {'name': 'King', 'health': 2000, 'category': 'S', 'score': 1}] 
b = {'name': 'Hero Killer', 'health': 4000, 'category': 'S'}
print(fight(a,b))




