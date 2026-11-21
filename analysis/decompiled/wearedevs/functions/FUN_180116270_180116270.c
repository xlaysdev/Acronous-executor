/* FUN_180116270 @ 180116270 */

bool FUN_180116270(longlong param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_1801620d0(param_1,*param_2);
    return *(char *)(param_1 + 0x18) == '\0';
  }
  return false;
}


