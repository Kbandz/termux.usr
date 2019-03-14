# termux.usr

#在需要git的本地仓库输入一下代码(Linux)

echo "# termux.usr" >> README.md

git init

git add README.md

git commit -m "first commit"

git remote add origin https://github.com/ModelHello/termux.usr.git

git push -u origin master
