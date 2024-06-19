def  find_character_indexes(astring, achar):
    a = []
    index = -1
    for char in astring:
        index += 1
        if char == achar:
            a.append(index)
    return a 
            
print(find_character_indexes("Five funny features feel fairly finished for forum fodder, foolish followers falsely fancy, for failing further focus fueling full foresight, fellow fiction fanciers frankly forget fundamental facts framing fruits from frenzied freelancing, for first fragments flowing from frantic freshman fingers frequently fall flat, forming forced, flawed fakeries feigning fluency, faded facsimiles fractionally fitting for fatuous Facebook flapdoodle, familiar formulaic fragments famously fouling friends' feeds; fine, for furthermore, fascinatingly, first forays facing far-flung fringe frontiers, finding faith's fortitude ferociously fighting formidable foes—fear, frustration, flaky functioning, foot fungus—forge foundations for future feats, figurative furniture for fortune's foyer, faintly favoring fantastic fairytale fates, fervently foremost finally finishing forever.", "f"))