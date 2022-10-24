# Specify the base image
FROM python:3.10.6-alpine3.16

# Copy the hello_world script from current directory of local machine to scripts directory of container
COPY . /scripts

# Change the current working directory of container to scripts
WORKDIR /scripts

# Run the following command when container is created for this image
CMD ["python3", "hello_world.py"]