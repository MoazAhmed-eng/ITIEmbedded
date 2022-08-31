import os

# detect the current working directory and print it  ITI\AVR_Drivers\HAL\DC_Motor
path = os.getcwd()
print ("The current working directory is %s" % path)
print("enter directory name")
path = input()
print("enter Driver name")
name = input()

try:
    os.mkdir(path)
except OSError:
    print ("Creation of the directory %s failed, directory name already exists" % path)
else:
    print ("Successfully created the directory %s " % path)

file_names = [".c" , ".h", "_cfg.c","_cfg.h", "_priv.h"]

for filename in file_names:
    filename = path +"\\"+ name + filename 
    open(filename,"x")
    for root, dir, file in os.walk("."):
        for filename in file:
            print(filename)

