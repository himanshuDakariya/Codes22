# # import the library pulp as p

# import pulp as p

# # Create a LP Minimization problem 
# Lp_prob = p. LpProblem ('Problem', p.LpMinimize)

# # Create problem Variables

# x = p.LpVariable("x", lowBound=0)

# y = p.LpVariable("y", lowBound=0)

# # Create a variable x >= 0

# # Create a variable y >= 0

# # Objective Function

# Lp_prob += 3 * x + 5 * y

# # Constraints:

# Lp_prob += 2 * x +3* y >= 12

# Lp_prob += -x +y <= 3
# Lp_prob += x >= 4

# Lp_prob += y <= 3

# # Display the problem 
# print (Lp_prob)

# status =Lp_prob.solve()

# # Solver

# print (p. LpStatus [status])

# # The solution status

# # Printing the final solution 
# print (p.value(x), p.value(y), p.value (Lp_prob.objective))



# +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+



# # Import the pulp library
# import pulp as p

# # Create a LP Maximization problem
# Lp_prob = p.LpProblem('Problem', p.LpMaximize)

# # Create problem Variables
# x1 = p.LpVariable("x1", lowBound=0)
# x2 = p.LpVariable("x2", lowBound=0)
# x3 = p.LpVariable("x3", lowBound=0)
# x4 = p.LpVariable("x4", lowBound=0)

# # Objective Function
# Lp_prob += 20 * x1 + 12 * x2 + 40 * x3 + 25 * x4

# # Constraints
# Lp_prob += x1 + x2 + x3 + x4 <= 50
# Lp_prob += 3 * x1 + 2 * x2 + x3 <= 100
# Lp_prob += x2 + 2 * x3 + 3 * x4 <= 90

# # Display the problem
# print(Lp_prob)

# # Solve the problem
# status = Lp_prob.solve()

# # Get the solver status
# print(p.LpStatus[status])

# # Printing the final solution
# print("x1 =", p.value(x1))
# print("x2 =", p.value(x2))
# print("x3 =", p.value(x3))
# print("x4 =", p.value(x4))
# print("Maximized Z =", p.value(Lp_prob.objective))



# +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+


import numpy as np
import matplotlib.pyplot as plt

# Define the objective function coefficients
c = np.array([3, 2])

# Define the constraint coefficients
A = np.array([[2, 1], [1, 2]])
b = np.array([6, 4])

# Create a grid of x and y values for plotting
x = np.linspace(0, 4, 400)
y = np.linspace(0, 4, 400)
X, Y = np.meshgrid(x, y)

# Calculate Z (the objective function) for each point on the grid
Z = c[0]*X + c[1]*Y

# Plot the objective function Z
plt.figure(figsize=(8, 6))
plt.contour(X, Y, Z, levels=np.arange(0, Z.max()+1, 1), colors='b')
plt.xlabel('x')
plt.ylabel('y')

# Plot the constraint lines
plt.plot([0, 6], [3, 0], label='2x + y ≤ 6', color='r')
plt.plot([0, 2], [4, 0], label='x + 2y ≤ 4', color='g')

# Highlight the feasible region
plt.fill_between([0, 0.7, 2, 0], [3, 2.65, 0, 0], color='gray', alpha=0.5)

# Mark the corner points
plt.scatter([0, 2, 1], [4, 2, 0], color='red', marker='o')
plt.text(0, 4, 'A (0, 4)', fontsize=12, verticalalignment='bottom')
plt.text(2, 2, 'B (2, 2)', fontsize=12, verticalalignment='bottom')
plt.text(1, 0, 'C (1, 0)', fontsize=12, verticalalignment='top')

plt.xlim(0, 4)
plt.ylim(0, 4)
plt.legend()
plt.grid(True)
plt.title('Graphical Solution of Linear Programming Problem')
plt.show()

