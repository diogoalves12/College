def map(pos,steps):
    x,y = pos 
    comandos = steps.split("-")
    for passos in comandos:
        if passos == "up":
            y += 1
        elif passos == "down":
            y -= 1
        elif passos == "right":
            x += 1
        elif passos == "left" :
            x -= 1
    return x,y