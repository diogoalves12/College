hh1 = int(input())
mm1 = int(input())
delta = int(input())
mm1 = mm1 + delta


if delta % 60 == 0 :
    hh1 = hh1 + delta//60
    mm1 = mm1 - delta
    if hh1 > 23:
        hh1 -= 24
        print(f"{hh1:02d}:{mm1:02d}")
    else:
        print(f"{hh1:02d}:{mm1:02d}")
elif mm1 >= 60:
    mm1 -= 60
    hh1 += 1
    if hh1 > 23:
        hh1 -= 24
        print(f"{hh1:02d}:{mm1:02d}")
    else:
        print(f"{hh1:02d}:{mm1:02d}")
else:
    print(f"{hh1:02d}:{mm1:02d}")

