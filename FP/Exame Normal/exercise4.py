def list_paths(dirtree):
# base case
if type(dirtree) == str:
return dirtree
res = []
for element in dirtree[1]:
# recursive call with element
aux = list_paths(element)
# element is file
if type(aux) == str:
# concat current dir with file name
res.append(dirtree[0] + "/" + aux)
# is directory
else:
# concat current dir with path inside the directory
for item in aux:
res.append(dirtree[0] + "/" + item)
return res 