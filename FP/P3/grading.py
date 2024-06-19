LE = int(input()) 
RE = int(input())
PE = int(input())
TE = int(input())

grade = (LE + RE + 13 * PE + 5 * TE) / 100
grade = int(grade//1 + (grade%1>=0.5))

if LE > 100  or RE > 100 or PE > 100 or TE > 100:
    print("Input error")
elif LE <0 or RE <0 or PE <0 or TE <0:
    print("input error")
elif PE < 40 or TE < 40 :
    print("RFF")
else:
    print(grade)