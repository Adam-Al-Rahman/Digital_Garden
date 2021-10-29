#!/usr/bin/env sh

# garden folder location
garden="E:\workspace\garden"

# In terminal change the directory to garden folder
cd "$garden"

git pull

CHANGES_EXIST="$(git status --porcelain | wc -l)"

if [ "$CHANGES_EXIST" -eq 0]; then
    exit 0
fi

git pull
git add .
git commit -q -m "Last Sync: $(date +"%Y-%m-%d %H:%M:%S")"
git push -q