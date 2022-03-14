
import os
     
# Get the current working directory (CWD)
cwd = os.getcwd()
     
# Print the current working directory (CWD)
print("Current working directory:", cwd)

rootPath = cwd + '/' + 'dataset'

# Change the directory
# os.chdir(path)

folders = os.listdir(rootPath)

for folder in folders:
    
    path = rootPath + '/' + folder    
    files = os.listdir(path)
    action = folder.capitalize()

    
    for index, file in enumerate(files):
        oldFileName = os.path.join(path, file)
        newFileName = path + '/' + action + ' ' + str(index + 1) + '.mp4'

        os.rename(oldFileName, newFileName)
        # os.rename(os.path.join(path, file), os.path.join(path, 'Jack_'.join([str(index), '.mp4'])))





