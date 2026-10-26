# Basic Linux Commands

## FILES & NAVIGATING

- ls - directory listing (list cill files/folders on current dir)
- ls -l - formatted listing 
- ls -la - formatted listing including hidden files 
- cd dir - change directory to dir (dir will be directory name) 
- cd.. - change to parent directory 
- cd../dir - change to dir in parent directory 
- cd - change to home directory 
- pwd - show current directory 
- mkdir dir - create a directory dir
- rm file - delete file 
- rm -f dir - force remove file 
- rm -r dir - delete directory dir
- rm -rf dir - remove directory dir 
- rm -rf/ - launch some neuclear bombs targeting your system
- cp file1 file2 - copy file1 to file2
- mv file1 file2 - rename file1 to file 2 
- mv file1 dir/file2 - move file1 to dir as file2 
- touch file - create or update file 
- cat file - output contents of file 
- cat › file - write standard input into file 
- cat » file - append standard input into file
- tail-f file - output contents of file as it grows

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

## COMPRESSING

## PERMISSIONS

## SOME OTHERS