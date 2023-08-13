run command

first
```sh
cmake ..
```

after
```sh
nodemon --watch "./" --ext "c" --exec "cmake --build ./build && .\build\Debug\test.exe"
```

Development Tools
- [cmake install](https://cmake.org/download/)
- mingw64
- nodemon