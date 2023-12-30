# class SET():
#     def __init__(self, lst) :
#         self.set = set(lst)

#     def isMember(self,element):
#         if element in self.set:
#             return True
#         return False
    
#     def powerSet(self):
#         power_set = [[]]
#         for i in self.set:
#             for j in power_set:
#                 power_set = power_set + [list(j) + [i]]
#         return power_set

#     def isSubsetOf(self, otherset):
#         for ele in self.set :
#             if ele not in otherset.set:
#                 return False
#         return True

#     def setUnion(self, otherset):
#         unionSet = set()
#         for i in self.set:
#             unionSet.add(i)
#         for j in otherset.set:
#             unionSet.add(j)
#         return unionSet
    
#     def setIntersection(self, otherset):
#         intersect = set()
#         for i in self.set:
#             if i in otherset.set:
#                 intersect.add(i)
#         for j in otherset.set:
#             if j in self.set:
#                 intersect.add(j)
#         return intersect
    
#     def complement(self):
#         lst = []
#         n = int(input("Enter number of elements : "))
        
#         for i in range(0, n):
#             ele = int(input())
#             lst.append(ele) 

#         compl = set()
#         for i in lst:
#             if i not in self.set:
#                 compl.add(i)
#         return compl
    
#     def setDifference(self, otherset):
#         diff = self.set.copy()
#         intersection = self.setIntersection(otherset)
#         for ele in intersection:
#             diff.discard(ele)
#         return diff
    
#     def symmetricDifference(self, otherset):
#         union = otherset.setUnion(self)
#         intersection = otherset.setIntersection(self)
#         for i in intersection:
#             union.discard(i)
#         return union
    
#     def cartesian_product(self, set2):
#         cartesian_product = []
#         for i in self.set:
#             for j in set2.set:
#                 cartesian_product.append((i,j))
#         return cartesian_product
    
#     def print(self):
#         print(self.set)


# setA = SET([1,2,3,4])
# setB = SET([3,4,5,6])
# Univ = SET([1,2,3,4,5,6,7,8,9,10])
# print("setA = ")
# setA.print()
# print("setB = ")
# setB.print()
# print("Checking if 11 is member of setA and setB")
# print("setA",setA.isMember(11))
# print("setB",setB.isMember(11))

# print("Power Set of setA:")
# print(setA.powerSet())

# print("Cheking if setA is subset of setB : ")
# print(setA.isSubsetOf(setB))

# print("Union of setA and setB : ")
# print(setA.setUnion(setB))

# print("Intersection of setA and setB : ")
# print(setA.setIntersection(setB))

# print("Complement of setA :")
# print(setA.complement())

# print("Set Differnece of setA and setB : ")
# print(setA.setDifference(setB))

# print("Symmentric Difference of setA and setB : ")
# print(setA.symmetricDifference(setB))

# print("Cartesian Product of setA and setB : ")
# print(setA.cartesian_product(setB))




# ------------------------------------------------------



# class RELATION():
#     def __init__(self, rel):
#         self.rel = rel
#         self.adjMat = self.makeAdjMat(rel)

#     def makeAdjMat(self, rel):
#         relation = self.rel
#         matrix = []
#         for i in range(len(a)):
#             row = []
#             for j in range(len(a)):
#                 row.append(0)
#             matrix.append(row)
#         for i in relation:
#             row = a.index(i[0])
#             col = a.index(i[1])
#             matrix[row][col] = 1
#         return matrix

#     def isReflexive(self):
#         for i in range(len(self.adjMat)):
#             for j in range(len(self.adjMat)):
#                 if i == j and self.adjMat[i][j] != 1:
#                     return False
#         return True

#     def isSymmetric(self):
#         for i in range(len(self.adjMat)):
#             for j in range(len(self.adjMat)):
#                 if self.adjMat[i][j] == 1 and self.adjMat[j][i] != 1:
#                     return False
#         return True

#     def isTransitive(self):
#         for i in range(len(self.adjMat)):
#             for j in range(len(self.adjMat)):
#                 for k in range(len(self.adjMat)):
#                     if self.adjMat[i][j] == 1 and self.adjMat[j][k] == 1:
#                         if self.adjMat[i][k] != 1:
#                             return False
#         return True

