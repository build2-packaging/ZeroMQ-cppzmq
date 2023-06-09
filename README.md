# libzmq Build2 Package

[![build2](https://github.com/build2-packaging/libzmq/actions/workflows/build2.yml/badge.svg)](https://github.com/build2-packaging/libzmq/actions/workflows/build2.yml)

This project builds and defines the build2 package for the [libzmq](https://github.com/zeromq/libzmq) library.

The packaging code is licensed under the MIT License, the upstream artifacts are licensed under the terms and conditions of libzmq.

## Usage

You can simply add these packages as dependency to your project by specifying them in your `manifest`:

```
depends: libzmq ^4.3.4
```

Then import your required targets

```
import libs = libzmq%lib{zmq}
```
