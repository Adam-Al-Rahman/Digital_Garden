<##
# @file : AutoGit.ps1
# @brief : Automate the git operation in a folder
# @author : Adam Al-Rahman
# @date : November 5, 2021.
# @copyright : Copyright (c) 2021 Adam Al-Rahman
#>

# garden folder location
$garden="E:\workspace\garden"

# change dir
cd "$garden"

git pull

$CHANGES_EXIST="$(git status --porcelain | wc -l)"

if ("$CHANGES_EXIST" -eq 0){
    exit -0
}

git pull
git add .
git commit -q -m "Last Sync: $(date +"%Y-%m-%d %H:%M:%S")"
git push -q
