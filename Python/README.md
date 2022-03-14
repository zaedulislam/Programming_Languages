# Python

Difference between `single dash` and `double dash` in `argparse`?
- Arguments are options if they begin with a hyphen delimiter (‘-’).
- If following the usual conventions, the single dash arguments only consist of a single char, thus, `-abc` is identical to `-a -b -c`. Parameter names with double-dash are treated as whole words, so `--abc` is only a single parameter named `abc`.

---

# Reference
- https://stackoverflow.com/questions/35603729/difference-between-single-dash-and-double-dash-in-argparse
- https://www.gnu.org/software/libc/manual/html_node/Argument-Syntax.html
- [Rename Files in Python](https://pynative.com/python-rename-file/#h-renaming-only-a-list-of-files-in-a-folder)
