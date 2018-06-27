//
//  Mmount1131.h
//  multi_path
//
//  Created by Marcel Cianchino on 2018-06-24.
//  Copyright © 2018 Ian Beer. All rights reserved.
//

#ifndef Mmount1131_h
#define Mmount1131_h

#include <stdio.h>

//
//  re1131mount.m
//  multi_path
//
//  Created by Marcel Cianchino on 2018-06-24.
//  Copyright © 2018 Ian Beer. All rights reserved.
//

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <sys/syscall.h>
#include <unistd.h>

#include <errno.h>
#include <sys/attr.h>
#include <sys/snapshot.h>

#endif /* Mmount1131_h */
int do_create(int dirfd, const char *vol, const char *snap);

int do_rename(int dirfd, const char *vol, const char *snap, const char *nw);

int check_snapshot(int dirfd, const char *vol, const char *snap);

char *find_system_snapshot(int dirfd);

int fsmain(int argc, char **argv);
