#!/bin/bash

ulimit -c 0

export PATH="/bin:/sbin:/usr/bin:/usr/sbin:/usr/heimdal/bin:/usr/heimdal/sbin"

export EDITOR='emacs'
export HISTSIZE=1000
export MAIL="/u/all/${USER}/mail/${USER}"
export PAGER='more'
export PS1="\033[01;31mEbe@ \033[01;37m"
export SAVEHIST=1000
export WATCH='all'

alias ll='ls -l'
alias la='ls -la'
alias j='jobs'
alias emacs='emacs -nw'
alias ne='emacs'
alias ns='ns_auth'
alias cl='rm -f *~ ; rm -f *# ; echo "done"'
alias push='push_that.sh'
alias prepare='prepare_my_repo.sh'

if [ -f ${HOME}/.mybashrc ]
then
    . ${HOME}/.mybashrc
fi
