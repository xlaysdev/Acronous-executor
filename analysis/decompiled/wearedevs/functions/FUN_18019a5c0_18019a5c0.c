/* FUN_18019a5c0 @ 18019a5c0 */

undefined * FUN_18019a5c0(int *param_1,undefined8 param_2)

{
  switch(param_2) {
  case 2:
    if ((short)*param_1 == 0x7377) {
      return (undefined *)0x1;
    }
    break;
  case 3:
    if (*(char *)((longlong)param_1 + 2) == 's' && (short)*param_1 == 0x7377) {
      return &DAT_180267b01;
    }
    if (*(char *)((longlong)param_1 + 2) == 'p' && (short)*param_1 == 0x7466) {
      return &DAT_180267b01;
    }
    break;
  case 4:
    if (*param_1 == 0x70747468) {
      return (undefined *)0x1;
    }
    if (*param_1 == 0x656c6966) {
      return (undefined *)0x0;
    }
    break;
  case 5:
    if ((char)param_1[1] == 's' && *param_1 == 0x70747468) {
      return (undefined *)0x1;
    }
  }
  return (undefined *)0x2;
}


