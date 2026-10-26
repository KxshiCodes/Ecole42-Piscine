# Basic Linux Commands - Cheat Sheet

A brief reference for commonly used Linux commands.

## FILES & NAVIGATION

- `ls` — Lists files and directories.
- `ls -l` — Displays a detailed listing.
- `ls -la` — Displays a detailed listing, including hidden files.
- `cd dir` — Changes to directory `dir`.
- `cd ..` — Moves to the parent directory.
- `cd ../dir` — Moves to `dir` inside the parent directory.
- `cd` — Returns to the home directory.
- `pwd` — Displays the current directory.
- `mkdir dir` — Creates a directory.
- `rm file` — Removes a file.
- `rm -f file` — Force-removes a file.
- `rm -r dir` — Removes a directory and its contents.
- `cp file1 file2` — Copies a file.
- `mv file1 file2` — Moves or renames a file.
- `mv file1 dir/file2` — Moves and renames a file.
- `touch file` — Creates a file or updates its timestamps.
- `cat file` — Displays file contents.
- `cat > file` — Writes input to a file, overwriting existing contents.
- `cat >> file` — Appends input to a file.
- `tail -f file` — Follows a file as new lines are added.

## NETWORKING

- `ping host` — Tests connectivity to a host.
- `whois domain` — Retrieves domain registration information.
- `dig domain` — Queries DNS records.
- `dig -x IP_ADDRESS` — Performs a reverse DNS lookup.
- `wget URL` — Downloads a file.
- `wget -c URL` — Resumes an interrupted download.
- `wget -r URL` — Recursively downloads linked content.
- `curl URL` — Displays the server's response.
- `curl -o file.html URL` — Saves the response to a file.
- `ssh user@host` — Connects to a remote host.
- `ssh -p PORT user@host` — Connects using a specified SSH port.
- `ssh -D PORT user@host` — Creates a local SOCKS proxy through SSH.

## PROCESSES

- `ps` — Displays processes associated with the current terminal.
- `ps aux` — Lists running processes with detailed information.
- `kill PID` — Requests termination of a process.
- `killall process` — Sends a signal to processes matching a name.

## SYSTEM INFORMATION

- `date` — Displays the current date and time.
- `uptime` — Displays system uptime.
- `whoami` — Displays the current username.
- `w` — Displays logged-in users and their activity.
- `cat /proc/cpuinfo` — Displays CPU information.
- `cat /proc/meminfo` — Displays memory information.
- `free` — Displays memory and swap usage.
- `du` — Displays disk space used by files and directories.
- `du -sh dir` — Displays a directory's total size in human-readable units.
- `df` — Displays filesystem disk usage.
- `uname -a` — Displays system and kernel information.

## ARCHIVING & COMPRESSION

- `tar cf file.tar files` — Creates an uncompressed archive.
- `tar xf file.tar` — Extracts an archive.
- `tar tf file.tar` — Lists archive contents.
- `tar czf file.tar.gz files` — Creates a gzip-compressed archive.

### Common `tar` options

- `c` — Create an archive.
- `t` — List archive contents.
- `x` — Extract an archive.
- `z` — Use gzip compression.
- `f` — Specify the archive filename.
- `j` — Use bzip2 compression.
- `w` — Ask for confirmation.
- `k` — Avoid overwriting existing files.
- `T` — Read filenames from a file.
- `v` — Display detailed output.

## PERMISSIONS

- `chmod OCTAL file` — Changes file permissions.

### Permission values

- `4` — Read (`r`).
- `2` — Write (`w`).
- `1` — Execute (`x`).

Order: **owner / group / others**

- `chmod 777 file` — Gives everyone read, write and execute permissions.
- `chmod 755 file` — Gives the owner `rwx` and the group and others `r-x`.

## OTHER COMMANDS

- `grep 'pattern' file` — Searches a file for a pattern.
- `grep -r 'pattern' dir` — Searches recursively for a pattern.
- `locate filename` — Searches an indexed database for file paths.
- `whereis app` — Displays possible locations of an application.
- `man command` — Opens the manual page for a command.