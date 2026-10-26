# Basic Git Commands - Cheat Sheet

A brief reference for commonly used Git commands.

## 1. Configuration

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global color.ui auto
```

## 2. Create or Clone a Repository

```bash
git init                  # Initialise a repository
git clone <url>           # Clone an existing repository
```

## 3. Stage and Commit Changes

```bash
git status                # Check the working tree
git add <file>            # Stage a specific file
git add .                 # Stage all changes in the current directory
git reset <file>          # Unstage a file
git diff                  # View unstaged changes
git diff --staged         # View staged changes
git commit -m "Message"   # Commit staged changes
```

## 4. Branches and Merging

```bash
git branch                # List branches
git branch <name>         # Create a branch
git switch <name>         # Switch branches
git switch -c <name>      # Create and switch to a branch
git merge <branch>        # Merge a branch into the current branch
git log                   # View commit history
```

## 5. Remote Repositories

```bash
git remote -v             # List remote repositories
git fetch                 # Download remote updates
git pull                  # Fetch and integrate remote changes
git push                  # Upload local commits
git push -u origin <branch>  # Push and set the upstream branch
```

## 6. Undo Changes

```bash
git restore <file>           # Discard unstaged changes to a file
git restore --staged <file>  # Unstage a file
git revert <commit>          # Create a commit that reverses a commit
git reset --soft HEAD~1      # Undo the last commit, keeping changes staged
```

> **Warning:** `git restore` can discard uncommitted changes. Use `git reset` carefully, especially on shared branches.

## 7. Typical Workflow

```bash
git status
git add .
git commit -m "Describe your changes"
git pull
git push
```

## Official Reference

[GitHub Education — Git Cheat Sheet (PDF)](https://education.github.com/git-cheat-sheet-education.pdf)
