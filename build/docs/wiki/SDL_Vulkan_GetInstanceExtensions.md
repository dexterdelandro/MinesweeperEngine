###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_Vulkan_GetInstanceExtensions

Get the Vulkan instance extensions needed for vkCreateInstance.

## Syntax

```c
char const* const* SDL_Vulkan_GetInstanceExtensions(Uint32 *pCount);

```

## Function Parameters

|                |                                                                                 |
| -------------- | ------------------------------------------------------------------------------- |
| **pCount**     | A pointer to Uint32 that will be filled with the number of extensions returned. |

## Return Value

Returns An array of extension name strings on success, NULL on error.

## Remarks

This should be called after either calling
[SDL_Vulkan_LoadLibrary](SDL_Vulkan_LoadLibrary)() or creating an
[SDL_Window](SDL_Window) with the [`SDL_WINDOW_VULKAN`](SDL_WINDOW_VULKAN)
flag.

On return, the variable pointed to by `pCount` will be set to the number of
elements returned, suitable for using with
VkInstanceCreateInfo::enabledExtensionCount, and the returned array can be
used with VkInstanceCreateInfo::ppEnabledExtensionNames, for calling
Vulkan's vkCreateInstance API.

You should not free the returned array; it is owned by SDL.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_Vulkan_CreateSurface](SDL_Vulkan_CreateSurface)

----
[CategoryAPI](CategoryAPI)

