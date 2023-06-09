# cppzmq Build2 Package

[![build2](https://github.com/build2-packaging/cppzmq/actions/workflows/build2.yml/badge.svg)](https://github.com/build2-packaging/cppzmq/actions/workflows/build2.yml)

This project builds and defines the build2 package for the [cppzmq](https://github.com/zeromq/cppzmq) library.

The packaging code is licensed under the MIT License, the upstream artifacts are licensed under the terms and conditions of cppzmq.

## Usage

You can simply add these packages as dependency to your project by specifying them in your `manifest`:

```
depends: libcppzmq ^4.9.0
```

Then import your required targets

```
import libs = libcppzmq%lib{cppzmq}
```