#     def isAntisymmetric(self):
#         for i in range(len(self.adjMat)):
#             for j in range(len(self.adjMat)):
#                 if self.adjMat[i][j] == 1 and self.adjMat[j][i] == 1 and i != j:
#                     return False
#         return True

#     def isEquivalence(self):
#         return self.isReflexive() and self.isSymmetric() and self.isTransitive()

#     def isPartialOrder(self):
#         return self.isReflexive() and self.isAntisymmetric() and self.isTransitive()


# a = [1, 2, 3]
# rel = [[1, 1], [2, 2], [3, 3]]
# relation = RELATION(rel)

# print("Is Reflexive:", relation.isReflexive())
# print("Is Symmetric:", relation.isSymmetric())
# print("Is Transitive:", relation.isTransitive())
# print("Is Antisymmetric:", relation.isAntisymmetric())

# if relation.isEquivalence():
#     print("It is an Equivalence Relation.")
# elif relation.isPartialOrder():
#     print("It is a Partial Order Relation.")
# else:
#     print("It is None of Equivalence or Partial Order Relation.")





#------------------------------------------------------------------------




# from itertools import permutations, combinations_with_replacement,product

# arr = [1,2,3]

# # Permutations without repetition
# perms_without_repetition = list(permutations(arr))
# print("Permutations without repetition:")
# for perm in perms_without_repetition:
#     print(perm)
# print()

# # Permutations with repetition
# perms_with_repetition = list(product(arr, repeat=len(arr)))

# print("Permutations with repetition:")
# for perm in perms_with_repetition:
#     print(perm)
   
# print()







#---------------------------------------------------





# def solve_equation(n, C):
#     solutions = []

#     def generate_combinations(current_sum, current_combination):
#         if current_sum == C and len(current_combination) == n:
#             solutions.append(current_combination)
#             return
#         elif current_sum > C or len(current_combination) > n:
#             return

#         for i in range(C + 1):
#             generate_combinations(current_sum + i, current_combination + [i])

#     generate_combinations(0, [])

#     return solutions

# # Example usage
# n = 4
# C = 5

# solutions = solve_equation(n, C)
# print(f"Solutions for n={n}, C={C}: {solutions}")





#----------------------------------------------


# def evaluate_polynomial(coefficients, x):
#     result = 0
#     power = len(coefficients) - 1
#     for coefficient in coefficients:
#         result += coefficient * (x ** power)
#         power -= 1
#     return result

# # Example usage
# polynomial = [4, 2, 9]  
# x = int(input("Enter value of n : "))  # value of x
# result = evaluate_polynomial(polynomial, x)
# print(f"The result of evaluating the polynomial at x = {x} is: {result}")




#-----------------------------------------------------------------


# def is_complete_graph(adjacency_matrix):
#     num_vertices = len(adjacency_matrix)
    
#     # Check if each pair of vertices is connected
#     for i in range(num_vertices):
#         for j in range(num_vertices):
#             if i==j:
#                 if adjacency_matrix[i][j]!=0:
#                     return False
                
#             elif i != j and not adjacency_matrix[i][j]:
#                 return False
    
#     return True

# # Example usage
# graph = [
#     [0, 1, 1, 1],  # Vertex 1 is connected to vertices 2, 3, and 4
#     [1, 0, 1, 1],  # Vertex 2 is connected to vertices 1, 3, and 4
#     [1, 1, 0, 1],  # Vertex 3 is connected to vertices 1, 2, and 4
#     [1, 1, 1, 0]   # Vertex 4 is connected to vertices 1, 2, and 3
# ]

# result = is_complete_graph(graph)
# if result:
#     print("The graph is a complete graph.")
# else:
#     print("The graph is not a complete graph.")


#--------------------------------------------------------------------





# def is_complete_graph(adjacency_list):
#     num_vertices = len(adjacency_list)
    
#     # Check if each pair of vertices is connected
#     for i in range(1, num_vertices + 1):
#         for j in range(1, num_vertices + 1):
#             if i != j and j not in adjacency_list[i]:
#                 return False
    
#     return True

# # Example usage
# graph = {
#     1: [2, 3, 4],  # Vertex 1 is connected to vertices 2, 3, and 4
#     2: [1, 3, 4],  # Vertex 2 is connected to vertices 1, 3, and 4
#     3: [1, 2, 4],  # Vertex 3 is connected to vertices 1, 2, and 4
#     4: [1, 2, 3]   # Vertex 4 is connected to vertices 1, 2, and 3
# }

