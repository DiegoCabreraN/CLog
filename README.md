# CLog

CLog is a simple and customizable logger for your C programs. It contains 5 different methods similar to `printf`, with the only difference that they add a new line at the end.

## Available Logs

1. `debugf(const char *format, ...)`
2. `infof(const char *format, ...)`
3. `warnf(const char *format, ...)`
4. `errorf(const char *format, ...)`
5. `panicf(const char *format, ...)` this method stops the program, be useful while using it

## Options

CLog is simple and you can customize it by changing logConfig. Ex:

```c
// Usage
logConfig[DEBUG_COLOR] = 4;
```

The configurations CLog allows are:

- `DEBUG_COLOR`: Color of the Debug Tag
- `INFO_COLOR`: Color of the Info Tag
- `WARN_COLOR`: Color of the Warning Tag
- `ERROR_COLOR`: Color of the Error Tag
- `PANIC_COLOR`: Color of the Panic Tag
- `PANIC_BCKG`: Background Color of the Panic Tag

For all the options you can set a color from this table:

|Color|Number|
|-|-|
|Dark Blue|0|
|Red|1|
|Green|2|
|Yellow|3|
|Light Blue|4|
|Magenta|5|
|Cyan|6|
|Cream|7|
|White|8|
