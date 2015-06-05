#!/bin/bash
branch=$1
git push github $branch
git push bitbucket $branch
