# cpp-base

## how use git

### push your code

~~~
# 1. add stage
git add .
git add path/to/file
# 2. commit to local repository
git commit -m "msg"
# 3.push code 
git push origin main
~~~

### resolve conflict

~~~git
# pull the newest code
git pull --rebase origin main
# resolve conflict

# ...

# git rebase continue
git rebase --continue
~~~

### merge code from origin branch
git pull origin main