->git bash is not just a git tool it is like a terminal

This is my first read me fill and I don't if know if it is made like this or not.
So this file totally tells us github in one video.

1) To set your name and email as user
	git config --global user.name Pragya
	git config --global user.email pragyajnv13@gmail.com

2) To check what name and email has been set as user
	git config --global user.name
	git config --global user.email

3) To initalize empty git repository
	git init

4)
	ls -lart

5) To check current status of our repository
	git status

6) To add a file to stating area(to commit)
	git add my.c(file name with extention)

7) Too commit whatever till now
	git commit

In Initial commit when we type git commit then vim editor opens on git bash and nothing operation can be done, so to exit from there
	press i
	type Initial commit
	press escape
	type :wq

8) To create an empty file 
	touch about.c(filename with extension)
   To create an empty folder
	touch day1/

9) To add all files to staging area(to commit)
	git add -A
It is good practice to check status of the repositry along the way
	git status
When some changes are done to a certain file then it is modifies then again we need to add that file to staging area

10) To avoid vim editor while commiting use
	git commit -m "Added more htmls"

11) To recover you files if changes by mistake
	git checkout my.c(filename with extension)

12) To recover or match all of your files with previous commit
	git checkout -f
To clear terminal(whatever till now in screen of git bash)
	clear

13) To check whatever commited till now
	git log
If there were so many previous commits and we only want to see previous 2 commits then
	git log -p -2
to quit from diff(or after above commmands)
	type q

14) To compare working directory with staging area
	git diff
If there are some changes done then it will show in screen
after git diff if add that changes to staging area by git add -A and then we run git diff then nothing will show because current directory is added to staging area hence there is no change 

15) To compare staging area with last commit
	git diff --staged

16) To match my current directory with last commit
	git  checkout -f

17) To skip adding file to staging area and directly commiting it
	git commit -a -m "Skipped adding to staging area"

18) TO list all the files
	ls

19 To remove file from working directory and staginf area
	git rm waste.c(filename with extension)

20) To remove files only from staging area
	git rm --cached waste.c
when a file is removed we need to commit those changes

21) To get status of all modified files in short(in which branch, tracked or not, added to staging area or not)
	git status -s
M(green color)-> denotes file is modified and added to stafing area and changes to be commited
M(red color)-> denotes file is modified but not added in staging area or changes not staged to commit area
--------------------------------(.gitignore)---------------------
22) To ignore any file
	make a file in terminal named .gitignore and whatever file we dont't want to track write that in this file 
	eg. mylogs.log ->written in .gitignore
all files named mylogs.log will be ignored and it will not be tracked.
 	eg. /mylog.log -> written in .gitignore
all files in the same tree of name mylogs.log will be ignored
-> including slash means 'jhan pr git ignore h bs wahi pr mylogs.log ko ignore krna khin folder k andr ghus kr kisi aur file ko ignore mt krna'

In a project there may be many files which we don't want to track for eg. automatically generated log files(why we'll push this big file, we'll not keep it with collabrators), images which are automatically generated and which are not related to project(why we'll  track useless files) doing such this will lead to more time consumed in push and pull.
so we'll track useful file and we'll ignore useless file.

23) To ignore a particular file of a particular extension
	write *.log in .gitignore file

24) To ignore a particular directory
	ignore/(filename followed by forward slash)
filename followed by forward slash -> this ia a folder
-----------------(branches)---------------------------

25) To create a new branch
	git branch feature1(branch name)

26) To check how many branches and we are in which branch
	git branch
green colored branch tell that we are in that branch

27) To switch to a particular branch
	git checkout feature1(branch name)

28) To get back our master branch means whatever changes done in feature1 branch we want to undo those
	git checkout master

<<<<<<< HEAD
29) To merge feature1 with master branch
	git merge feature1

30) To undo merge
	git merge --abort

31) To make a new branch and also switch to that branch
	git checkout -b feature2

----------------------------(git hub)----------------------------
GitHub is a hosting service for git repositories

32) To add a remote repository of a certain name 
	git remote add code(url is replaced by this) https://github.com/pragya9460/Git-In-One-video.git

33) To check all remote repositry
	git remote

34) To get all the remote repositories along with their fetching and pushing link
	git remote -v

35) To push my master repo in remote repo(code)
	git push code master 
If code repo is private repo then we can't push master repo into it (above command will show repo not found)

36) to push my repo to code repo
	git push -u code feature1
	git push -u code feature2
37) To clone any repo
	git clone (url of that repo) (folder name in which we want to clone)

=======
>>>>>>> feature1
