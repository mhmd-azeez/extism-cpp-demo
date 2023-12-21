# Extism C++ Demo

This repository provides examples of how to integrate Extism into your C++ projects on Windows.

## Visual Studio Integration

The Visual Studio example is located in the [sln](./sln/) directory. It demonstrates how to manually add Extism as a dependency. The Extism binaries can be downloaded from the [latest releases on GitHub](https://github.com/extism/extism/releases). 

### Dynamic Linking

1. Configure **Project Settings -> Linker -> General -> Additional Library Directories** to include `$(SolutionDir)Dependencies\extism\lib`.
2. Configure **Project Settings -> Linker -> Input -> Additional Dependencies** to include `extism.dll.lib`.
3. Add `$(SolutionDir)Dependencies\extism\include` to **Project Settings -> C/C++ -> General -> Additional Include Directories**.

### Static Linking

1. Configure **Project Settings -> Linker -> General -> Additional Library Directories** to include `$(SolutionDir)Dependencies\extism\lib`.
2. Configure **Project Settings -> Linker -> Input -> Additional Dependencies** to include `extism.lib;ws2_32.lib;bcrypt.lib;userenv.lib;kernel32.lib;NtDll.lib`.
3. Add `$(SolutionDir)Dependencies\extism\include` to **Project Settings -> C/C++ -> General -> Additional Include Directories**.

## CMake Integration

The CMake example is located in the [cmake](./cmake/) directory. It demonstrates how to add Extism as a git submodule to the [dependencies](./cmake/dependencies/extism/) directory. This example requires Rust to compile.

1. Add Extism's CMakeLists.txt directory and extism.h directory to your CMakelists.txt:

```cmake
include_directories(./dependencies/extism/runtime)
add_subdirectory(./dependencies/extism/libextism extism)
```

2. Link the `extism-shared` for dynamic linking and `extism-static` for static linking to your CMakelists.txt:

```
target_link_libraries(DynamicApp extism-shared)
target_link_libraries(StaticApp extism-static)
```