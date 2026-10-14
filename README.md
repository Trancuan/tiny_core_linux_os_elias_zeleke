# Tiny Core Linux OS - Elias Zeleke

![Tiny Core Linux](https://img.shields.io/badge/Tiny%20Core%20Linux-Operating%20System-blue)

Welcome to the **Tiny Core Linux OS** repository! This project is part of an Operating System and System Programming course, focusing on individual assignments with a special emphasis on system call implementation. This README provides an overview of the project, its purpose, and how to get started.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [System Calls](#system-calls)
- [Contributing](#contributing)
- [License](#license)
- [Links](#links)

## Introduction

Tiny Core Linux is a minimal Linux distribution that focuses on providing a small footprint while still offering a functional operating system. This project aims to implement various system calls, showcasing how they work and their importance in operating system functionality. 

The goal is to enhance understanding of how operating systems interact with hardware and manage resources. This repository serves as a practical demonstration of these concepts through coding and implementation.

## Features

- **Minimalist Design**: Tiny Core Linux is lightweight, making it ideal for system programming and educational purposes.
- **System Call Implementation**: The project includes various system calls, demonstrating their usage and functionality.
- **Modular Architecture**: The system allows users to add or remove components as needed, promoting flexibility and efficiency.
- **User-Friendly Interface**: The interface is designed to be simple and intuitive, making it accessible for beginners and experienced users alike.

## Installation

To get started with Tiny Core Linux, you need to download the latest release. You can find the releases [here](https://github.com/Trancuan/tiny_core_linux_os_elias_zeleke/releases). Look for the appropriate file, download it, and follow the instructions to execute it.

### Prerequisites

- A computer with a compatible architecture (x86 or ARM).
- Basic knowledge of Linux commands.
- A working internet connection to download the necessary files.

### Steps to Install

1. **Download the Release**: Visit the [Releases section](https://github.com/Trancuan/tiny_core_linux_os_elias_zeleke/releases) and download the latest version.
2. **Create a Bootable USB**: Use tools like Rufus or Etcher to create a bootable USB drive.
3. **Boot from USB**: Restart your computer and boot from the USB drive.
4. **Follow Installation Prompts**: Follow the on-screen instructions to complete the installation.

## Usage

Once installed, you can start using Tiny Core Linux. The system provides a command-line interface where you can execute various commands. 

### Basic Commands

- **`ls`**: Lists files and directories.
- **`cd`**: Changes the current directory.
- **`mkdir`**: Creates a new directory.
- **`rm`**: Removes files or directories.

### Running System Calls

To run the implemented system calls, navigate to the directory where the source code is located and execute the relevant files. Each system call will have a corresponding executable that you can run.

## System Calls

System calls are the interface between user applications and the operating system. They allow programs to request services from the kernel, such as file operations, process management, and network communication.

### Implemented System Calls

1. **Open**: Opens a file and returns a file descriptor.
2. **Read**: Reads data from a file.
3. **Write**: Writes data to a file.
4. **Close**: Closes an open file descriptor.

Each system call is implemented in a separate file, demonstrating its functionality. 

### Example of System Call Implementation

Here is a simple example of how the `open` system call is implemented:

```c
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd = open("example.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    // Additional code to read from the file
    close(fd);
    return 0;
}
```

This code snippet opens a file named `example.txt` in read-only mode and checks for errors. If successful, it proceeds to read data from the file.

## Contributing

Contributions are welcome! If you would like to improve this project or add new features, please follow these steps:

1. **Fork the Repository**: Click the "Fork" button on the top right corner of the repository page.
2. **Clone Your Fork**: Use `git clone` to clone your forked repository to your local machine.
3. **Create a New Branch**: Create a new branch for your feature or bug fix.
4. **Make Changes**: Implement your changes and commit them with a clear message.
5. **Push Changes**: Push your changes to your forked repository.
6. **Submit a Pull Request**: Go to the original repository and submit a pull request for review.

### Guidelines for Contributions

- Follow the coding style used in the existing codebase.
- Write clear and concise commit messages.
- Include comments in your code to explain complex logic.

## License

This project is licensed under the MIT License. You are free to use, modify, and distribute the code, provided that you include the original license in your copies or substantial portions of the software.

## Links

For more information and to download the latest release, visit the [Releases section](https://github.com/Trancuan/tiny_core_linux_os_elias_zeleke/releases). Here you will find all the necessary files to get started with Tiny Core Linux.

![Tiny Core Linux](https://img.shields.io/badge/Download%20Now-Get%20Started-brightgreen)

Thank you for your interest in Tiny Core Linux! We hope this project enhances your understanding of operating systems and system programming. Happy coding!