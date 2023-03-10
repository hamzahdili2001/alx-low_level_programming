## ar (Archiver)

The `ar` command is used to create, modify, and extract archives. Archives are collections of object files, which are the compiled code of a program, or other archives that are used to create libraries.

Archives are used to bundle multiple object files together into a single file, which can then be distributed and used by other programs. In Unix-like systems, static libraries are created using the `ar` command.

Static libraries are archives that contain a collection of object files and an index that maps each symbol to the corresponding object file. When a program is linked against a static library, the linker will include only the object files that are needed by the program. This can help reduce the size of the final executable.

### Usage

Here are some common options of the `ar` command and examples of how to use them:

- Create a new archive: `ar rcs libexample.a example.o`
  - This will create a new archive called `libexample.a` and add the object file `example.o` to it.
- Extract files from an archive: `ar x libexample.a`
  - This will extract all the files from the archive `libexample.a`.
- Replace or add files to an existing archive: `ar r libexample.a newexample.o`
  - This will replace the object file `example.o` in the archive `libexample.a` with the object file `newexample.o`.
- Add an index to the archive for faster symbol lookup: `ar s libexample.a`
  - This will add an index to the archive `libexample.a` for faster symbol lookup.
- Display a table of contents for the archive: `ar t libexample.a`
  - This will display a table of contents for the archive `libexample.a`.

## ranlib

The `ranlib` command is used to generate an index for an archive. This index is used to speed up the process of linking object files with a library. The index is stored in the archive and is used by the linker to quickly locate the object files that define symbols that are referenced by the program.

When you create an archive using the `ar` command, it does not automatically generate an index. If an index is not present, the linker must scan through every object file in the archive to locate the symbols it needs. This can be slow, especially for large archives.

### Usage

Here is an example of how to use the `ranlib` command:

- Generate an index for an archive: `ranlib libexample.a`
  - This will generate an index for the archive `libexample.a`.

## nm (Name List)

The `nm` command is used to display the symbol table of an object file, which shows the names of all the functions and variables in the file. This information can be used to debug programs and libraries, and to determine which functions and variables are exported by a library.

### Usage

Here is an example of how to use the `nm` command:

- Display the symbol table of an object file: `nm example.o`
  - This will display the symbol table of the object file `example.o`.

