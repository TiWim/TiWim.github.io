# Analyse d'un programme

Objectif: acquérir et rassembler mes connaissances dans l'analyse statique et dynamique d'un programme

## Liste des outils

- strace
- ltrace
- readelf
- gdb
- objdump
- strings
- stripp
- radare2
- ida
- python

## Description

### Debuggers

Je ne vais pas faire une analyse détaillée de tous les debuggers car le nombre de fonctionnalités est très important.

- GDB
Vous trouverez une fiche des commandes minimales à connaître [ici](http://darkdust.net/files/GDB%20Cheat%20Sheet.pdf)

Analyse statique et dynamique d'un programme grâce à son mode pas à pas (stepi) et le désassemblage du binaire (disassemble).

Afficher le contenu de la stack:
x/24x $esp


Afficher une adresse:
print (void*) $esp
print (void*) $esp+0x30

Afficher le contenu d'une adresse
x/x $esp+0x30

jump *adresse
jump *main+144

stepi

br *adresse
br *main+144

continue c
run r
kill ki



- Objdump
dump d'un fichier binaire en assembleur




