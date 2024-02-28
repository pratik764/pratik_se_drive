# Creating and writing to a file
file_path = "example.txt"  # Specify the file path

# Open the file in write mode ('w' or 'wt' for text mode)
# If the file doesn't exist, it will be created. If it exists, its content will be overwritten.
with open(file_path, 'w') as file:
    file.write("Hello, this is a sample text.")

# Additional writing methods:
# You can also use file.writelines() to write a list of strings to the file.

# Opening a file in append mode ('a' or 'at' for text mode)
# If the file exists, new content will be appended at the end; if it doesn't exist, a new file will be created.
with open(file_path, 'a') as file:
    file.write("\nThis is additional text.")

# Opening a file in write mode and creating it if it doesn't exist ('x' or 'xt' for text mode)
# Raises a FileExistsError if the file already exists.
try:
    with open("new_file.txt", 'x') as new_file:
        new_file.write("This is a new file.")
except FileExistsError:
    print("File already exists.")

# You can also open files in binary mode by appending 'b' to the mode ('wb', 'ab', 'xb' for binary modes).
