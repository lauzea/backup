#!/bin/sh
## prepare_my_repo.sh for prepare_my_repo in /home/lauze_a/rendu/Piscine_C_J02
## 
## Made by lauze_a lauze_a
## Login   <lauze_a@epitech.net>
## 
## Started on  Tue Sep 30 10:22:57 2014 lauze_a lauze_a
## Last update Tue Sep 30 12:49:29 2014 lauze_a lauze_a
##

blih repository create "$1"
blih repository setacl "$1" ramassage-tek r
blih repository getacl "$1"
