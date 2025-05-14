##🖥️ a. OS Installation
I installed Tiny Core Linux using VMware Workstation Player.
The ISO was downloaded from its official website and configured
with 8 GB virtual disk space. I followed standard setup steps to boot 
into the OS and view the interface. No issues occurred during the installation, 
though some challenges appeared during compiler setup.

##⚙️ b. System Call
I implemented the execve() system call to run an external program
(/bin/ls) using C in Tiny Core Linux. It demonstrates replacing the current
process image with a new one. Compilation was attempted using gcc, though installing
the required tools faced some errors. The program aimed to display a directory listing of /home.
