#!/bin/bash

# Update package lists
sudo apt-get update

# Install gcc and make
sudo apt-get install -y gcc make

# Install ncurses development libraries
sudo apt-get install -y libncurses5-dev libncursesw5-dev

echo "Development environment setup complete."
