int process_pixel(int level, int lim) {

	int new_level;

	if(level<lim){
		new_level = 0;
	}
	else{
		new_level = 255;
	}

	return new_level;
}
