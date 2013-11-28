/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999-2003, 2009, 2010, 2012, 2013 Free Software
Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define BYTES_PER_MP_LIMB 4

/* 1700MHz Cortex-A15 with Neon (in spite of file position) */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          3
#define MOD_1U_TO_MOD_1_1_THRESHOLD          3
#define MOD_1_1_TO_MOD_1_2_THRESHOLD         9
#define MOD_1_2_TO_MOD_1_4_THRESHOLD     MP_SIZE_T_MAX
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      8
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           15

#define MUL_TOOM22_THRESHOLD                32
#define MUL_TOOM33_THRESHOLD               113
#define MUL_TOOM44_THRESHOLD               160
#define MUL_TOOM6H_THRESHOLD               422
#define MUL_TOOM8H_THRESHOLD               597

#define MUL_TOOM32_TO_TOOM43_THRESHOLD     109
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     122
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     109
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     126
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     154

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 40
#define SQR_TOOM3_THRESHOLD                138
#define SQR_TOOM4_THRESHOLD                363
#define SQR_TOOM6_THRESHOLD                517
#define SQR_TOOM8_THRESHOLD                725

#define MULMID_TOOM42_THRESHOLD             52

#define MULMOD_BNM1_THRESHOLD               17
#define SQRMOD_BNM1_THRESHOLD               23

