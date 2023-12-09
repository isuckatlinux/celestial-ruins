# Use an official Ubuntu base image
FROM ubuntu:latest

# Install required dev packages
RUN apt-get update && apt-get install -y \
    gcc \
    make \
    git \
    && rm -rf /var/lib/apt/lists/*

# Install required libraries
RUN apt-get update && apt-get install -y \
    libncurses-dev \
    libsdl2-dev \
    && rm -rf /var/lib/apt/lists/*

# Set the working directory to /
WORKDIR /root

# Clone the repository
RUN git clone https://github.com/isuckatlinux/celestial-ruins.git

# Copy start-up script into the container
COPY startup.sh /startup.sh

# Give execution rights to your script
RUN chmod +x /startup.sh

# Run your script when the container starts
CMD ["tail", "-f", "/dev/null"]