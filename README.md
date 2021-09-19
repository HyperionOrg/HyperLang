<img src="./Development/Images/Branding.png" align="left" width="128px"/>

# HyperLang
[![Build Linux](https://img.shields.io/github/workflow/status/SkillerRaptor/HyperLang/build-linux?style=flat&label=Build%20Linux&logo=github)](https://github.com/SkillerRaptor/HyperLang/blob/master/.github/workflows/build-linux.yml)
[![Support Server](https://img.shields.io/discord/674880770137128970.svg?&style=flat&label=Discord&logo=discord)](https://discord.gg/tYu9yYY)
[![License](https://img.shields.io/badge/license-MIT-yellow?style=flat)](https://github.com/SkillerRaptor/HyperLang/blob/master/LICENSE)

<br />

This repository contains the source code of HyperLang.
Anyone is welcome to contribute or use the source of HyperLang.

## Contents
- [Getting Started](#getting-started)
- [Dependencies](#dependencies)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

### Prerequisites
In order to build the engine, you will need the following things installed:
- CMake
- Conan
- Python
- Vulkan SDK

### Installation
1. Download CMake
```shell
sudo apt install cmake
```

2. Download Python3
```shell
sudo apt install python3
```

3. Install Conan
```shell
pip3 install conan
```

### Building
1. Download the source code by using Git and cloning the repository, or downloading it as a zip.
```shell
git clone ttps://github.com/SkillerRaptor/HyperLang
cd HyperLang
```

2. Create a folder in which the CMake project files will be generated in.
```shell
mkdir build
cd build
```

3. Configure the project by using the <code><a href="https://github.com/SkillerRaptor/HyperLang/blob/master/CMakeLists.txt">CMakeLists.txt</a></code> inside of the root directory.
```shell
cmake .. -D CMAKE_BUILD_TYPE=Debug
```

4. Build the project using CMake
```shell
cmake --build .
```

5. Run the engine in the Binary/ folder to check if everything was built successfully.

## Dependencies
- [llvm](https://llvm.org/docs/DeveloperPolicy.html#new-llvm-project-license-framework) Copyright (c) Apache 2.0 License, LLVM present

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
Please make sure to update tests as appropriate.

## License
HyperLang is distributed under the [MIT](https://github.com/SkillerRaptor/HyperLang/blob/master/LICENSE) license.
