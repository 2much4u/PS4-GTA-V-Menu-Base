FROM --platform=linux/amd64 ubuntu:22.04

# Set environment variable to disable interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Install required build tools and clean up apt cache to reduce image size
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
      binutils \
      build-essential \
      gcc \
      make && \
    rm -rf /var/lib/apt/lists/*

# Set the working directory for the SDK
WORKDIR /ps4-gta-v-menu-base

# Set environment variable for the SDK path
ENV PS4SDK=/lib/ps4-payload-sdk
