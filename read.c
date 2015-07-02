#include <stdio.h>

int main(){
	short data; // short is 16-bit
	char * infile_name = "Xxxxxxxxx~ Xxx_4011285f-f833-4d07-af13-25cb70dd8792_001.erd"; // fix that
    FILE * infile = fopen(infile_name, "rb");  // Note "b" needed in MS
    if (infile == NULL)
    {
    	fprintf(stderr, "Could not open %s\n", infile_name);
        return 1;
    }
        while (1 == fread(&number, sizeof(data), 1, infile)
        {
            printf("%.4f\n", number / (float)32768;
        }
        // close input file, finish up
}
