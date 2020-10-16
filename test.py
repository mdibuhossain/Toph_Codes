def counter(start, stop):
    x = start
    if start >= stop:
        return_string = "Counting down: "
        while x >= stop:
            return_string += str(x)
            if x > stop:
                return_string += ","
            x -= 1
    else:
        return_string = "Counting up: "
        while x <= stop:
            return_string += str(x)
            if x < stop:
                return_string += ","
            x += 1
    return return_string
print(counter(1, 10))
print(counter(2, 1))
