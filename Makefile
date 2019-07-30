AUTO = npm run -- autogypi
GYPFLAGS = --init-gyp -p nbind -s
NG = npm run -- node-gyp
cpp = mobile.cpp
RUNINIT = $(AUTO) $(GYPFLAGS) $(cpp)
NFLAGS = configure build
all: build mv clean

build : config
	$(NG) $(NFLAGS)

config :
	$(RUNINIT)


mv :
	cp build/Release/nbind.node ./Mobile.node


clean : 
	rm -rf auto-top.gypi auto.gypi binding.gyp autogypi.json build
