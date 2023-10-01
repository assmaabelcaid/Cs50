# TODO

from cs50 import get_float

while True:
    centesimi = get_float("restooo: ")
    if centesimi > 0:
        break

centesimi = round(centesimi*100)

count = 0

while centesimi >= 25:
    centesimi = centesimi - 25
    count += 1

while centesimi >= 10:
    centesimi = centesimi - 10
    count += 1

while centesimi >= 5:
    centesimi = centesimi - 5
    count += 1

while centesimi >= 1:
    centesimi = centesimi - 1
    count += 1

print("sordi; ", count)