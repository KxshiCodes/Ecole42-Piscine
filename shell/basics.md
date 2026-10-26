# Basic Linux Commands

## FILES & NAVIGATING

- ls - Lists files and directories in the current directory.
- ls -l - Long-format listing, including permissions, owner, size, and modification time.
- ls -la - Long listing including hidden entries.
- cd dir - Changes into directory dir.
- cd .. - Space required. Moves to the parent directory.
- cd ../dir - Space required after cd. Goes to directory dir inside the parent directory.
- cd - Returns to home directory.
- pwd - Prints the current working directory.
- mkdir dir - Create a directory.
- rm file - Removes a file; usually asks no confirmation.
- rm -f file - Force-removes files without prompting. It does not remove a non-empty directory.
- rm -r dir - Recursively removes a directory and its contents.
- cp file1 file2 - Copy file1 to file2
- mv file1 file2 - Renames a file or moves it, depending on the destination.
- mv file1 dir/file2 - Moves and renames the file to file2 inside dir.
- touch file - Creates an empty file if it doesn't exist, or updates its timestamps if it does.
- cat file - Prints a file's contents to standard output. 
- cat › file - Reads standard input into a file, overwriting its previous contents.
- cat » file - Reads standard input and appends it to a file.
- tail -f file - Follows new lines added to a file, useful for monitoring logs.

## NETWORKING

- ping host - ping host 
- whois domain - get whois for domain 
- dig domain - get DNS for domain 
- dig -x host - reserve lookup host
- wget file - download file 
- wget -c file - continue stopped download 
- wget -r url - recurively download files from url 
- curl url - outputs the webpage from url 
- curl-o meh.html url - writes the page to meh.html 
- ssh user @host - connect to host as user 
- ssh-p port user@host - connect using port
- ssh-D user@host - connect & use bind port

## PROCESSES

- ps - display currently active processes
- ps aux - detailed outputs 
- kill pid - kill process with process id (pid)
- killall proc - kill all processes named proc

## SYSTEM INFO

- date - show current date/time
- uptime - show uptime
- whoami - who you're logged in as
- w - display who is online 
- cat/proc/cpuinfo - display cpu info 
- cat/proc/meminfo - memory info 
- free - show memory and swap usage 
- du - show directory space usage 
- du-sh - displays readable sizes in GB 
- df - show disk usage
- uname -a - show karnel config

## COMPRESSING

- tar cf file.tar files - tar files into file.tar 
- tar xf file.tar - untar into current directory
- tar tf file.tar - show contents of archive

options:
c - create archive
t - table of contents
x - extract
z - use zip/gzip
f - specify filename
j - bzip2 compression
w - ask for comfirmation
k - do not overwrite
T - files from file
v - verbose

## PERMISSIONS

- chmod octal file - change permissions of file

4 - read (r)
2 - write (w)
1 - execute (x) 

order: owner/group/world

- chmod 777 - rwx for everyone
- chmod 755 - rw for owner, rx for group world

## SOME OTHERS

- grep pattern files - search in files for pattern 
- grep -r pattern dir - search for pattern recursively in dir - locate file - find all instances of file 
- whereis app - show possible locations of app
- man command - show manual page for command