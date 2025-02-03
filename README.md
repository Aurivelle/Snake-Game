# Snake Game(C)

This is a simple **Snake Game** developed in C. It supports **keyboard control** and **score tracking**.

## Game Rules

- Use **WASD** to control movement.
- Eating `*` increases your score by **10 points**.
- Touching the wall results in **game over**.

## Current Features

- Character movement
- Scoring system
- Walls collision detection
- Game over screen

## Compilation and Execution

To compile and run the game, follow these steps:

1. Open a terminal and navigate to the project directory.
2. Compile the game using : ```gcc main.c game.c draw.c input.c utils.c -o game```
3. Run the game : ```./game```

## Future Enhancements

- AI-controlled Enemies
- Additional game modes and power-ups
- Graphical UI (using **SDL2** / **SFML**)

## License

This project is licensed under the **MIT License**.
