
# Example2

A simple cmake project

## Configure

It will create CMake configuration files inside `build` directory

```sh
cmake -H. -Bbuild
```

# Compile

The following command will generate the output program `hello` in `bin/` directory.

```sh
cmake --build build -- -j3
```


# Run

```sh
./bin/hello
Hello World
```


