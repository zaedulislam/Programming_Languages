import os
     
# Get the current working directory (CWD)
cwd = os.getcwd()
     
# Print the current working directory (CWD)
print("Current working directory:", cwd)

path = cwd + '/' + 'archery'

# Change the directory
# os.chdir(path)

files = os.listdir(path)

print(path)


for index, file in enumerate(files):
    # print(index)
    # print(file)
    os.rename(os.path.join(path, file), os.path.join(path, ''.join([str(index), '.mp4'])))
