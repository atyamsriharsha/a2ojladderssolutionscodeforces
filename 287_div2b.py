import math
r, x1, y1, x2, y2 = map(int, raw_input().split())
d = (x1 - x2)**2+(y1 - y2)**2
d = d**0.5
print int(math.ceil(d/(2.0*r)))