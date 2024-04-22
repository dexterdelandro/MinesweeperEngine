###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_LoadBMP

Load a BMP image from a file.

## Syntax

```c
SDL_Surface* SDL_LoadBMP(const char *file);

```

## Function Parameters

|              |                      |
| ------------ | -------------------- |
| **file**     | the BMP file to load |

## Return Value

Returns a pointer to a new [SDL_Surface](SDL_Surface) structure or NULL if
there was an error; call [SDL_GetError](SDL_GetError)() for more
information.

## Remarks

The new surface should be freed with
[SDL_DestroySurface](SDL_DestroySurface)(). Not doing so will result in a
memory leak.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_DestroySurface](SDL_DestroySurface)
* [SDL_LoadBMP_RW](SDL_LoadBMP_RW)
* [SDL_SaveBMP](SDL_SaveBMP)

----
[CategoryAPI](CategoryAPI)

