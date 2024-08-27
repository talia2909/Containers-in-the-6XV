
# Implementation of Containers in the 6XV Operating System

## Project Overview

This project focuses on implementing containers in the 6XV operating system, particularly the implementation of the `namespace pid`. The project involved adapting the existing system to allow the creation of isolated processes within containers.

### Project Goals:
- Understand the practical aspects of container implementation.
- Get acquainted with the implementation of `namespace pid` in the 6XV operating system.
- Learn about the `unshare` system call used for creating new namespaces.
- Modify and adapt the `fork` system call to create a new process and associate it with an isolated resource namespace.
- Integrate container awareness into the existing system and support the isolation mechanism.

## Key Project Files:
- `defs.h`: General definitions of functions and structures used in the project.
- `Makefile`: The build file for the 6XV system with the necessary changes to support container implementation.
- `proc.c`: Implementation of the `proc` structure and the necessary changes to add container support.
- `ps.c`: Implementation of the `ps` command adapted to display processes within containers.
- `syscall.c` and `syscall.h`: Added new system calls and support for containers.
- `sysproc.c`: Modifications to existing system calls to support containers.
- `user.h` and `usys.S`: User-level definitions and support for the new system calls.

## Execution Steps:
1. **Running the 6XV Operating System**: Use the following commands to run the system and perform a clean build:
   ```bash
   make clean
   make qemu
   ```

2. **Container Testing**:
   - Create a container and connect to it.
   - Run the `ps` command inside and outside the container.
   - Check the correctness of the `EXTPID` field in the processes.

3. **Bug Fixes and Testing**:
   - Perform bug fixes based on errors encountered during system execution.
   - Conduct regression tests to ensure system stability after the changes.

4. **Scripts and Automation**:
   - Use the `expect` script to automate tests on the system.
   - Ensure that all tests pass successfully.

## Instructions for Execution and Testing:
1. **Install expect**:
   ```bash
   sudo apt-get install expect
   ```

2. **Run Automated Tests**:
   ```bash
   ./runtests.exp my.log
   echo $?
   ```
   Ensure that the result is `0`, indicating that all tests passed successfully.

## Conclusion
Throughout this project, we focused on implementing OS-level virtualization by successfully adding container support. The changes made enabled the creation and management of isolated processes in an efficient and secure manner.
