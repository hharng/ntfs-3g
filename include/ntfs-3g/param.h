/*
 * param.h - Parameter values for ntfs-3g
 *
 * Copyright (c) 2009      Jean-Pierre Andre
 *
 * This program/include file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program/include file is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (in the main directory of the NTFS-3G
 * distribution in the file COPYING); if not, write to the Free Software
 * Foundation,Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _NTFS_PARAM_H
#define _NTFS_PARAM_H

#define CACHE_INODE_SIZE 32	/* inode cache, zero or >= 3 and not too big */
#define CACHE_SECURID_SIZE 16    /* securid cache, zero or >= 3 and not too big */
#define CACHE_LEGACY_SIZE 8    /* legacy cache size, zero or >= 3 and not too big */

#define FORCE_FORMAT_v1x 0	/* Insert security data as in NTFS v1.x */
#define OWNERFROMACL 1		/* Get the owner from ACL (not Windows owner) */

#endif /* defined _NTFS_PARAM_H */