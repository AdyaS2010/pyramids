# Mario Pyramid Projects

## Description
These projects are practice programs written in C to create different styles of pyramids for a Mario game. The first file/portion creates a single pyramid, while the second one creates a double pyramid with a gap in between.

## Features
- Create a single pyramid of specified height
- Create a double pyramid of specified height with a gap in between
- Supports heights between 1 and 8

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/pyramids.git
   ```
2. Navigate to the project directory:
   ```bash
   cd mario
   ```
3. Compile the code:
   ```bash
   make single_pyramid
   make double_pyramid
   ```

## Usage
### Single Pyramid
1. Run the application:
   ```bash
   ./single_pyramid
   ```
2. Enter the height of the pyramid when prompted.
3. The program will print a single pyramid of the specified height.

### Double Pyramid
1. Run the application:
   ```bash
   ./double_pyramid
   ```
2. Enter the height of the pyramid when prompted.
3. The program will print a double pyramid of the specified height with a gap in between.

## Example
### Single Pyramid
```bash
$ ./single_pyramid
Height: 4
   #
  ##
 ###
####
```

### Double Pyramid
```bash
$ ./double_pyramid
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

## Contributing
1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Make your changes and commit them:
   ```bash
   git commit -m 'Add some feature'
   ```
4. Push to the branch:
   ```bash
   git push origin feature/your-feature-name
   ```
5. Open a pull request.

## License
This project is not licensed under any License currently.
