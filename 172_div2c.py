import math
import os
import sys
from math import sqrt, cos, pi, sin, tan, atan
w, h, a = map(float, raw_input().split())
if a > 90: a = 180 - a
if a == 90:
	print(min(w,h)**2)
	exit(0)
if a == 0:
	print(w * h)
	exit(0)
a = pi/180 * a
h1 = w/2*sin(a)+h/2*cos(a) - h/2
h2 = w/2*cos(a)+h/2*sin(a) - w/2
s1 = (h1)**2/sin(2*a)
s2 = (h2)**2/sin(2*a)
if (h1 < 0 or h2 < 0):
	print(min(w, h)**2/sin(a))
else:
	print(w*h-2*(s1 + s2))