#define MUL_FFT_MODF_THRESHOLD             550  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    550, 5}, {     25, 6}, {     27, 7}, {     15, 6}, \
    {     31, 7}, {     19, 6}, {     39, 7}, {     25, 6}, \
    {     51, 7}, {     27, 8}, {     15, 7}, {     33, 8}, \
    {     19, 7}, {     41, 8}, {     23, 7}, {     51, 8}, \
    {     27, 9}, {     15, 8}, {     31, 7}, {     63, 8}, \
    {     39, 9}, {     23, 8}, {     51,10}, {     15, 9}, \
    {     31, 8}, {     67, 9}, {     39, 8}, {     79, 9}, \
    {     47, 8}, {     99, 9}, {     55,10}, {     31, 9}, \
    {     79,10}, {     47, 9}, {    103,11}, {     31,10}, \
    {     63, 9}, {    135,10}, {     79, 9}, {    159,10}, \
    {     95, 9}, {    191,10}, {    111,11}, {     63,10}, \
    {    159, 9}, {    319,11}, {     95,10}, {    191, 9}, \
    {    383, 8}, {    767,10}, {    207,12}, {     63,11}, \
    {    127, 9}, {    543,11}, {    159,10}, {    319, 9}, \
    {    639,10}, {    335, 9}, {    671,10}, {    351,11}, \
    {    191,10}, {    383, 9}, {    767,10}, {    399, 9}, \
    {    799,10}, {    415,11}, {    223,12}, {    127,11}, \
    {    255,10}, {    543,11}, {    287,10}, {    607,11}, \
    {    319,10}, {    671,11}, {    351,10}, {    703,12}, \
    {    191,11}, {    383,10}, {    799,11}, {    415,10}, \
    {    831,13}, {    127,12}, {    255,11}, {    543,10}, \
    {   1087,11}, {    607,12}, {    319,11}, {    735,12}, \
    {    383,11}, {    831,12}, {    447,11}, {    959,12}, \
    {    511,11}, {   1023,12}, {    575,11}, {   1151,12}, \
    {    639,11}, {   1279,12}, {    703,11}, {   1407,13}, \
    {    383,12}, {    767,11}, {   1535,12}, {    959,13}, \
    {    511,12}, {   1215,13}, {    639,12}, {   1471,13}, \
    {    767,12}, {   1599,13}, {    895,14}, {    511,13}, \
    {   1023,12}, {   2047,13}, {   1151,12}, {   2431,13}, \
    {   1279,14}, {    767,13}, {   1535,12}, {   3071,13}, \
    {   1663,15}, {    511,14}, {   1023,13}, {   2303,14}, \
    {  16384,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 126
#define MUL_FFT_THRESHOLD                 5760

#define SQR_FFT_MODF_THRESHOLD             530  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    530, 5}, {     25, 6}, {     27, 7}, {     15, 6}, \
    {     31, 7}, {     17, 6}, {     35, 7}, {     19, 6}, \
    {     39, 7}, {     25, 6}, {     51, 7}, {     27, 8}, \
    {     15, 7}, {     33, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     51, 8}, {     27, 7}, {     55, 9}, \
    {     15, 8}, {     31, 7}, {     63, 8}, {     39, 9}, \
    {     23, 8}, {     55,10}, {     15, 9}, {     31, 8}, \
    {     67, 9}, {     39, 8}, {     79, 9}, {     47, 8}, \
    {     95, 9}, {     55,10}, {     31, 9}, {     79,10}, \
    {     47, 9}, {     95,11}, {     31,10}, {     63, 9}, \
    {    135,10}, {     79, 9}, {    159,10}, {     95, 9}, \
    {    191,10}, {    111,11}, {     63,10}, {    143, 9}, \
    {    287,10}, {    159,11}, {     95,10}, {    191, 9}, \
    {    383,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    271, 9}, {    543,10}, {    287,11}, \
    {    159,10}, {    319, 9}, {    639,10}, {    335, 9}, \
    {    671,10}, {    351,11}, {    191,10}, {    383, 9}, \
    {    767,10}, {    399, 9}, {    799,10}, {    415,11}, \
    {    223,12}, {    127,11}, {    255,10}, {    543,11}, \
    {    287,10}, {    607,11}, {    319,10}, {    671,11}, \
    {    351,12}, {    191,11}, {    383,10}, {    799,11}, \
    {    415,10}, {    831,13}, {    127,12}, {    255,11}, \
    {    543,10}, {   1087,11}, {    607,12}, {    319,11}, \
    {    735,12}, {    383,11}, {    831,12}, {    447,11}, \
    {    991,13}, {    255,12}, {    511,11}, {   1023,12}, \
    {    575,11}, {   1215,12}, {    639,11}, {   1279,12}, \
    {    703,13}, {    383,12}, {    767,11}, {   1535,12}, \
    {    959,13}, {    511,12}, {   1215,13}, {    639,12}, \
    {   1471,13}, {    767,12}, {   1663,13}, {    895,14}, \
    {    511,13}, {   1023,12}, {   2111,13}, {   1151,12}, \
    {   2431,13}, {   1279,14}, {    767,13}, {   1535,12}, \
    {   3071,13}, {   1663,15}, {    511,14}, {   1023,13}, \
    {   2303,14}, {  16384,15}, {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 131
#define SQR_FFT_THRESHOLD                 4736

#define MULLO_BASECASE_THRESHOLD             6
#define MULLO_DC_THRESHOLD                  36
#define MULLO_MUL_N_THRESHOLD             8907

#define DC_DIV_QR_THRESHOLD                 57
#define DC_DIVAPPR_Q_THRESHOLD             284
#define DC_BDIV_QR_THRESHOLD                48
#define DC_BDIV_Q_THRESHOLD                312

#define INV_MULMOD_BNM1_THRESHOLD           62
#define INV_NEWTON_THRESHOLD               266
#define INV_APPR_THRESHOLD                 268

#define BINV_NEWTON_THRESHOLD              372
#define REDC_1_TO_REDC_2_THRESHOLD          59
#define REDC_2_TO_REDC_N_THRESHOLD           0  /* always */

#define MU_DIV_QR_THRESHOLD               1752
#define MU_DIVAPPR_Q_THRESHOLD            1718
#define MUPI_DIV_QR_THRESHOLD              114
#define MU_BDIV_QR_THRESHOLD              1528
#define MU_BDIV_Q_THRESHOLD               1752

#define POWM_SEC_TABLE  2,29,225,417,1510

#define MATRIX22_STRASSEN_THRESHOLD         19
#define HGCD_THRESHOLD                      57
#define HGCD_APPR_THRESHOLD                167
#define HGCD_REDUCE_THRESHOLD             3389
#define GCD_DC_THRESHOLD                   148
#define GCDEXT_DC_THRESHOLD                492
#define JACOBI_BASE_METHOD                   4

#define GET_STR_DC_THRESHOLD                16
#define GET_STR_PRECOMPUTE_THRESHOLD        32
#define SET_STR_DC_THRESHOLD               125
#define SET_STR_PRECOMPUTE_THRESHOLD      1084

#define FAC_DSC_THRESHOLD                  309
#define FAC_ODD_THRESHOLD                   24
