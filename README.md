Small "extensions" for ANSI C (C89/90). These are primarily for extra flavor and don't significantly (if at all) add to standard C functionality. There are no interdependencies between files. Any conflicts between these and your own projects or frameworks can't be foreseen, so you're on your own in that regard.

fixedint.h
----------
stdint.h-independent fixed-size integer types. Follows the Rust convention: i8, u8, i16, u16, i32, u32, i64, u64. Edit or re-typedef these if you have a strict preference.

forever.h
---------
Alias macro for "while (1)". Usage is "forever {}" or "do {} forever".

loop.h
------
Alias macro for "for (;;)". Usage is "loop {}". Functions identically to "while (1) {}".
