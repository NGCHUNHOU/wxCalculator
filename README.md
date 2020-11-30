# [wxCalculator](https://github.com/NGCHUNHOU/wxCalculator)
![Calculator](https://github.com/NGCHUNHOU/wxCalculator/blob/main/sample.png)

A basic GUI application with wxWidgets framework supported


## File needed for compilation 
- wxwidgets.props (wxWidget solution properties sheet)
- modified cusConsole.vcxproj (vs project file)


## procedure 
1. open view -> other windows -> property manager, right click and select 'Add Existing Property Sheet' 
2. import wxwidgets.props into solution
3. to modify project properties, go to project -> unload project to unload project
4. click on project node to open properties sheet

5. change the include property sheet directories to your location
```
<ImportGroup Label="PropertySheets" Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <Import Project="$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition="exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label="LocalAppDataPlatform" />
    /** manually set wxWidget library path with Debug x86 mode here **/
    <Import Project="..\..\wxWidget\wxwidgets.props" />
  </ImportGroup>
  <ImportGroup Label="PropertySheets" Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <Import Project="$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition="exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label="LocalAppDataPlatform" />
    /** manually set wxWidget library path with Release x86 mode here **/
    <Import Project="..\..\wxWidget\wxwidgets.props" />
  </ImportGroup>
  <ImportGroup Label="PropertySheets" Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">
    <Import Project="$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition="exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label="LocalAppDataPlatform" />
    /** manually set wxWidget library path with Debug x64 mode here **/
    <Import Project="..\..\wxWidget\wxwidgets.props" />
  </ImportGroup>
  <ImportGroup Label="PropertySheets" Condition="'$(Configuration)|$(Platform)'=='Release|x64'">
    <Import Project="$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition="exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label="LocalAppDataPlatform" />
    /** manually set wxWidget library path with Release x64 mode here **/
    <Import Project="..\..\wxWidget\wxwidgets.props" />
```
6. the program should be compiled successfully after above steps done

## To do tasks
- [x] design graphic user interface
- [x] define and apply basic math operator to GUI
- [x] complete math functions
- [ ] fixing wrong number if no math operation is applied
