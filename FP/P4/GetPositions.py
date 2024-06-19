def get_positions(sentence,word_list):
    words = sentence.split()
    r = []
    for i in words:
        try: 
            r.append(str(word_list.index(i)))
        except ValueError: return ""
    return " ".join(r)