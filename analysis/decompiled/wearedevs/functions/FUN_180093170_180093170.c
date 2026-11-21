/* FUN_180093170 @ 180093170 */

void FUN_180093170(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_180177db0();
  if (cVar1 != '\0') {
    FUN_1800931c0(param_1 + 0x20);
    FUN_180093430(param_1);
    return;
  }
  cVar1 = FUN_180177f20(param_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_180091ba0(param_1);
  return;
}


