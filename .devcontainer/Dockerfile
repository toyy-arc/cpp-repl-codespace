FROM mcr.microsoft.com/devcontainers/cpp:bullseye

# Install additional tools
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    wget \
    curl \
    gdb \
    lldb \
    clang \
    clang-format \
    clang-tidy \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace
