{
  "targets": [
    {
      "target_name": "Mobile",
      "sources": [ "mobile.cpp", "mobile_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}