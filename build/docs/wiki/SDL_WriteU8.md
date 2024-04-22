###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_WriteU8

Use this function to write a byte to an [SDL_RWops](SDL_RWops).

## Syntax

```c
SDL_bool SDL_WriteU8(SDL_RWops *dst, Uint8 value);

```

## Function Parameters

|               |                                        |
| ------------- | -------------------------------------- |
| **dst**       | the [SDL_RWops](SDL_RWops) to write to |
| **value**     | the byte value to write                |

## Return Value

Returns [SDL_TRUE](SDL_TRUE) on successful write, [SDL_FALSE](SDL_FALSE) on
failure; call [SDL_GetError](SDL_GetError)() for more information.

## Version

This function is available since SDL 3.0.0.

----
[CategoryAPI](CategoryAPI)

