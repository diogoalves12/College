def sort_by_value(dict):
    sorted_hex_numbers = sorted(dict.items(), key=lambda item:item[1])
    return list(sorted_hex_numbers)