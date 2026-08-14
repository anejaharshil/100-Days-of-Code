# Agent Guide for 100-Days-of-Code

## Project overview
- Small C practice repository containing standalone exercises.
- Current source files are `DAY1QUESTION1.c` and `DAY1QUESTION2.c`.
- No application framework, package manager, or automated test suite is present.

## Recommended agent behavior
- Treat each `.c` file as an independent exercise.
- Keep changes minimal and focused on the existing exercise files.
- Do not introduce unrelated build systems, frameworks, or libraries.
- Prefer standard C and simple console I/O when adding or fixing code.

## Build / run conventions
- The workspace has a VS Code build task in `.vscode/tasks.json` for GCC.
- Use GCC to compile the active file, for example:
  - `gcc -fdiagnostics-color=always -g DAY1QUESTION2.c -o DAY1QUESTION2.exe`
- Run the output executable directly for verification.

## Notes for auto-suggestion quality
- Preserve the style of the existing files: simple C, single-file programs.
- If the user asks for improvements, suggest fixes that keep the exercise self-contained.
- Avoid changing unrelated workspace metadata or adding new project structure.
