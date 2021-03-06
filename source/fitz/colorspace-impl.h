#ifndef MUPDF_FITZ_COLORSPACE_IMPL_H
#define MUPDF_FITZ_COLORSPACE_IMPL_H

struct fz_colorspace_s
{
	fz_storable storable;
	size_t size;
	char name[16];
	int n;
	fz_colorspace_convert_fn *to_rgb;
	fz_colorspace_convert_fn *from_rgb;
	fz_colorspace_destruct_fn *free_data;
	void *data;
};

#endif
