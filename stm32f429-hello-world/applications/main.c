/*
 * Copyright (c) 2006-2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-06-29     RT-Thread    first version
 */

#include <stdio.h>
#include <board.h>

int main(void) {
  int i = 1;
  while (i++) {
    printf("Hello RT-Thread!\r\n");
    printf("%d\r\n", i);
    wait_ms(1000);
  }

  return 0;
}
