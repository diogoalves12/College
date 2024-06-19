def digits_average(number):
    while True:
        if number // 10 == 0:
            return int(number)
        new_number = 0
        while True:
            if number // 10 == 0:
                break
            last_digit = number % 10
            number = number // 10
            second_last_digit = number % 10
            average = (last_digit + second_last_digit) / 2
            if average % 1 != 0:
                average //= 1
                average += 1
            new_number *= 10
            new_number += average
        number = new_number



    
