int process_pixel(int level, int lim) {

	int new_level;

	new_level = level + lim;
	if(new_level > 255){
		new_level = 255;
	}

	return new_level;
}
