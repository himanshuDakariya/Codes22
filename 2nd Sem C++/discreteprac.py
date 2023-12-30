## MATHS PRACTICAL QUESTION:5##


# x=int(input("Enter the value of n: "))

# const=[4,2,9]
# var=[x**2,x,1]
# result=0
# for i in range(3):
#     result+=const[i]*var[i]


# print("f(x) = 4n^2 + 2n + 9:")
# print("f(",x,") =",result)


#-------------------------------------------#
#Reflexivity checker using Matrix notation #

# matrix=[]
# set=[1,2,3]
# relation=[(1,1),(2,2),(1,3),(3,3)]
# rows=cols=len(set)

# for i in range(rows):
#     row=[]
#     for j in range(cols):
#         row.append(0)
#     matrix.append(row)
# for i in relation:
#     pos1=set.index(i[0])
#     pos2=set.index(i[1])
#     matrix[pos1][pos2]=1

# print(matrix)

# ref=True
# for i in range(rows):
#     for j in range(cols):
#         if i==j:
#             if matrix[i][j]!=1:
#                 ref=False
#                 break
               
# if ref==True:
#     print("Reflexive")
# else:
#     print("Not-Reflexive")




