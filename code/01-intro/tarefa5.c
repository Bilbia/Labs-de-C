int process_pixel(int level, int cont) {

	int new_level;

	new_level = level*cont;
	if (new_level > 255){
		new_level = 255;
	}

	return new_level;
}
