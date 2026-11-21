/* FUN_180093120 @ 180093120 */

void FUN_180093120(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_180177db0();
  if (cVar1 != '\0') {
    FUN_1800931c0(param_1 + 0x20);
    FUN_1800936b0(param_1);
    return;
  }
  cVar1 = FUN_180177f20(param_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_180091d00(param_1);
  return;
}


