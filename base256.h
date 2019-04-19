#ifndef BASE256_H_INCLUDED
#define BASE256_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

int base256_encode(unsigned char *src, int in_len, unsigned char *sec_data, int out_len);

int base256_decode(unsigned char *sec_data, int in_len, unsigned char *plaintext, int out_len);

#ifdef __cplusplus
}
#endif // __cplusplus


#endif // BASE256_H_INCLUDED
