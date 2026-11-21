/* FUN_180112430 @ 180112430 */

undefined1 * FUN_180112430(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_180112560(param_3);
  uVar2 = 2;
  if ((uVar1 & 1) != 0) {
    param_1[5] = (char)(uVar1 >> 0x28);
    *(int *)(param_1 + 1) = (int)(uVar1 >> 8);
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}


