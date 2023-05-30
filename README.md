# My_Sokoban
Remake a of the sokoban video game using Ncurses library

## Getting started
The Sokoban is a game where you must put boxes in holes on map with obstacles.
This project is a remake of the game with the Ncurses library, and will run in a bash terminal.

## Map creation

Here's how a map work :
  - '#'s are the walls
  - 'P' is the player
  - 'O's are the holes
  - 'X's are the boxes

The number of boxes must be the same as the number of holes, the map must contain at least the player, one box and one hole. The map must also be closed with the walls.
If you need it, there are three examples of map in test_maps folder.

## Installation of Ncurses
To install the library, run the following commands depending on your OS :

### For Debian / Ubuntu Linux
```
sudo apt-get install libncurses5-dev libncursesw5-dev
```
### For CentOS / RHEL / Scientific (6.x/7.x+) or Fedora (21 or older)
```
sudo yum install ncurses-devel
```

### For Fedora (22.x+)
```
sudo dnf install ncurses-devel
```
