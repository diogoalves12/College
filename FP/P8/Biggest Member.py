def biggest_member(atuple):
    if isinstance(atuple, int):
        return ()
    else:
        largest_subtuple = max(tuple(map(biggest_member, atuple)), key=len)
        return max((atuple, largest_subtuple), key=len)




