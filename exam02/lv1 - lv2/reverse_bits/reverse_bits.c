unsigned char reverse_bits(unsigned char octet){
	int i = 8;
	unsigned char bits = 0;
	
	while(i--){
		bits <<= 1;
		bits |= (octet & 1);
		octet >>= 1;
	}
	return bits;
}
