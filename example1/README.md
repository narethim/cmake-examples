
# Example1

A minimum cmake project

## Configure

It will create CMake configuration files inside `build` directory

```sh
cmake -H. -Bbuild
```

# Compile

The following command will generate the output program `hello` in `build/` directory.

```sh
cmake --build build -- -j3
```

# Run

```sh
./build/hello
Hello World
```


