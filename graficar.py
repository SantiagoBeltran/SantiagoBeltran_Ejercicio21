import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ marcha.cpp -o marcha.x")
os.system("./marcha.x > marcha.dat")

data = np.loadtxt("marcha.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("datos.png")