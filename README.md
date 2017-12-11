To test the external module:

```
$ cd /tmp/
$ git clone https://github.com/galpeter/iotjs.git -b external-modules-cmake /tmp/iotjs/
$ git clone https://github.com/galpeter/iotjs_ext_dem.git /tmp/iotjs_ext_dem
$ cd /tmp/iotjs/
$ ./tools/build.py --cmake-param=-DENABLE_MODULE_MYMODULE=ON --external-modules=/tmp/iotjs_ext_dem/ --no-check-test
$ ./build/x86_64-linux/debug/bin/iotjs /tmp/iotjs_ext_dem/test/test.js
```
