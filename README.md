# UPF libraries

This is a set of a few C++ libraries meant to ease the development of
networking software, especially in the specific context of 4G and 5G
networks. They provide ways to deal with Ethernet frames, IPv4
packets, and some of the protocols commonly found in 4G and 5G
networks (SCTP, GTP-U, S1AP).

They were born as libraries (for Linux-based systems) providing the
infrastructure for a userspace application intercepting, analyzing,
routing and/or modifying networking traffic between eNodeBs, an
Enhanced Packet Core (EPC) in the context of a 4G network and other
hosts implementing Virtual Network Functions (VNFs), in order to
implement part of a Mobile Edge Computing (MEC) platform.

The code is almost exclusively standard C++14 cross-platform code (and
some autogenerated standard C99 code), with a few bits (namely, raw
sockets) which are platform-dependant.


# Involved technologies

* C++14 (and C99 where required) on Ubuntu 18.04 64-bit

  At the moment, libraries are built on Ubuntu 18.04 either with
  **GCC 7.x** (`g++-7`) or with **CLang 6.x** (`clang-6.0`), but other
  versions should be ok as long as they are able to correctly compile
  C++14 and C99 64-bit code;

* raw sockets.

  No external library is required, just plain Linux standard
  development headers.

* **CMake 3.10** or newer; older versions could be ok but are untested.

* **GNU Make**.

* **clang-format** as the tool to reformat source files.

* **Doxygen** as the tool to generate user documentation.

* The ["brchiu" fork of **ASN1c**](https://github.com/brchiu/asn1c) on
  branch `origin/velichkov_s1ap_plus_option_group`, integrating
  support for APER encoding and other features used in S1AP, as the
  tool to generate a S1AP parser from the description written in ASN.1
  found in 3GPP TS 36.413. 
  
  This is **not required** to perform a build, as generated sources
  are already included in the source tree.

  Note that at the time of this writing (2019-03-04):

  * the stable version of ASN1c is still 0.9.28, which neither has
    support for the ASN.1 features used in S1AP nor has support for
    APER encoding;

  * the latest [official development release of asn1c](https://github.com/vlm/asn1c)
    can mostly handle S1AP ASN.1 description, but has not yet
    integrated APER support.

# Source tree

* `lib` contains the various libraries and their include files:

  * `src/upfrawsocketslib/`: a simple C++ interface to Linux's
    `AF_PACKET` sockets and other Linux-specific low-level stuff;

  * `src/upfnetworklib/`: code dealing with various network protocols
    which is platform-independent. Endianess is taken in account.
    **Note that most code is in the headers** so the C++ compiler can
    do a better job at optimizing it.
    It also includes a very bare-bone reader of `.pcap` files which
    doesn't depend on libpcap, supporting only a few formats -- just
    for testing purposes.

  * `src/upfdumperlib/*`: code to dump networklib structures and packets
    in a human-readable format. It depends on networklib and s1aplib.

  * `src/upfasn1lib/*`: the S1AP parser generated by asn1c from the ASN.1
    description found in 3GPP TS 36.413.

  * `src/upfs1aplib/*`: generic code using the S1AP parser. Depends on asn1lib.

  * `src/upfrouterlib/*`: specific code implementing most of UPFRouter
    specific functionalities.

  * `includes/*`: include files for the above libraries, each in its own
    subdirectory.

* `examples/*`: sources of some small example programs:

     *  `sample1`: captures traffic on a network interface and dumps it;

     *  `repeater`: captures traffic on a network interface, dumps it
        and **send it out again** unmodified, unless it's directed to
        a Ethernet broadcast address or it's larger than ther network
        interface's MTU)

     *  `readpcap2`: dumps the content of a `.pcap` file in a
        human-readable form.

     *  `ipv4address` and `macaddress`: toy programs respectively
        parsing and printing back IPv4 addresses and MAC addresses
        given as command line parameters (or parsing errors if they
        are not valid).

     *  `printsize`: print the `sizeof()` of common types
        (i.e. classes and structs) used in this project.

* `doc/*`: Doxygen configuration file and Doxygen-generated documentation.

# Build

The build system is based on CMake, which generates automatically
whatever's needed to build the libraries. 

The build options are specified via CMake variables, which can be
specified when generating the build environment.

## Build dependencies

* **GCC** or **CLang** supporting C++14 and C99.

  Any GCC version >= 5.x should work. Any CLang version >= 3.4 should work.

  Both GCC 7.3 and CLang 6.0.0 are known to work.

* **CMake 3.10** or newer; older versions could be ok, but are untested.

* **GNU Make** as a backend for CMake.

  GNU Make 4.1 is known to work.

* Linux standard C headers for networking development (raw sockets, tun/tap, etc.);

* Note: there is no build dependency on asn1c, as all the generated C
        code has been included in the source tree and has no external
        dependencies.

## How to build and install

On a clean checkout, just invoke CMake telling if this is a 'Release'
build or a 'Debug' build, plus any other option, and then use `make`
to build and install everything.

A few CMake variables that you may want to  define when invoking CMake with
option -D:

* `CMAKE_BUILD_TYPE` should be set to `Release` or `Debug`. There is
  no default value (as there can't really be one because of the way
  CMake works);

* `CMAKE_INSTALL_PREFIX` defaults to `/usr/local` on Linux-based systems,
   and is the prefix used for installation;
   
* `BUILD_SHARED_LIBS` when set to ON, it builds the libraries as
  shared libraries. Leave it set to `OFF` to build archive libraries.
  
* `UPFROUTER_BUILD_EXAMPLES`: set it to `ON` to build also the example
  programs.


Example for a **release** build on a Unix-like system using the
default compilers in your $PATH and attempting to build the libraries
as archive libraries and install them and their headers in
`/tmp/build`

```
cd upflib
cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=OFF -DCMAKE_INSTALL_PREFIX=/tmp/build
make
make install
```


The same as above, but building shared libraries and installing them in `/usr/local`

```
cd upflib
cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=ON -DCMAKE_INSTALL_PREFIX=/usr/local
make
make install
```


Builds the documentation using Doxygen

Example for building Doxygen development documentation (when Doxygen
is available):

```
cd upflib
cmake -DCMAKE_BUILD_TYPE=Release .
make doc
```

The documentation can then be found in .../doc/html/index.html


### Other builds examples

Example of a **debug** build which will build also the example
programs:

```
cd upflib
cmake -DCMAKE_BUILD_TYPE=Debug \
  -DUPFROUTER_BUILD_EXAMPLES=ON \
  .
make
```


Example for a verbose **debug** build (`VERBOSE=1` shows the actual
commands being executed to build):

```
cd upflib
cmake -DCMAKE_BUILD_TYPE=Debug .
make VERBOSE=1
```

Example for a verbose **debug** build using a specific C++ compiler:

```
cd upflib
CXX=/usr/bin/clang++ cmake -DCMAKE_BUILD_TYPE=Debug .
make VERBOSE=1
```

Example for a verbose **debug** build using a specific C++ compiler
and **ccache** to speed up rebuilds:

```
cd upflib
PATH="/usr/lib/ccache:$PATH" CXX=/usr/lib/ccache/clang++ cmake -DCMAKE_BUILD_TYPE=Debug .
make VERBOSE=1
```
