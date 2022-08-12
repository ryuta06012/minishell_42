# minishell_42
A small shell like bash.

# Article
hryuuta :

[bashの再実装](https://blog.hatena.ne.jp/hryuuta/hryuuta.hatenablog.com/edit)

# Usage

```
git clone https://github.com/ToYeah/minishell_42.git && make -C minishell_42 && ./minishell_42/minishell
```

# Feature

* Simple command.  
* Relative path command.  
* Absolute path command.  
```
minishell > ls
minishell > /bin/ls
minishell > ./test.sh
```
* Redirection

```
minishell > ls > ls.txt
minishell > ls >> ls.txt
minishell > cat < ls.txt
minishell > cat < ls.txt 1>out.txt 2>error.txt
```
* Pipe
```
minishell > ls | cat
minishell > ls | cat | grep 42
```
* combination
```
minishell > ls | cat > cat.txt
minishell > cat < cat.txt | grep 42 | wc 1> wc.txt
```

# Builtin command

* echo
```
minishell > echo hello
minishell > echo -n hello
```

* cd 
```
minishell > cd ./dir
minishell > cd /bin
```

* pwd
```
minishell > pwd
```

* export
```
minishell > export PATH="/"
```

* unset
```
minishell > unset
```

* env
```
minishell > env
```

* exit

```
minishell > exit
minishell > exit 42
minishell > exit -- 1
```
