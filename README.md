# getKey
A tiny C program to receive key presses as keycode and character. It can also convert between keycode and character by providing one of them as argument.
  
GetKey is perfect for the usage in Windows batch or cmd.

## Details
GetKey always gives you the keycode and the character as output:
- The character is directly written to the standard output stream (with no trailing linebreak added).
- The keycode is returned as exitcode. You can access it with `%errorlevel%` in cmd or batch.
  
You have 3 possible ways to specify which character you want to output:
- By default getKey waits for a keypress by the user and outputs this character. (no arguments required)
- If you provide a number as argument, it will get interpreted as ASCII-code and the corresponding character will get printed.
- If you provide a character as argument this character will be used. For strings the first character is used.

## Possible Usages
- Get the keycodes of a series of keys the user types in.
- Masked input: recieve the character that was typed, but show a different character like `*`.
- Print special characters. For example `getKey 219` prints `█` and `getKey 7` plays the bell sound.
- Convert between character and keycode in order to run algorithms like encryption or hashing on the keycode.
- Store and process user input as series of keycodes to avoid trouble with special characters.
