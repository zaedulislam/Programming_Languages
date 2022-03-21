# Python

##### Difference between `single dash` and `double dash` in `argparse`?
- Arguments are options if they begin with a hyphen delimiter (‘-’).
- If following the usual conventions, the single dash arguments only consist of a single char, thus, `-abc` is identical to `-a -b -c`. Parameter names with double-dash are treated as whole words, so `--abc` is only a single parameter named `abc`.

##### How to run multiple python scripts at once?
###### Method #1 - Using Bash Script
Create another folder named bash_script. In which, test.sh exist

Now, let's see its implementation,
```
#!/bin/bash 
for py_file in $(find ../python_files -name *.py) 
do 
    python $py_file 
done 
```

###### Method #2: Using Command Prompt
Now, let's see its implementation of how to run multiple files in python_files:
```
python ../python_files/a.py & python ../python_files/b.py & python ../python_files/c.py 
```


###### Method #3: Using Python File
With the help of `os` module, we can execute the script that can run our python files from another folder. First, We need to import the `os` module.
`
import os 
`
Inside `os` module, there is one method named `system()`. We will call our run script command an argument.
```
os.system('python ../python_files/a.py') 
```
Now, let's see its implementation:
```
import os   
os.system('python ../python_files/a.py') 
os.system('python ../python_files/b.py') 
os.system('python ../python_files/c.py') 
```

---

# Reference
- https://stackoverflow.com/questions/35603729/difference-between-single-dash-and-double-dash-in-argparse
- https://www.gnu.org/software/libc/manual/html_node/Argument-Syntax.html
- [Rename Files in Python](https://pynative.com/python-rename-file/#h-renaming-only-a-list-of-files-in-a-folder)
- https://www.quora.com/Can-you-run-multiple-python-scripts-at-once#:~:text=Yes%2C%20you%20can%20run%20multiple%20python%20scripts%20at%20once%20and,background%20with%20the%20%26%20shell%20operator.
