#!/bin/zsh

# Check if an argument was provided
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 new_filename.cpp"
    exit 1
fi

# The name of the new file is taken from the first argument
NEW_FILE="$1"

# Template file location (modify this path if the template is in a different directory)
TEMPLATE_FILE="/home/enryu/github_stuff/cpplearn/codeforces_sols/template.cpp"

# Check if the template file exists
if [ ! -f "$TEMPLATE_FILE" ]; then
    echo "Template file $TEMPLATE_FILE does not exist."
    exit 1
fi

# Check if the new file already exists
if [ -f "$NEW_FILE" ]; then
    echo "The file $NEW_FILE already exists."
    exit 1
fi

# Copy the template to the new file
cp "$TEMPLATE_FILE" "$NEW_FILE"

echo "Created new file $NEW_FILE from template."
