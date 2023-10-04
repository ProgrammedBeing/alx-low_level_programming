#!/bin/bash
echo "Enter file name:"
read -r file

# Validate file name input
# if [[ ! $file =~ ^[a-zA-Z0-9_-.]+$ ]]; then
#       echo "Invalid file name.  Please use alphanumeric characters and underscores only."
#       exit 1
#fi

if [[ -e $file ]]; then
        echo "File '$file' already exists.  Aborting."
        exit 1;
fi

touch $file

echo "#include <stdio.h>" > $file

echo "Write description: "
read -r description

# Validating description input
if [[ -z $description ]]; then
        echo "Description can't be empty.  Aborting!!!"
        exit 1
fi

echo "Function prototype: "
read -r fxn

echo "Return description"
read -r return

cat << EOF >> "$file"
#include "main.h"
/**
 * $fxn - Entry point
 *
 * Description: $description
 *
 * Return: $return
 */

$fxn
{
        return (0);
}
EOF

chmod 764 $file

# Inform user about successful file creation
echo "File '$file' created successfully."

vi $file

vi main.h
git add main.h
git commit -m "Updated header file"
git push

betty $file
