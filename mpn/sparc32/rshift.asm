! sparc __mpn_rshift --

! Copyright (C) 1995, 1996 Free Software Foundation, Inc.

! This file is part of the GNU MP Library.

! The GNU MP Library is free software; you can redistribute it and/or modify
! it under the terms of the GNU Library General Public License as published by
! the Free Software Foundation; either version 2 of the License, or (at your
! option) any later version.

! The GNU MP Library is distributed in the hope that it will be useful, but
! WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
! or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
! License for more details.

! You should have received a copy of the GNU Library General Public License
! along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
! the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
! MA 02111-1307, USA.


! INPUT PARAMETERS
! res_ptr	%o0
! src_ptr	%o1
! size		%o2
! cnt		%o3

include(`../config.m4')

ASM_START()
PROLOGUE(mpn_rshift)
	ld	[%o1],%g2	! load first limb
	sub	%g0,%o3,%o5	! negate shift count
	add	%o2,-1,%o2
	andcc	%o2,4-1,%g4	! number of limbs in first loop
	sll	%g2,%o5,%g1	! compute function result
	be	L(0)		! if multiple of 4 limbs, skip first loop
	st	%g1,[%sp+80]

	sub	%o2,%g4,%o2	! adjust count for main loop

L(loop0):
	ld	[%o1+4],%g3
	add	%o0,4,%o0
	add	%o1,4,%o1
	addcc	%g4,-1,%g4
	srl	%g2,%o3,%o4
	sll	%g3,%o5,%g1
	mov	%g3,%g2
	or	%o4,%g1,%o4
	bne	L(loop0)
	 st	%o4,[%o0-4]

L(0):	tst	%o2
	be	L(end)
	 nop

L(loop):
	ld	[%o1+4],%g3
	add	%o0,16,%o0
	addcc	%o2,-4,%o2
	srl	%g2,%o3,%o4
	sll	%g3,%o5,%g1

	ld	[%o1+8],%g2
	srl	%g3,%o3,%g4
	or	%o4,%g1,%o4
	st	%o4,[%o0-16]
	sll	%g2,%o5,%g1

	ld	[%o1+12],%g3
	srl	%g2,%o3,%o4
	or	%g4,%g1,%g4
	st	%g4,[%o0-12]
	sll	%g3,%o5,%g1

	ld	[%o1+16],%g2
	srl	%g3,%o3,%g4
	or	%o4,%g1,%o4
	st	%o4,[%o0-8]
	sll	%g2,%o5,%g1

	add	%o1,16,%o1
	or	%g4,%g1,%g4
	bne	L(loop)
	 st	%g4,[%o0-4]

L(end):	srl	%g2,%o3,%g2
	st	%g2,[%o0-0]
	retl
	ld	[%sp+80],%o0
EPILOGUE(mpn_rshift)
