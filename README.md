# aamptool-vs
A modified (and corrected) verison of aampTool that compiles in Visual Studio 2017. See the original project [BotW-aampTool](https://github.com/Zer0XoL/BotW-aampTool) for more information.

## What was corrected?
A huge *no-no* I found that limited my ability to use the program in any working directory. Essentially, the original `aampTool` was finding the containing directory's path by subtracting a fixed amount of characters from the executable's path in order to determine the location of `hashed_names.txt`. On Unix-like systems, this may be perfectly fine, but it may be possible that Windows environments report this path differently. I suspect it was either seeing a DOS-friendly 8-character name, its own name with `.exe` appended, or an unknown combination of both. I didn't bother to determine which it was.

Enjoy a Visual Studio-friendly version of this project!
