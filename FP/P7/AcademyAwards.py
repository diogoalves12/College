def academy_awards(alist):
    awards_count = {}
    for category,movie in alist:
        if movie in awards_count:
            awards_count[movie] += 1
        else: 
            awards_count[movie] = 1
    return awards_count

result = academy_awards([
    ("Best Picture", "Moonlight"),
    ("Best Director", "La La Land"),
    ("Best Actor", "Manchester by the Sea"),
    ("Best Actress", "La La Land"),
    ("Best Supporting Actor", "Moonlight"),
    ("Best Supporting Actress", "Fences"),
    ("Best Original Screenplay", "Manchester by the Sea"),
    ("Best Original Score", "La La Land")
])

print(result)
