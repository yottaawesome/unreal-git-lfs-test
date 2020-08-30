# Unreal Git LFS test repo

This repo is just for testing out hosting an Unreal Engine project on Git with Git LFS enabled and a template project created from the Unreal Editor. This repo is based on Oded Erell's [blog post](https://odederell3d.blog/2020/04/22/unreal-engine-4-github-first-steps/) on using Unreal with Git and Git LFS. The steps I've followed are mostly the same, but I've edited the `.gitignore` file to include the optional `_BuiltData.uasset` files. See [here](https://community.gamedev.tv/t/failed-to-load-builtdata/119307).

## Basic steps to create a repo suitable for Unreal Engine projects

1. Install [Git LFS](https://git-lfs.github.com/) locally (obviously, you must have Git installed).
2. Create the repo on GitHub and make sure to select "UnrealEngine" for the "Git ignore" file.
3. Clone the repo and initialise Git LFS: `git lfs install`.
4. Track binary files for LFS compression by adding them with the `git lfs track *.{file_extension}`.
5. Add, commit, and push changes as normal. Note that LFS uses is subject to GitHub's data plans, and you may need to [buy one](https://github.com/account/billing/data/upgrade?packs=1) if you're intending on using GitHub for your Unreal work.

## Additional resources

* [UE4GitPlugin](https://github.com/ProjectBorealis/UE4GitPlugin)
* [UE4 Community Wiki](https://ue4community.wiki/)
* [UE4 Examples](https://github.com/drichardson/UE4Examples)
