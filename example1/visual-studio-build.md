# Build using Visual Studio 2017

## Setup environment variables

```bat
# Step1: Setup the VC environment

"C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Auxiliary\Build\vcvars32.bat"

# Step2: Setup MSBuild environment

set PATH=%PATH%;"C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\MSBuild\15.0\Bin"

# Step3: Verify the versions

cmake --version

msbuild /version
```

## Configure

It will create CMake configuration files inside `build` directory.

- Using MS Visual Studio 2017 generator

```bat
cmake -H. -Bbuild -G "Visual Studio 15 2017"
```

- Using MS Visual Studio 2019 generator

```bat
cmake -H. -Bbuild -G "Visual Studio 16 2019"
```

- Using MS Visual Studio 2022 generator

```bat
cmake -H. -Bbuild -G "Visual Studio 17 2022"
```

## Build the project using `MSBuild.exe`

The following command will generate the output program hello in `build\Debug` directory.

```bat
cmake --build build
```

## Run `hello.exe`

The executable is located in  `build\Debug` directory.

```bat
build\Debug\hello.exe
Hello world!

```
