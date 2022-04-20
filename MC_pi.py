from random import uniform

N = int(input('Number of trials: '))
M = 0

for i in range(N):
  rand_x = uniform(0,1)
  rand_y = uniform(0,1)
  r = rand_x ** 2 + rand_y ** 2
  if r <= 1:
    M += 1

print(f'For {N} trials, estimated value of pi is {4.0*M/N}.')
