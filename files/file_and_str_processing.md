🧰 Level 2: File and String Processing

    📄 fileinfo <filename>

    - [ ] Print file size, line count, and if it’s readable.
    - [ ] Use stat(), fopen(), fgetc(). 🔍 grep-lite <pattern> <filename>
    - [ ] Mimic a simple version of grep.
    - [ ] Print lines that contain the pattern. 🔁 reverse <string>
    - [ ] Print the reverse of a string passed as argument. 📦 argsort
    - [ ] Sort the command-line arguments alphabetically.

🔧 Level 3: System-Level Utilities

    🧪 pidof <program>

    - [ ] Print the PID(s) of running instances of a given program.
    - [ ] Parse /proc directory (Linux-only). 📡 pingtest <host>

    Call system("ping -c 1 host") and print success/failure.

    Bonus: use getaddrinfo() and socket() for raw ICMP (advanced).

    ⏱️ timeout <seconds> <command>

    Run a command but kill it after N seconds.

    Use fork(), execvp(), alarm() or setitimer().

🔒 Level 4: Systems Programming Skills

    🔐 passwd-check

    Accept a password input (hide it), and check against a hardcoded hash.

    Use termios to disable echo while typing.

    👥 userlookup <uid>

    Use getpwuid() to print username for a UID.

    🧪 envdump

    Dump all environment variables (extern char **environ).

    📜 hexdump <filename>

    Print the contents of a file in hex + ASCII (like xxd or hexdump).
