# srcを引数で渡す
run:
	g++-11 -o build/main main.cpp sort/*.cpp `sdl2-config --cflags --libs`
	build/main
