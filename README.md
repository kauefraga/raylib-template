# Raylib Template

> 🦚 This is a configured visual studio template for the Raylib. Using c++.

### Features

- Use Unicode as character set.
- Output directory set to `$(SolutionDir)\bin\$(Platform)\$(Configuration)\`.
- Subsystem is `/subsystem:windows` and the entry point is `mainCRTStartup`.

Obs.: If you want to see the debugging console, change the subsystem back to console and clean the entry point.
You can find those things at *Properties > Linker > System or Advanced*.

## Getting started

### Requirements

- Visual Studio for C++ development.
- Install and integrate [Vcpkg](https://vcpkg.io/en/).

### Installation

1. Clone this repository
2. Install Raylib for x64 with `vcpkg install raylib:x64-windows`
3. Open the solution file
4. Rename stuff

```bash
# (1)
git clone https://github.com/kauefraga/raylib-template.git [your-project-name]
cd [your-project-name]

# (2)
vcpkg install raylib:x64-windows

# (3)
raylib-template.sln
```

Enjoy the development!

## 🧻 Resources

I read some wiki pages and discussions to reach this solution, see some:

- https://github.com/raysan5/raylib/wiki/Working-on-Windows
- https://github.com/Microsoft/vcpkg#quick-start-windows
- https://scoop.sh/#/apps?q=vcpkg
- https://stackoverflow.com/questions/9618815/i-dont-want-console-to-appear-when-i-run-c-program

## License

This project is licensed under the MIT License - See the [LICENSE](https://github.com/kauefraga/raylib-template/blob/main/LICENSE) for more information.
