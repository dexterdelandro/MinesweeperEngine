###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_HapticRumbleSupported

Check whether rumble is supported on a haptic device.

## Syntax

```c
SDL_bool SDL_HapticRumbleSupported(SDL_Haptic *haptic);

```

## Function Parameters

|                |                                           |
| -------------- | ----------------------------------------- |
| **haptic**     | haptic device to check for rumble support |

## Return Value

Returns [SDL_TRUE](SDL_TRUE) if the effect is supported or
[SDL_FALSE](SDL_FALSE) if it isn't.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_InitHapticRumble](SDL_InitHapticRumble)
* [SDL_PlayHapticRumble](SDL_PlayHapticRumble)
* [SDL_StopHapticRumble](SDL_StopHapticRumble)

----
[CategoryAPI](CategoryAPI)

