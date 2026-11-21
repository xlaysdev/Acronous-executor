/* FUN_1801e5600 @ 1801e5600 */

bool FUN_1801e5600(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1801e4520(*param_1);
  if (lVar1 != 0) {
    if (param_1[1] != 0) {
      FUN_1801e2450(param_1 + 1);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


