# The Forgotten Vault

A text-based adventure game written in C++ where players explore the mysterious underground vault beneath the village of Greenhollow.

## Overview

You are an adventurer in the small village of Greenhollow when strange tremors begin shaking the earth. Ancient whispers speak of "the vault awakening." Will you investigate the source of these disturbances, or stay safely at home? Your choices determine your fate in this branching narrative adventure.

## Gameplay

- **Choice-driven narrative**: Make decisions by typing single letters (followed by Enter)
- **Multiple endings**: Your choices lead to different outcomes - some heroic, others less fortunate
- **Gauntlet-style challenges**: Many paths have one correct choice and multiple deadly alternatives
- **Replay system**: Try again after reaching any ending to explore different paths

### Controls

- Type the first letter of your choice (case insensitive)
- Press Enter to confirm your selection
- Press Enter when prompted to continue reading

## Building and Running

### Prerequisites

- C++ compiler with C++11 support or later
- Make utility (for using the Makefile)

### Compilation

Using the provided Makefile:
```bash
make
```

Or compile manually:
```bash
g++ -std=c++11 -o forgotten_vault main.cpp
```

### Running

```bash
./forgotten_vault
```

## Game Structure

The adventure follows a branching path structure:

1. **Beginning**: Choose to investigate or stay home
2. **Exploration**: Navigate through various underground chambers
3. **Challenges**: Solve riddles and face guardians
4. **The Vault**: Make final choices that determine your ending

### Endings

The game features multiple possible endings based on your choices:
- **Hero's Path**: Seal away the darkness and save the village
- **Various Death Endings**: Learn from mistakes and try different approaches
- **Alternative Conclusions**: Discover what happens when you make different final choices

## Technical Details

- Written in standard C++ with minimal dependencies
- Cross-platform compatible (Windows, macOS, Linux)
- Uses ANSI escape codes for screen positioning
- Simple input handling with standard iostream

## Files

- `main.cpp` - Main game source code
- `Makefile` - Build configuration
- `LICENSE` - MIT License
- `README.md` - This file

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Tips for Players

- Read the descriptions carefully for clues about the correct choices
- Some paths are meant to be challenging - don't be discouraged by initial failures
- The game encourages experimentation and replay
- Pay attention to environmental details that might hint at solutions

## Development

Created as a classic text adventure in the style of early interactive fiction games. The code demonstrates:
- Function-based story structure
- Input validation and error handling
- Cross-platform compatibility considerations
- Clean, readable C++ practices