/**
 * Blitz P2P Bridge - Tunnel TCP for p2p streams
 *
 * Unit tests
 *
 * This server provides a means for two, or more, app to
 * communicate continuously over TCP. Basically when app A write
 * on channel the app B receive the data and viceversa of course.
 *
 * Copyright 2018 Luis Fernando Batels <luisfbatels@gmail.com>
 */

#include "api.h"
#include <criterion/criterion.h>

Test(basic, start)
{
    cr_assert_eq(for_test(), 0);
}