# result = is_complete_graph(graph)
# if result:
#     print("The graph is a complete graph.")
# else:
#     print("The graph is not a complete graph.")





#-------------------------------------------------------------




# def compute_degrees(graph):
#     degrees = {}
    
#     # Initialize degrees dictionary with all vertices
#     for vertex in graph:
#         degrees[vertex] = {'in_degree': 0, 'out_degree': 0}
    
#     # Compute in-degree and out-degree for each vertex
#     for vertex in graph:
#         for adjacent_vertex in graph[vertex]:
#             # Increment out-degree of the current vertex
#             degrees[vertex]['out_degree'] += 1
#             # Increment in-degree of the adjacent vertex
#             degrees[adjacent_vertex]['in_degree'] += 1
    
#     return degrees

# # Example usage
# graph = {
#     'A': ['B', 'C', 'D'],  # Vertex A has outgoing edges to B, C, D
#     'B': ['C', 'D'],       # Vertex B has outgoing edges to C, D
#     'C': ['D'],            # Vertex C has an outgoing edge to D
#     'D': []                # Vertex D has no outgoing edges
# }

# degrees = compute_degrees(graph)
# for vertex in degrees:
#     in_degree = degrees[vertex]['in_degree']
#     out_degree = degrees[vertex]['out_degree']
#     print(f"Vertex {vertex}: In-Degree = {in_degree}, Out-Degree = {out_degree}")




# -----------------------------------------------------------------------------------



# class SET():
#     def _init_(self, lst):
#         self.set = set(lst)

#     def isMember(self, element):
#         if element in self.set:
#             return True
#         return False
    
#     def powerSet(self):
#         power_set = [[]]
#         for i in self.set:
#             for j in power_set:
#                 power_set = power_set + [list(j) + [i]]
#         return power_set

#     def isSubsetOf(self, otherset):
#         for ele in self.set:
#             if ele not in otherset.set:
#                 return False
#         return True

#     def setUnion(self, otherset):
#         unionSet = set()
#         for i in self.set:
#             unionSet.add(i)
#         for j in otherset.set:
#             unionSet.add(j)
#         return unionSet
    
#     def setIntersection(self, otherset):
#         intersect = set()
#         for i in self.set:
#             if i in otherset.set:
#                 intersect.add(i)
#         return intersect
    
#     def complement(self):
#         compl = set()
#         for i in range(1, 11):  # Assuming the universal set is [1, 2, 3, ..., 10]
#             if i not in self.set:
#                 compl.add(i)
#         return compl
    
#     def setDifference(self, otherset):
#         diff = self.set.copy()
#         intersection = self.setIntersection(otherset)
#         for ele in intersection:
#             diff.discard(ele)
#         return diff
    
#     def symmetricDifference(self, otherset):
#         union = otherset.setUnion(self)
#         intersection = self.setIntersection(otherset)
#         for i in intersection:
#             union.discard(i)
#         return union
    
#     def cartesian_product(self, set2):
#         cartesian_product = []
#         for i in self.set:
#             for j in set2.set:
#                 cartesian_product.append((i, j))
#         return cartesian_product
    
#     def print(self):
#         print(self.set)


# setA = SET([1,2,3,4])
# setB = SET([3,4,5,6])
# Univ = SET([1,2,3,4,5,6,7,8,9,10])
# print("setA = ")
# setA.print()
# print("setB = ")
# setB.print()
# print("Checking if 11 is a member of setA and setB")
# print("setA", setA.isMember(11))
# print("setB", setB.isMember(11))

# print("Power Set of setA:")
# print(setA.powerSet())

# print("Checking if setA is a subset of setB : ")
# print(setA.isSubsetOf(setB))

# print("Union of setA and setB : ")
# print(setA.setUnion(setB))

# print("Intersection of setA and setB : ")
# print(setA.setIntersection(setB))

# print("Complement of setA:")
# print(setA.complement())

# print("Set Difference of setA and setB : ")
# print(setA.setDifference(setB))

# print("Symmetric Difference of setA and setB : ")
# print(setA.symmetricDifference(setB))

# print("Cartesian Product of setA and setB : ")
# print(setA.cartesian_product(setB))









