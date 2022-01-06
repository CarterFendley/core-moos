# core-moos
A very light weight, easy to use middleware.

See the MOOS homepage at https://sites.google.com/site/moossoftware/ for more information and documentation.

# Setup instructions

```
git submodule init
```

```
mkdir build; cd build
```

```
cmake ..
```

```
make -j$(nproc)
```

## To preform tests use the following command in the build directory

```
ctest --verbose
```

# Build Statuses
OS|Build Status
--|------------
Linux/OSX|[![Build Status]( https://travis-ci.org/themoos/core-moos.svg?branch=master)](https://travis-ci.org/themoos/core-moos)
Windows|[![Build status](https://ci.appveyor.com/api/projects/status/t8vxowemdw9itd0u?svg=true)](https://ci.appveyor.com/project/pmnewman/core-moos)

